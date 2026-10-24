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

// Function: srp_id20_type00
// Address: 0x2c2640 - 0x2c2738
void srp_id20_type00_0x2c2640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id20_type00_0x2c2640");
#endif

    switch (ctx->pc) {
        case 0x2c2700u: goto label_2c2700;
        default: break;
    }

    ctx->pc = 0x2c2640u;

    // 0x2c2640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2644: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2648: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c264c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2650: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2654: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2658: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c2658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c265c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2660: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2668: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c266c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c266cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2678: 0xa043036b  sb          $v1, 0x36B($v0)
    ctx->pc = 0x2c2678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 875), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c267c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2680: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2684: 0xa043036c  sb          $v1, 0x36C($v0)
    ctx->pc = 0x2c2684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 876), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2688: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c268c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2690: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2694: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2c2694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c2698: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c269c: 0xa043034d  sb          $v1, 0x34D($v0)
    ctx->pc = 0x2c269cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c26a0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2c26a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c26a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c26a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c26a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c26ac: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c26acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c26b0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2c26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2c26b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c26b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c26b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c26bc: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c26bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c26c0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2c26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2c26c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c26c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c26c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c26cc: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c26ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c26d0: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2c26d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c26d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c26d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c26dc: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c26dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c26e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c26e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c26e8: 0xa043036a  sb          $v1, 0x36A($v0)
    ctx->pc = 0x2c26e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c26ec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c26f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c26f4: 0xac430270  sw          $v1, 0x270($v0)
    ctx->pc = 0x2c26f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 3));
    // 0x2c26f8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C26F8u;
    SET_GPR_U32(ctx, 31, 0x2C2700u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C26F8u, 0x2C2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2700u;
label_2c2700:
    // 0x2c2700: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c2700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c2704: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2708: 0x0  nop
    ctx->pc = 0x2c2708u;
    // NOP
    // 0x2c270c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c270cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2710: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c2710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c2714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2718: 0x0  nop
    ctx->pc = 0x2c2718u;
    // NOP
    // 0x2c271c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c271cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2720: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2724: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2728: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2728u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c272c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c272cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2730: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2738u;
}
