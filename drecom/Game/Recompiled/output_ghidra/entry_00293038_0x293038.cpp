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

// Function: entry_00293038
// Address: 0x293038 - 0x29309c
void entry_00293038_0x293038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293038_0x293038");
#endif

    switch (ctx->pc) {
        case 0x293060u: goto label_293060;
        case 0x293078u: goto label_293078;
        case 0x293090u: goto label_293090;
        default: break;
    }

    ctx->pc = 0x293038u;

    // 0x293038: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x293038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x29303c: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x29303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x293040: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x293040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x293044: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x293044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x293048: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x293048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29304c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x29304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x293050: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x293050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293054: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x293054u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293058: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x293058u;
    SET_GPR_U32(ctx, 31, 0x293060u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x293058u, 0x293060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293060u;
label_293060:
    // 0x293060: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x293060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293064: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x293064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293068: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x293068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29306c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x29306cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x293070: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x293070u;
    SET_GPR_U32(ctx, 31, 0x293078u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x293070u, 0x293078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293078u;
label_293078:
    // 0x293078: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x293078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29307c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x29307cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293080: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x293080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x293084: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x293084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x293088: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x293088u;
    SET_GPR_U32(ctx, 31, 0x293090u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x293088u, 0x293090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293090u;
label_293090:
    // 0x293090: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x293090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x293094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x293094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x293098: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x293098u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29309cu;
}
