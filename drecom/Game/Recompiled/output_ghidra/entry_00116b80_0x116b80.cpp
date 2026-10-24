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

// Function: entry_00116b80
// Address: 0x116b80 - 0x116bc4
void entry_00116b80_0x116b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116b80_0x116b80");
#endif

    switch (ctx->pc) {
        case 0x116b94u: goto label_116b94;
        case 0x116bb8u: goto label_116bb8;
        default: break;
    }

    ctx->pc = 0x116b80u;

    // 0x116b80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116b84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b88: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116b8c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116B8Cu;
    SET_GPR_U32(ctx, 31, 0x116B94u);
    ctx->pc = 0x116B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B8Cu;
    // 0x116b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116B8Cu, 0x116B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B94u;
label_116b94:
    // 0x116b94: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x116b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116b98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x116b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b9c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116B9Cu;
    {
        const bool branch_taken_0x116b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x116BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B9Cu;
        // 0x116ba0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b9c) {
            ctx->pc = 0x116BC4u;
            return;
        }
    }
    ctx->pc = 0x116BA4u;
    // 0x116ba4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x116ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ba8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116bac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bb0: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116BB0u;
    SET_GPR_U32(ctx, 31, 0x116BB8u);
    ctx->pc = 0x116BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BB0u;
    // 0x116bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116BB0u, 0x116BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BB8u;
label_116bb8:
    // 0x116bb8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116bbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x116BBCu;
    {
        const bool branch_taken_0x116bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BBCu;
        // 0x116bc0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bbc) {
            ctx->pc = 0x116BF4u;
            return;
        }
    }
    ctx->pc = 0x116BC4u;
}
