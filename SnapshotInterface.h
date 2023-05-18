//
// Created by Khanh Nguyen on 3/17/23.
//

#ifndef MULTITEXT_SNAPSHOTINTERFACE_H
#define MULTITEXT_SNAPSHOTINTERFACE_H

#include "Snapshot.h"

class SnapshotInterface
{
public:
    // this function will return a snapshot of the object's current state
    virtual Snapshot * getSnapshot() = 0;

// this function will apply a snapshot to the object.
//This will revert the object back to the state that has been recorded in the snapshot
    virtual void applySnapshot(Snapshot * snapshot) = 0;

};


#endif //MULTITEXT_SNAPSHOTINTERFACE_H
