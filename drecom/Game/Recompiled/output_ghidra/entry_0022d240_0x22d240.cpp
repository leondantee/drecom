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

// Function: entry_0022d240
// Address: 0x22d240 - 0x22d2dc
void entry_0022d240_0x22d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d240_0x22d240");
#endif

    switch (ctx->pc) {
        case 0x22d290u: goto label_22d290;
        case 0x22d2a0u: goto label_22d2a0;
        case 0x22d2b0u: goto label_22d2b0;
        case 0x22d2d8u: goto label_22d2d8;
        default: break;
    }

    ctx->pc = 0x22d240u;

    // 0x22d240: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d244: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d248: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22d248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22d24c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d250: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x22d250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d254: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22d254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22d258: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22d25c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22d260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d264: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22d268: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22d268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22d26c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22d26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22d270: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d274: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22d278: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22d27c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d27cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d280: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22d284: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22d284u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d288: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22D288u;
    SET_GPR_U32(ctx, 31, 0x22D290u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22D288u, 0x22D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D290u;
label_22d290:
    // 0x22d290: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22d290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22d294: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22d294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22d298: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22D298u;
    SET_GPR_U32(ctx, 31, 0x22D2A0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22D298u, 0x22D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2A0u;
label_22d2a0:
    // 0x22d2a0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22d2a4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x22d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x22d2a8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22D2A8u;
    SET_GPR_U32(ctx, 31, 0x22D2B0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22D2A8u, 0x22D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2B0u;
label_22d2b0:
    // 0x22d2b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22d2b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22d2b4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d2b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22d2bc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x22d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22d2c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22d2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22d2c4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22d2c8: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x22d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22d2cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22d2ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22d2d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22D2D0u;
    SET_GPR_U32(ctx, 31, 0x22D2D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22D2D0u, 0x22D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D2D8u;
label_22d2d8:
    // 0x22d2d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22d2d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22d2dcu;
}
