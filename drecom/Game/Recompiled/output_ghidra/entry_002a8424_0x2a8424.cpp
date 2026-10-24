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

// Function: entry_002a8424
// Address: 0x2a8424 - 0x2a84b4
void entry_002a8424_0x2a8424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8424_0x2a8424");
#endif

    switch (ctx->pc) {
        case 0x2a8430u: goto label_2a8430;
        case 0x2a845cu: goto label_2a845c;
        case 0x2a8474u: goto label_2a8474;
        case 0x2a848cu: goto label_2a848c;
        case 0x2a84acu: goto label_2a84ac;
        default: break;
    }

    ctx->pc = 0x2a8424u;

    // 0x2a8424: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a8424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8428: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8428u;
    SET_GPR_U32(ctx, 31, 0x2A8430u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8428u, 0x2A8430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8430u;
label_2a8430:
    // 0x2a8430: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a8430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8434: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a8434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8438: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a8438u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a843c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a843cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a8440: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a8440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a8444: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2a8444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8448: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a8448u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a844c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8450: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a8450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8454: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A8454u;
    SET_GPR_U32(ctx, 31, 0x2A845Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A8454u, 0x2A845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A845Cu;
label_2a845c:
    // 0x2a845c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8460: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a8460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a8464: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a8464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8468: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a846c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A846Cu;
    SET_GPR_U32(ctx, 31, 0x2A8474u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A846Cu, 0x2A8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8474u;
label_2a8474:
    // 0x2a8474: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8478: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a8478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a847c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a847cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a8480: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a8480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8484: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A8484u;
    SET_GPR_U32(ctx, 31, 0x2A848Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A8484u, 0x2A848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A848Cu;
label_2a848c:
    // 0x2a848c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a848cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8490: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8494: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a8494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a8498: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a8498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a849c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a849cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a84a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a84a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a84a4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A84A4u;
    SET_GPR_U32(ctx, 31, 0x2A84ACu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A84A4u, 0x2A84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A84ACu;
label_2a84ac:
    // 0x2a84ac: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2A84ACu;
    {
        const bool branch_taken_0x2a84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a84ac) {
            ctx->pc = 0x2A85D8u;
            return;
        }
    }
    ctx->pc = 0x2A84B4u;
}
