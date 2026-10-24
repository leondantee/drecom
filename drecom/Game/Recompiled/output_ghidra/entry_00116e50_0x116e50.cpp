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

// Function: entry_00116e50
// Address: 0x116e50 - 0x116e80
void entry_00116e50_0x116e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e50_0x116e50");
#endif

    switch (ctx->pc) {
        case 0x116e5cu: goto label_116e5c;
        default: break;
    }

    ctx->pc = 0x116e50u;

    // 0x116e50: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116e54: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E54u;
    SET_GPR_U32(ctx, 31, 0x116E5Cu);
    ctx->pc = 0x116E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E54u;
    // 0x116e58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E54u, 0x116E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E5Cu;
label_116e5c:
    // 0x116e5c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116e60: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x116E60u;
    {
        const bool branch_taken_0x116e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E60u;
        // 0x116e64: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e60) {
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x116E68u;
    // 0x116e68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116E68u;
    {
        const bool branch_taken_0x116e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E68u;
        // 0x116e6c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e68) {
            ctx->pc = 0x116E84u;
            return;
        }
    }
    ctx->pc = 0x116E70u;
    // 0x116e70: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116E70u;
    {
        const bool branch_taken_0x116e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x116E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E70u;
        // 0x116e74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e70) {
            ctx->pc = 0x116E80u;
            return;
        }
    }
    ctx->pc = 0x116E78u;
    // 0x116e78: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E78u;
    SET_GPR_U32(ctx, 31, 0x116E80u);
    ctx->pc = 0x116E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E78u;
    // 0x116e7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E78u, 0x116E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E80u;
}
