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

// Function: entry_0022b164
// Address: 0x22b164 - 0x22b1fc
void entry_0022b164_0x22b164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b164_0x22b164");
#endif

    switch (ctx->pc) {
        case 0x22b1b4u: goto label_22b1b4;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1f8u: goto label_22b1f8;
        default: break;
    }

    ctx->pc = 0x22b164u;

    // 0x22b164: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22b168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b16c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22b16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22b170: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b174: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x22b174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22b178: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22b178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22b17c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22b17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b180: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x22b180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x22b184: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22b188: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x22b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x22b18c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22b18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b190: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b194: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b198: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x22b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x22b19c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22b1a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b1a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b1a4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b1a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b1a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b1ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B1ACu;
    SET_GPR_U32(ctx, 31, 0x22B1B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B1ACu, 0x22B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1B4u;
label_22b1b4:
    // 0x22b1b4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x22b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x22b1b8: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x22b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x22b1bc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B1BCu;
    SET_GPR_U32(ctx, 31, 0x22B1C4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B1BCu, 0x22B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1C4u;
label_22b1c4:
    // 0x22b1c4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x22b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x22b1c8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x22b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x22b1cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x22B1CCu;
    SET_GPR_U32(ctx, 31, 0x22B1D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x22B1CCu, 0x22B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1D4u;
label_22b1d4:
    // 0x22b1d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b1d8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22b1dc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22b1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22b1e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22b1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b1e4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x22b1e8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22b1ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b1ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b1f0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22B1F0u;
    SET_GPR_U32(ctx, 31, 0x22B1F8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22B1F0u, 0x22B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B1F8u;
label_22b1f8:
    // 0x22b1f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22b1f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22b1fcu;
}
