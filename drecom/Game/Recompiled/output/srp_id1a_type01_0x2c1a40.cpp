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

// Function: srp_id1a_type01
// Address: 0x2c1a40 - 0x2c1b34
void srp_id1a_type01_0x2c1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1a_type01_0x2c1a40");
#endif

    switch (ctx->pc) {
        case 0x2c1aacu: goto label_2c1aac;
        case 0x2c1afcu: goto label_2c1afc;
        default: break;
    }

    ctx->pc = 0x2c1a40u;

    // 0x2c1a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1a44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1a48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c1a4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1a50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a54: 0xa043034e  sb          $v1, 0x34E($v0)
    ctx->pc = 0x2c1a54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 846), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1a5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a60: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x2c1a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2c1a64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1a6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a70: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x2c1a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x2c1a74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1a78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a7c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c1a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1a80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1a84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a88: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c1a88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1a90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1a94: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c1a94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1a98: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c1a9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1aa0: 0xa0430369  sb          $v1, 0x369($v0)
    ctx->pc = 0x2c1aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 873), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1aa4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1AA4u;
    SET_GPR_U32(ctx, 31, 0x2C1AACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1AA4u, 0x2C1AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AACu;
label_2c1aac:
    // 0x2c1aac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c1ab0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1ab4: 0x0  nop
    ctx->pc = 0x2c1ab4u;
    // NOP
    // 0x2c1ab8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1abc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2c1ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1ac4: 0x0  nop
    ctx->pc = 0x2c1ac4u;
    // NOP
    // 0x2c1ac8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1acc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1ad0: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c1ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c1ad4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2c1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2c1ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1ae0: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c1ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c1ae4: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2c1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2c1ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1aec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1af0: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c1af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c1af4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1AF4u;
    SET_GPR_U32(ctx, 31, 0x2C1AFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1AF4u, 0x2C1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1AFCu;
label_2c1afc:
    // 0x2c1afc: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2c1afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2c1b00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c1b00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1b04: 0x0  nop
    ctx->pc = 0x2c1b04u;
    // NOP
    // 0x2c1b08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1b0c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2c1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1b10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1b14: 0x0  nop
    ctx->pc = 0x2c1b14u;
    // NOP
    // 0x2c1b18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1b1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b20: 0xe4600278  swc1        $f0, 0x278($v1)
    ctx->pc = 0x2c1b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x2c1b24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1b24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1b28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1B34u;
}
