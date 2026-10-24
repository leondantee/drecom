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

// Function: entry_00118fc8
// Address: 0x118fc8 - 0x118ff8
void entry_00118fc8_0x118fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fc8_0x118fc8");
#endif

    switch (ctx->pc) {
        case 0x118fe0u: goto label_118fe0;
        default: break;
    }

    ctx->pc = 0x118fc8u;

label_118fc8:
    // 0x118fc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x118fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x118fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x118fd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118fd4: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x118fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x118fd8: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x118FD8u;
    SET_GPR_U32(ctx, 31, 0x118FE0u);
    ctx->pc = 0x118FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FD8u;
    // 0x118fdc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x118FD8u, 0x118FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FE0u;
label_118fe0:
    // 0x118fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fe4: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x118fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x118fe8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118FE8u;
    {
        const bool branch_taken_0x118fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118fe8) {
            ctx->pc = 0x118FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118FE8u;
            // 0x118fec: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118fc8;
        }
    }
    ctx->pc = 0x118FF0u;
    // 0x118ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118FF0u;
    {
        const bool branch_taken_0x118ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FF0u;
        // 0x118ff4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ff0) {
            ctx->pc = 0x118FFCu;
            return;
        }
    }
    ctx->pc = 0x118FF8u;
}
