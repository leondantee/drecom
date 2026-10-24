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

// Function: e2d_id69_type04
// Address: 0x2babe0 - 0x2baca4
void e2d_id69_type04_0x2babe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type04_0x2babe0");
#endif

    switch (ctx->pc) {
        case 0x2bac6cu: goto label_2bac6c;
        default: break;
    }

    ctx->pc = 0x2babe0u;

    // 0x2babe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2babe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2babe4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2babe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2babe8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2babe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2babec: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2babecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2babf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2babf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2babf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2babf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2babf8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2babf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2babfc: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2babfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bac00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bac00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bac04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac08: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bac08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bac0c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bac10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bac14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac18: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bac1c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bac20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bac20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bac24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac28: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bac2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bac30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac34: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bac34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bac38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bac3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac40: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bac40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bac44: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bac48: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2bac4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bac4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bac50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac54: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bac54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bac58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bac5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac60: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bac60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bac64: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BAC64u;
    SET_GPR_U32(ctx, 31, 0x2BAC6Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BAC64u, 0x2BAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC6Cu;
label_2bac6c:
    // 0x2bac6c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bac70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bac70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bac74: 0x0  nop
    ctx->pc = 0x2bac74u;
    // NOP
    // 0x2bac78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bac78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bac7c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2bac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2bac80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bac80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bac84: 0x0  nop
    ctx->pc = 0x2bac84u;
    // NOP
    // 0x2bac88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bac88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bac8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bac90: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bac94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bac94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bac98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BACA4u;
}
