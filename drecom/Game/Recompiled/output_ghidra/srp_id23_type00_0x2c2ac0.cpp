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

// Function: srp_id23_type00
// Address: 0x2c2ac0 - 0x2c2bac
void srp_id23_type00_0x2c2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id23_type00_0x2c2ac0");
#endif

    switch (ctx->pc) {
        case 0x2c2b44u: goto label_2c2b44;
        default: break;
    }

    ctx->pc = 0x2c2ac0u;

    // 0x2c2ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2ac4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2ac8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c2acc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c2accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c2ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2ad4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ad8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c2adc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c2ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ae8: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c2aec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c2af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2af4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2af8: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c2afc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2b04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b08: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c2b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c2b0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c2b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2b10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b14: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c2b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2b18: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2b1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b20: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2b24: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2b28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b2c: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2b30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b38: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2b3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2C2B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2C2B3Cu, 0x2C2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B44u;
label_2c2b44:
    // 0x2c2b44: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2c2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2c2b48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2b4c: 0x0  nop
    ctx->pc = 0x2c2b4cu;
    // NOP
    // 0x2c2b50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2b50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2b54: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c2b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c2b58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2b5c: 0x0  nop
    ctx->pc = 0x2c2b5cu;
    // NOP
    // 0x2c2b60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2b64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b68: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2b70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b74: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c2b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2b78: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2c2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2c2b7c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2c2b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2c2b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2b84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b88: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x2c2b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x2c2b8c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2c2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2c2b90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2b94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2b98: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2c2b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2c2b9c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2b9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2ba0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2BACu;
}
