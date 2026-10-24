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

// Function: e2d_id69_type03
// Address: 0x2bab20 - 0x2babe0
void e2d_id69_type03_0x2bab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type03_0x2bab20");
#endif

    switch (ctx->pc) {
        case 0x2baba8u: goto label_2baba8;
        default: break;
    }

    ctx->pc = 0x2bab20u;

    // 0x2bab20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bab24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bab28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bab2c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bab30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bab30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab38: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bab3c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bab40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bab40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab48: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bab48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bab4c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bab50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bab50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bab5c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2bab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2bab60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bab60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab68: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bab68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bab6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bab70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab74: 0xa043013f  sb          $v1, 0x13F($v0)
    ctx->pc = 0x2bab74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bab78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bab7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab80: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bab80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bab84: 0x3c023ed7  lui         $v0, 0x3ED7
    ctx->pc = 0x2bab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16087 << 16));
    // 0x2bab88: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2bab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2bab8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab94: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bab98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bab9c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2baba0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BABA0u;
    SET_GPR_U32(ctx, 31, 0x2BABA8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BABA0u, 0x2BABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABA8u;
label_2baba8:
    // 0x2baba8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2baba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2babac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2babacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2babb0: 0x0  nop
    ctx->pc = 0x2babb0u;
    // NOP
    // 0x2babb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2babb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2babb8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2babb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2babbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2babbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2babc0: 0x0  nop
    ctx->pc = 0x2babc0u;
    // NOP
    // 0x2babc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2babc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2babc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2babc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2babcc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2babccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2babd0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2babd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2babd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2babd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2babd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BABE0u;
}
