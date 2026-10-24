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

// Function: entry_0023b284
// Address: 0x23b284 - 0x23b318
void entry_0023b284_0x23b284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b284_0x23b284");
#endif

    switch (ctx->pc) {
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2f4u: goto label_23b2f4;
        default: break;
    }

    ctx->pc = 0x23b284u;

    // 0x23b284: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x23b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23b288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23b28c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x23b28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x23b290: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b294: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23b294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b298: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b29c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b2a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23b2a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b2a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b2ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b2b0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b2b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b2b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b2bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23b2c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b2c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b2c4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b2c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b2c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b2cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B2CCu;
    SET_GPR_U32(ctx, 31, 0x23B2D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B2CCu, 0x23B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2D4u;
label_23b2d4:
    // 0x23b2d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23b2d8: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x23b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x23b2dc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B2DCu;
    SET_GPR_U32(ctx, 31, 0x23B2E4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B2DCu, 0x23B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2E4u;
label_23b2e4:
    // 0x23b2e4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23b2e8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23b2ec: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23B2ECu;
    SET_GPR_U32(ctx, 31, 0x23B2F4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23B2ECu, 0x23B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2F4u;
label_23b2f4:
    // 0x23b2f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23b2f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23b2fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23b2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23b300: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b304: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23b304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23b308: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23b308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23b30c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b30cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b310: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23B310u;
    SET_GPR_U32(ctx, 31, 0x23B318u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23B310u, 0x23B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B318u;
}
