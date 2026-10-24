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

// Function: entry_0033ffc8
// Address: 0x33ffc8 - 0x340000
void entry_0033ffc8_0x33ffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ffc8_0x33ffc8");
#endif

    switch (ctx->pc) {
        case 0x33ffecu: goto label_33ffec;
        case 0x33fffcu: goto label_33fffc;
        default: break;
    }

    ctx->pc = 0x33ffc8u;

    // 0x33ffc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33ffcc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33ffccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33ffd0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffd4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x33ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffd8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x33ffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffdc: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x33ffdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ffe0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x33ffe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33ffe4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x33FFE4u;
    SET_GPR_U32(ctx, 31, 0x33FFECu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x33FFE4u, 0x33FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFECu;
label_33ffec:
    // 0x33ffec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x33ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fff0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33fff0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33fff4: 0xc0cfc80  jal         func_33F200
    ctx->pc = 0x33FFF4u;
    SET_GPR_U32(ctx, 31, 0x33FFFCu);
    ctx->pc = 0x33F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F200u, 0x33FFF4u, 0x33FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FFFCu;
label_33fffc:
    // 0x33fffc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33fffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x340000u;
}
