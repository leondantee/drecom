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

// Function: entry_0022b884
// Address: 0x22b884 - 0x22b920
void entry_0022b884_0x22b884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b884_0x22b884");
#endif

    switch (ctx->pc) {
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8fcu: goto label_22b8fc;
        default: break;
    }

    ctx->pc = 0x22b884u;

    // 0x22b884: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x22b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b88c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x22b88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x22b890: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b894: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x22b894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b898: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x22b898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x22b89c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x22b89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b8a0: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x22b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x22b8a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22b8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b8a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x22b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x22b8ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b8b0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b8b4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b8b8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22b8bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22b8c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b8c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b8c4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b8c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b8c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b8cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B8CCu;
    SET_GPR_U32(ctx, 31, 0x22B8D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B8CCu, 0x22B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8D4u;
label_22b8d4:
    // 0x22b8d4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22b8d8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22b8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22b8dc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B8DCu;
    SET_GPR_U32(ctx, 31, 0x22B8E4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B8DCu, 0x22B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8E4u;
label_22b8e4:
    // 0x22b8e4: 0x3c0502fa  lui         $a1, 0x2FA
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)762 << 16));
    // 0x22b8e8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x22b8e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22b8ec: 0x3c07000a  lui         $a3, 0xA
    ctx->pc = 0x22b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)10 << 16));
    // 0x22b8f0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x22b8f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22b8f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B8F4u;
    SET_GPR_U32(ctx, 31, 0x22B8FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B8F4u, 0x22B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8FCu;
label_22b8fc:
    // 0x22b8fc: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22b900: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x22b900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22b904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22b904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b908: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b90c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22b910: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22b910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22b914: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b914u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b918: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22B918u;
    SET_GPR_U32(ctx, 31, 0x22B920u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22B918u, 0x22B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B920u;
}
