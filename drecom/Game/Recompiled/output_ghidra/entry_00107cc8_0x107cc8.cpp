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

// Function: entry_00107cc8
// Address: 0x107cc8 - 0x107d10
void entry_00107cc8_0x107cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107cc8_0x107cc8");
#endif

    switch (ctx->pc) {
        case 0x107cd0u: goto label_107cd0;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cf0u: goto label_107cf0;
        case 0x107d04u: goto label_107d04;
        default: break;
    }

    ctx->pc = 0x107cc8u;

label_107cc8:
    // 0x107cc8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CC8u;
    SET_GPR_U32(ctx, 31, 0x107CD0u);
    ctx->pc = 0x107CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CC8u;
    // 0x107ccc: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CC8u, 0x107CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CD0u;
label_107cd0:
    // 0x107cd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x107cd4: 0x26833de8  addiu       $v1, $s4, 0x3DE8
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 15848));
    // 0x107cd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cdc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x107cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x107ce0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CE0u;
    SET_GPR_U32(ctx, 31, 0x107CE8u);
    ctx->pc = 0x107CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CE0u;
    // 0x107ce4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CE0u, 0x107CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CE8u;
label_107ce8:
    // 0x107ce8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CE8u;
    SET_GPR_U32(ctx, 31, 0x107CF0u);
    ctx->pc = 0x107CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CE8u;
    // 0x107cec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CE8u, 0x107CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CF0u;
label_107cf0:
    // 0x107cf0: 0x26633df8  addiu       $v1, $s3, 0x3DF8
    ctx->pc = 0x107cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15864));
    // 0x107cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cf8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x107cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x107cfc: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CFCu;
    SET_GPR_U32(ctx, 31, 0x107D04u);
    ctx->pc = 0x107D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CFCu;
    // 0x107d00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CFCu, 0x107D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D04u;
label_107d04:
    // 0x107d04: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x107d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x107d08: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107cc8;
        }
    }
    ctx->pc = 0x107D10u;
}
