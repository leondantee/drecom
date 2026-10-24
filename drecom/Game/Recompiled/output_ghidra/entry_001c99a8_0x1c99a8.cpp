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

// Function: entry_001c99a8
// Address: 0x1c99a8 - 0x1c99f8
void entry_001c99a8_0x1c99a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c99a8_0x1c99a8");
#endif

    switch (ctx->pc) {
        case 0x1c99d0u: goto label_1c99d0;
        default: break;
    }

    ctx->pc = 0x1c99a8u;

    // 0x1c99a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1c99ac: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1c99acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c99b0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c99b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c99b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c99b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1c99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c99bc: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1c99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1c99c0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c99c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c99c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c99c8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C99C8u;
    SET_GPR_U32(ctx, 31, 0x1C99D0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C99C8u, 0x1C99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99D0u;
label_1c99d0:
    // 0x1c99d0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1c99d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1c99d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c99d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c99d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c99dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c99e0: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c99e4: 0x24040402  addiu       $a0, $zero, 0x402
    ctx->pc = 0x1c99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x1c99e8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1c99e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1c99ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c99ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c99f0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C99F0u;
    SET_GPR_U32(ctx, 31, 0x1C99F8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C99F0u, 0x1C99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99F8u;
}
