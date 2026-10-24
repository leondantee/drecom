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

// Function: entry_00197a1c
// Address: 0x197a1c - 0x197a78
void entry_00197a1c_0x197a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a1c_0x197a1c");
#endif

    switch (ctx->pc) {
        case 0x197a44u: goto label_197a44;
        case 0x197a74u: goto label_197a74;
        default: break;
    }

    ctx->pc = 0x197a1cu;

    // 0x197a1c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x197a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x197a20: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x197a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x197a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197a28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197a2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197a30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x197a34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197a38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a3c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197A3Cu;
    SET_GPR_U32(ctx, 31, 0x197A44u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197A3Cu, 0x197A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A44u;
label_197a44:
    // 0x197a44: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197a44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197a48: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x197a4c: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x197a50: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x197a50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197a54: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197a58: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x197a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197a5c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197a5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197a60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x197a64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a68: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197a68u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a6c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197A6Cu;
    SET_GPR_U32(ctx, 31, 0x197A74u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197A6Cu, 0x197A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A74u;
label_197a74:
    // 0x197a74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197a74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x197a78u;
}
