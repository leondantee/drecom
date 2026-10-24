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

// Function: srp_id1a_type02
// Address: 0x2c1b40 - 0x2c1c34
void srp_id1a_type02_0x2c1b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id1a_type02_0x2c1b40");
#endif

    switch (ctx->pc) {
        case 0x2c1bacu: goto label_2c1bac;
        case 0x2c1bfcu: goto label_2c1bfc;
        default: break;
    }

    ctx->pc = 0x2c1b40u;

    // 0x2c1b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1b44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1b48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c1b4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c1b50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b54: 0xa043034e  sb          $v1, 0x34E($v0)
    ctx->pc = 0x2c1b54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 846), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1b5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b60: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x2c1b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
    // 0x2c1b64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c1b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1b6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b70: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x2c1b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x2c1b74: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1b78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b7c: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c1b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1b80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c1b84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b88: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c1b88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1b90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1b94: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c1b94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1b98: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c1b9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1ba0: 0xa0430369  sb          $v1, 0x369($v0)
    ctx->pc = 0x2c1ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 873), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1ba4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1BA4u;
    SET_GPR_U32(ctx, 31, 0x2C1BACu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1BA4u, 0x2C1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BACu;
label_2c1bac:
    // 0x2c1bac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c1bb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1bb4: 0x0  nop
    ctx->pc = 0x2c1bb4u;
    // NOP
    // 0x2c1bb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1bbc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c1bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1bc4: 0x0  nop
    ctx->pc = 0x2c1bc4u;
    // NOP
    // 0x2c1bc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1bcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1bd0: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c1bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c1bd4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1bdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1be0: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c1be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c1be4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1bec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1bf0: 0xe4400274  swc1        $f0, 0x274($v0)
    ctx->pc = 0x2c1bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 628), bits); }
    // 0x2c1bf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C1BF4u;
    SET_GPR_U32(ctx, 31, 0x2C1BFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C1BF4u, 0x2C1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1BFCu;
label_2c1bfc:
    // 0x2c1bfc: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2c1bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2c1c00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c1c00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1c04: 0x0  nop
    ctx->pc = 0x2c1c04u;
    // NOP
    // 0x2c1c08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1c0c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2c1c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2c1c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1c14: 0x0  nop
    ctx->pc = 0x2c1c14u;
    // NOP
    // 0x2c1c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c1c1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1c20: 0xe4600278  swc1        $f0, 0x278($v1)
    ctx->pc = 0x2c1c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 632), bits); }
    // 0x2c1c24: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1c24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1c28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1C34u;
}
