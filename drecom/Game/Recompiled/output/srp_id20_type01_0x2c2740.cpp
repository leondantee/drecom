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

// Function: srp_id20_type01
// Address: 0x2c2740 - 0x2c282c
void srp_id20_type01_0x2c2740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id20_type01_0x2c2740");
#endif

    switch (ctx->pc) {
        case 0x2c27f4u: goto label_2c27f4;
        case 0x2c2824u: goto label_2c2824;
        default: break;
    }

    ctx->pc = 0x2c2740u;

    // 0x2c2740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2744: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2748: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c274c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2750: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2754: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2758: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2c2758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c275c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2760: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2768: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c276c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c276cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2774: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2778: 0xa043036b  sb          $v1, 0x36B($v0)
    ctx->pc = 0x2c2778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 875), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c277c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2780: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2784: 0xa043036c  sb          $v1, 0x36C($v0)
    ctx->pc = 0x2c2784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 876), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2788: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c278c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2790: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2794: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2c2794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c2798: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c279c: 0xa043034d  sb          $v1, 0x34D($v0)
    ctx->pc = 0x2c279cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c27a0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2c27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2c27a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c27a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c27a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c27ac: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c27acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c27b0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2c27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2c27b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c27b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c27b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c27bc: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c27bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c27c0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2c27c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c27c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c27c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c27cc: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c27ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c27d0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c27d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c27d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c27d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c27dc: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c27dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c27e0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c27e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c27e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c27e8: 0xac430270  sw          $v1, 0x270($v0)
    ctx->pc = 0x2c27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 3));
    // 0x2c27ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C27ECu;
    SET_GPR_U32(ctx, 31, 0x2C27F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C27ECu, 0x2C27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C27F4u;
label_2c27f4:
    // 0x2c27f4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c27f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c27f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c27fc: 0x0  nop
    ctx->pc = 0x2c27fcu;
    // NOP
    // 0x2c2800: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2804: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2c2804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2c2808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c280c: 0x0  nop
    ctx->pc = 0x2c280cu;
    // NOP
    // 0x2c2810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2814: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2818: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c281c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c281cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2820: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c2824:
    // 0x2c2824: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C282Cu;
}
