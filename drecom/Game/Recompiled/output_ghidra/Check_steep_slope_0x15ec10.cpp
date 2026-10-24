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

// Function: Check_steep_slope
// Address: 0x15ec10 - 0x15ed50
void Check_steep_slope_0x15ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_steep_slope_0x15ec10");
#endif

    switch (ctx->pc) {
        case 0x15ec64u: goto label_15ec64;
        case 0x15ec78u: goto label_15ec78;
        case 0x15ed18u: goto label_15ed18;
        default: break;
    }

    ctx->pc = 0x15ec10u;

    // 0x15ec10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15ec14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15ec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15ec18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ec1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x15ec20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15ec24: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15ec24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15ec28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ec2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ec30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15ec30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15ec34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EC34u;
    {
        const bool branch_taken_0x15ec34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec34) {
            ctx->pc = 0x15EC48u;
            goto label_15ec48;
        }
    }
    ctx->pc = 0x15EC3Cu;
    // 0x15ec3c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ec3cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ec40: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x15EC40u;
    {
        const bool branch_taken_0x15ec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec40) {
            ctx->pc = 0x15ED3Cu;
            goto label_15ed3c;
        }
    }
    ctx->pc = 0x15EC48u;
label_15ec48:
    // 0x15ec48: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x15ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x15ec4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ec50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ec54: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x15ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ec58: 0xc44d0018  lwc1        $f13, 0x18($v0)
    ctx->pc = 0x15ec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ec5c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15EC5Cu;
    SET_GPR_U32(ctx, 31, 0x15EC64u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15EC5Cu, 0x15EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC64u;
label_15ec64:
    // 0x15ec64: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x15ec64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15ec68: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ec6c: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x15ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ec70: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15EC70u;
    SET_GPR_U32(ctx, 31, 0x15EC78u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15EC70u, 0x15EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC78u;
label_15ec78:
    // 0x15ec78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15ec7c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ec80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ec80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec84: 0x0  nop
    ctx->pc = 0x15ec84u;
    // NOP
    // 0x15ec88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15ec88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ec8c: 0x0  nop
    ctx->pc = 0x15ec8cu;
    // NOP
    // 0x15ec90: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15EC90u;
    {
        const bool branch_taken_0x15ec90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ec90) {
            ctx->pc = 0x15ECACu;
            goto label_15ecac;
        }
    }
    ctx->pc = 0x15EC98u;
    // 0x15ec98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15ec9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ec9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15eca0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15eca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15eca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15eca8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15eca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_15ecac:
    // 0x15ecac: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ecb0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x15ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x15ecb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15ecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15ecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecbc: 0x0  nop
    ctx->pc = 0x15ecbcu;
    // NOP
    // 0x15ecc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15ecc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ecc4: 0x0  nop
    ctx->pc = 0x15ecc4u;
    // NOP
    // 0x15ecc8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x15ECC8u;
    {
        const bool branch_taken_0x15ecc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ecc8) {
            ctx->pc = 0x15ECFCu;
            goto label_15ecfc;
        }
    }
    ctx->pc = 0x15ECD0u;
    // 0x15ecd0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ecd4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15ecd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ecdc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ecdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ece0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ece4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ece8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ece8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ecec: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ececu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ecf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15ecf4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15ECF4u;
    {
        const bool branch_taken_0x15ecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ecf4) {
            ctx->pc = 0x15ED38u;
            goto label_15ed38;
        }
    }
    ctx->pc = 0x15ECFCu;
label_15ecfc:
    // 0x15ecfc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15ed00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15ed00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15ed04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ed04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ed08: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ed0c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15ed0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ed10: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15ED10u;
    SET_GPR_U32(ctx, 31, 0x15ED18u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15ED10u, 0x15ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ED18u;
label_15ed18:
    // 0x15ed18: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15ed18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15ed1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ed20: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ed20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ed24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ed28: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ed28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ed2c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed30: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15ed38:
    // 0x15ed38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ed3c:
    // 0x15ed3c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15ed3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ed40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ed40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ed44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15ed44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ED48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ED50u;
}
