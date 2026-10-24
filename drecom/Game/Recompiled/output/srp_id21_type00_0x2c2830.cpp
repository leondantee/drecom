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

// Function: srp_id21_type00
// Address: 0x2c2830 - 0x2c2904
void srp_id21_type00_0x2c2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id21_type00_0x2c2830");
#endif

    switch (ctx->pc) {
        case 0x2c2898u: goto label_2c2898;
        default: break;
    }

    ctx->pc = 0x2c2830u;

    // 0x2c2830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2834: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2838: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c283c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c2840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2848: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c284c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2854: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2858: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c285c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c285cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c2860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2864: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2868: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c286c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c286cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2870: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2874: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2878: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c287c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2880: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2880u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2888: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c288c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c288cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2890: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C2890u;
    SET_GPR_U32(ctx, 31, 0x2C2898u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C2890u, 0x2C2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2898u;
label_2c2898:
    // 0x2c2898: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c2898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c289c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c289cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c28a0: 0x0  nop
    ctx->pc = 0x2c28a0u;
    // NOP
    // 0x2c28a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c28a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c28a8: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2c28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2c28ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c28acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c28b0: 0x0  nop
    ctx->pc = 0x2c28b0u;
    // NOP
    // 0x2c28b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c28b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c28b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c28b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c28bc: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c28bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c28c0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c28c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c28c4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2c28c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c28c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c28c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c28cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c28ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c28d0: 0xe4600270  swc1        $f0, 0x270($v1)
    ctx->pc = 0x2c28d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 624), bits); }
    // 0x2c28d4: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2c28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2c28d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c28d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c28dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c28e0: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c28e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c28e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c28e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c28e8: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x2c28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2c28ec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c28ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c28f0: 0xac830278  sw          $v1, 0x278($a0)
    ctx->pc = 0x2c28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 3));
    // 0x2c28f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c28f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c28f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c28f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c28fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C28FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C28FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2904u;
}
