#######################################################
RTOS Application Template for XCORE.AI
#######################################################

Template for starting a new RTOS application on xcore.ai.

To use this template to create a new RTOS application on xcore.ai, create a new repository using this repository as its template by clicking the "Use this template" button on this repository's github page.

Clone this (or derived) repository using

.. code-block:: bash

    $ git clone LINK-TO-REPO

Note that the XMOS AIoT SDK is required to build the application. This may be obtained from github.com at https://github.com/xmos/aiot_sdk. The environment variable XMOS_AIOT_SDK_PATH must be set to point to the root of this repository.

If the AIoT SDK is not already installed on the system, then the provided script 'get_aiot_sdk.sh' may optionally be run to add the AIoT SDK as a submodule to the project, and sets the environment variable accordingly.

To build the application, from the root of the repository run:

.. code-block:: bash

    $ cd app
    $ make

To run the application on an xCORE board, first ensure the board is connected to the computer via an xTAG. Then, from the app directory, run:

.. code-block:: bash

    $ make run
