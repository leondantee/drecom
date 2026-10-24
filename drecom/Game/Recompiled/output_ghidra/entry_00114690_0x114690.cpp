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

// Function: entry_00114690
// Address: 0x114690 - 0x1146b4
void entry_00114690_0x114690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114690_0x114690");
#endif

    switch (ctx->pc) {
        case 0x1146acu: goto label_1146ac;
        default: break;
    }

    ctx->pc = 0x114690u;

    // 0x114690: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x114690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x114694: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114698: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x114698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11469c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11469Cu;
    {
        const bool branch_taken_0x11469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11469c) {
            ctx->pc = 0x1146B4u;
            return;
        }
    }
    ctx->pc = 0x1146A4u;
    // 0x1146a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1146A4u;
    SET_GPR_U32(ctx, 31, 0x1146ACu);
    ctx->pc = 0x1146A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146A4u;
    // 0x1146a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1146A4u, 0x1146ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146ACu;
label_1146ac:
    // 0x1146ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1146ACu;
    {
        const bool branch_taken_0x1146ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146ACu;
        // 0x1146b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146ac) {
            ctx->pc = 0x114750u;
            return;
        }
    }
    ctx->pc = 0x1146B4u;
}
