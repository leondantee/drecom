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

// Function: e2d_id25_type00
// Address: 0x2b3710 - 0x2b3814
void e2d_id25_type00_0x2b3710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id25_type00_0x2b3710");
#endif

    switch (ctx->pc) {
        case 0x2b37a4u: goto label_2b37a4;
        default: break;
    }

    ctx->pc = 0x2b3710u;

    // 0x2b3710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b3714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b3718: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b3718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b371c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3724: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3728: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b3728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b372c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3734: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3738: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b3738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b373c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3744: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3748: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b3748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b374c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3754: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3758: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b3758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b375c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b3760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3768: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b3768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b376c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b376cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3774: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3778: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b3778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b377c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b3780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3784: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3788: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b3788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b378c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b3790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3794: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3798: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b3798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b379c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B379Cu;
    SET_GPR_U32(ctx, 31, 0x2B37A4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B379Cu, 0x2B37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37A4u;
label_2b37a4:
    // 0x2b37a4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b37a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b37a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b37ac: 0x0  nop
    ctx->pc = 0x2b37acu;
    // NOP
    // 0x2b37b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b37b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b37b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b37b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b37b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b37bc: 0x0  nop
    ctx->pc = 0x2b37bcu;
    // NOP
    // 0x2b37c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b37c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b37c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b37c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b37c8: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b37c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b37cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b37d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b37d4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b37d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b37d8: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2b37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2b37dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b37dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b37e0: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b37e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b37e4: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b37e8: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b37ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b37ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b37f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b37f4: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b37f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b37f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b37fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3800: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b3800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3804: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b3804u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b380c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3814u;
}
