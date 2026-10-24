#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010dba0
// Address: 0x10dba0 - 0x10dbc4
void entry_0010dba0_0x10dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dba0_0x10dba0");
#endif

    ctx->pc = 0x10dba0u;

label_10dba0:
    // 0x10dba0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10dba4: 0x0  nop
    ctx->pc = 0x10dba4u;
    // NOP
    // 0x10dba8: 0x0  nop
    ctx->pc = 0x10dba8u;
    // NOP
    // 0x10dbac: 0x0  nop
    ctx->pc = 0x10dbacu;
    // NOP
    // 0x10dbb0: 0x0  nop
    ctx->pc = 0x10dbb0u;
    // NOP
    // 0x10dbb4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10DBB4u;
    {
        const bool branch_taken_0x10dbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10dbb4) {
            ctx->pc = 0x10DBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10dba0;
        }
    }
    ctx->pc = 0x10DBBCu;
    // 0x10dbbc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10DBBCu;
    {
        const bool branch_taken_0x10dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBBCu;
        // 0x10dbc0: 0x26303e80  addiu       $s0, $s1, 0x3E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbbc) {
            ctx->pc = 0x10DB60u;
            return;
        }
    }
    ctx->pc = 0x10DBC4u;
}
