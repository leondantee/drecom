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

// Function: entry_00292e80
// Address: 0x292e80 - 0x292ee4
void entry_00292e80_0x292e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292e80_0x292e80");
#endif

    switch (ctx->pc) {
        case 0x292ea8u: goto label_292ea8;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ed8u: goto label_292ed8;
        default: break;
    }

    ctx->pc = 0x292e80u;

    // 0x292e80: 0xae005dc8  sw          $zero, 0x5DC8($s0)
    ctx->pc = 0x292e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 0));
    // 0x292e84: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x292e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    // 0x292e88: 0x8e0265a4  lw          $v0, 0x65A4($s0)
    ctx->pc = 0x292e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26020)));
    // 0x292e8c: 0xae0265a0  sw          $v0, 0x65A0($s0)
    ctx->pc = 0x292e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26016), GPR_U32(ctx, 2));
    // 0x292e90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x292e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x292e94: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x292e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x292e98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292e9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292e9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292ea0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x292EA0u;
    SET_GPR_U32(ctx, 31, 0x292EA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x292EA0u, 0x292EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EA8u;
label_292ea8:
    // 0x292ea8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292eac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292eb0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292eb4: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x292eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x292eb8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292EB8u;
    SET_GPR_U32(ctx, 31, 0x292EC0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292EB8u, 0x292EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292EC0u;
label_292ec0:
    // 0x292ec0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x292ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292ec4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x292ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292ec8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x292ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x292ecc: 0x2406008d  addiu       $a2, $zero, 0x8D
    ctx->pc = 0x292eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x292ed0: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x292ED0u;
    SET_GPR_U32(ctx, 31, 0x292ED8u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x292ED0u, 0x292ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ED8u;
label_292ed8:
    // 0x292ed8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x292ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x292edc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292edcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292ee0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x292ee0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x292ee4u;
}
