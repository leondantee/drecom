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

// Function: entry_001c516c
// Address: 0x1c516c - 0x1c51a4
void entry_001c516c_0x1c516c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c516c_0x1c516c");
#endif

    switch (ctx->pc) {
        case 0x1c519cu: goto label_1c519c;
        default: break;
    }

    ctx->pc = 0x1c516cu;

    // 0x1c516c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c516cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5170: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5174u;
    {
        const bool branch_taken_0x1c5174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5174) {
            ctx->pc = 0x1C51A4u;
            return;
        }
    }
    ctx->pc = 0x1C517Cu;
    // 0x1c517c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5184: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5188: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c5188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c518c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c518cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5194u;
    SET_GPR_U32(ctx, 31, 0x1C519Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5194u, 0x1C519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C519Cu;
label_1c519c:
    // 0x1c519c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C519Cu;
    {
        const bool branch_taken_0x1c519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c519c) {
            ctx->pc = 0x1C51C4u;
            return;
        }
    }
    ctx->pc = 0x1C51A4u;
}
