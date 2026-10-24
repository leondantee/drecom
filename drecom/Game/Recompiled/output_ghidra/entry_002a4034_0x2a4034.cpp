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

// Function: entry_002a4034
// Address: 0x2a4034 - 0x2a40a4
void entry_002a4034_0x2a4034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a4034_0x2a4034");
#endif

    switch (ctx->pc) {
        case 0x2a4040u: goto label_2a4040;
        case 0x2a4058u: goto label_2a4058;
        case 0x2a4070u: goto label_2a4070;
        case 0x2a4088u: goto label_2a4088;
        case 0x2a40a0u: goto label_2a40a0;
        default: break;
    }

    ctx->pc = 0x2a4034u;

    // 0x2a4034: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a4034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4038: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4038u;
    SET_GPR_U32(ctx, 31, 0x2A4040u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4038u, 0x2A4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4040u;
label_2a4040:
    // 0x2a4040: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4044: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a4044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4048: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a404c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4050: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4050u;
    SET_GPR_U32(ctx, 31, 0x2A4058u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4050u, 0x2A4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4058u;
label_2a4058:
    // 0x2a4058: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a405c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a4060: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4068: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4068u;
    SET_GPR_U32(ctx, 31, 0x2A4070u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4068u, 0x2A4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4070u;
label_2a4070:
    // 0x2a4070: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4074: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4078: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a407c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a407cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4080: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4080u;
    SET_GPR_U32(ctx, 31, 0x2A4088u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4080u, 0x2A4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4088u;
label_2a4088:
    // 0x2a4088: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a408c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4090: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4094: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4098: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4098u;
    SET_GPR_U32(ctx, 31, 0x2A40A0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4098u, 0x2A40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40A0u;
label_2a40a0:
    // 0x2a40a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a40a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a40a4u;
}
