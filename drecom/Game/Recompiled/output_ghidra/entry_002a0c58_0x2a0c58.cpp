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

// Function: entry_002a0c58
// Address: 0x2a0c58 - 0x2a0cd8
void entry_002a0c58_0x2a0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0c58_0x2a0c58");
#endif

    switch (ctx->pc) {
        case 0x2a0c64u: goto label_2a0c64;
        case 0x2a0c7cu: goto label_2a0c7c;
        case 0x2a0c9cu: goto label_2a0c9c;
        case 0x2a0cb4u: goto label_2a0cb4;
        default: break;
    }

    ctx->pc = 0x2a0c58u;

    // 0x2a0c58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0c5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0C5Cu, 0x2A0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C64u;
label_2a0c64:
    // 0x2a0c64: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0c6c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0c70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c74: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0C74u;
    SET_GPR_U32(ctx, 31, 0x2A0C7Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0C74u, 0x2A0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C7Cu;
label_2a0c7c:
    // 0x2a0c7c: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c80: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a0c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0c84: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x2a0c84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0c88: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2a0c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0c8c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c94: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0C94u;
    SET_GPR_U32(ctx, 31, 0x2A0C9Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0C94u, 0x2A0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C9Cu;
label_2a0c9c:
    // 0x2a0c9c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ca0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0ca4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0ca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0cac: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0CACu;
    SET_GPR_U32(ctx, 31, 0x2A0CB4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0CACu, 0x2A0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CB4u;
label_2a0cb4:
    // 0x2a0cb4: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0cb8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0cb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0cbc: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x2a0cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0cc0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a0cc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0cc4: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x2a0cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0cc8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2a0cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0ccc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0cd0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0CD0u;
    SET_GPR_U32(ctx, 31, 0x2A0CD8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0CD0u, 0x2A0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CD8u;
}
