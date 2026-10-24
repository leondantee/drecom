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

// Function: entry_00116a2c
// Address: 0x116a2c - 0x116a84
void entry_00116a2c_0x116a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116a2c_0x116a2c");
#endif

    switch (ctx->pc) {
        case 0x116a40u: goto label_116a40;
        case 0x116a5cu: goto label_116a5c;
        case 0x116a80u: goto label_116a80;
        default: break;
    }

    ctx->pc = 0x116a2cu;

    // 0x116a2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x116a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116a30: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x116A30u;
    {
        const bool branch_taken_0x116a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A30u;
        // 0x116a34: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a30) {
            ctx->pc = 0x116A8Cu;
            return;
        }
    }
    ctx->pc = 0x116A38u;
    // 0x116a38: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116A38u;
    SET_GPR_U32(ctx, 31, 0x116A40u);
    ctx->pc = 0x116A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A38u;
    // 0x116a3c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116A38u, 0x116A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A40u;
label_116a40:
    // 0x116a40: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x116A40u;
    {
        const bool branch_taken_0x116a40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A40u;
        // 0x116a44: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a40) {
            ctx->pc = 0x116A90u;
            return;
        }
    }
    ctx->pc = 0x116A48u;
    // 0x116a48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116a4c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a50: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116a54: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116A54u;
    SET_GPR_U32(ctx, 31, 0x116A5Cu);
    ctx->pc = 0x116A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A54u;
    // 0x116a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116A54u, 0x116A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A5Cu;
label_116a5c:
    // 0x116a5c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x116a60: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x116a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x116a64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116A64u;
    {
        const bool branch_taken_0x116a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A64u;
        // 0x116a68: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a64) {
            ctx->pc = 0x116A84u;
            return;
        }
    }
    ctx->pc = 0x116A6Cu;
    // 0x116a6c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116a70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a74: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116a78: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116A78u;
    SET_GPR_U32(ctx, 31, 0x116A80u);
    ctx->pc = 0x116A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A78u;
    // 0x116a7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116A78u, 0x116A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A80u;
label_116a80:
    // 0x116a80: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x116a84u;
}
