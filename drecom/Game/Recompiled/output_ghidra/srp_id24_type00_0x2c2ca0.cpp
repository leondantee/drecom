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

// Function: srp_id24_type00
// Address: 0x2c2ca0 - 0x2c2d8c
void srp_id24_type00_0x2c2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id24_type00_0x2c2ca0");
#endif

    switch (ctx->pc) {
        case 0x2c2d18u: goto label_2c2d18;
        default: break;
    }

    ctx->pc = 0x2c2ca0u;

    // 0x2c2ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2ca4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c2ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c2ca8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c2cac: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2cb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2cb8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c2cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c2cbc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2cc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2cc8: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c2cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c2ccc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2cd8: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c2cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c2cdc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2c2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2c2ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c2ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2ce8: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c2ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c2cec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2cf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2cf4: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c2cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2cf8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2cfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d00: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c2d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2d08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d0c: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2c2d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2d10: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C2D10u;
    SET_GPR_U32(ctx, 31, 0x2C2D18u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C2D10u, 0x2C2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D18u;
label_2c2d18:
    // 0x2c2d18: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c2d1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c2d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2d20: 0x0  nop
    ctx->pc = 0x2c2d20u;
    // NOP
    // 0x2c2d24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c2d24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c2d28: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2c2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2c2d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2d30: 0x0  nop
    ctx->pc = 0x2c2d30u;
    // NOP
    // 0x2c2d34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2d38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d3c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c2d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c2d40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2d44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d48: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c2d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2d4c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2c2d50: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2c2d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2c2d54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2d54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2d58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d5c: 0xe460027c  swc1        $f0, 0x27C($v1)
    ctx->pc = 0x2c2d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 636), bits); }
    // 0x2c2d60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d64: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c2d68: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c2d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c2d6c: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c2d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2d74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c2d78: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2c2d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2d7c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c2d7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2d80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c2d84: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D8Cu;
}
