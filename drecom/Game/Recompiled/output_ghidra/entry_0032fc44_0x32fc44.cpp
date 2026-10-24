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

// Function: entry_0032fc44
// Address: 0x32fc44 - 0x32fcb0
void entry_0032fc44_0x32fc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fc44_0x32fc44");
#endif

    switch (ctx->pc) {
        case 0x32fc64u: goto label_32fc64;
        case 0x32fc84u: goto label_32fc84;
        case 0x32fca8u: goto label_32fca8;
        default: break;
    }

    ctx->pc = 0x32fc44u;

    // 0x32fc44: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x32fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x32fc48: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fc48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fc4c: 0x26620520  addiu       $v0, $s3, 0x520
    ctx->pc = 0x32fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fc50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32fc50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32fc54: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fc58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fc58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fc5c: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FC5Cu;
    SET_GPR_U32(ctx, 31, 0x32FC64u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FC5Cu, 0x32FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC64u;
label_32fc64:
    // 0x32fc64: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x32fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x32fc68: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fc68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fc6c: 0x26620520  addiu       $v0, $s3, 0x520
    ctx->pc = 0x32fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fc70: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32fc70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32fc74: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x32fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fc78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fc7c: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FC7Cu;
    SET_GPR_U32(ctx, 31, 0x32FC84u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FC7Cu, 0x32FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FC84u;
label_32fc84:
    // 0x32fc84: 0x24020093  addiu       $v0, $zero, 0x93
    ctx->pc = 0x32fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x32fc88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32fc88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32fc8c: 0x26630520  addiu       $v1, $s3, 0x520
    ctx->pc = 0x32fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fc90: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32fc90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fc94: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fc98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32fc98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32fc9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fca0: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FCA0u;
    SET_GPR_U32(ctx, 31, 0x32FCA8u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FCA0u, 0x32FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FCA8u;
label_32fca8:
    // 0x32fca8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x32FCA8u;
    {
        const bool branch_taken_0x32fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fca8) {
            ctx->pc = 0x32FD54u;
            return;
        }
    }
    ctx->pc = 0x32FCB0u;
}
