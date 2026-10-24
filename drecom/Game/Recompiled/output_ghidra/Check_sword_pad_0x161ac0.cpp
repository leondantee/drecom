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

// Function: Check_sword_pad
// Address: 0x161ac0 - 0x161c08
void Check_sword_pad_0x161ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_sword_pad_0x161ac0");
#endif

    switch (ctx->pc) {
        case 0x161b30u: goto label_161b30;
        default: break;
    }

    ctx->pc = 0x161ac0u;

    // 0x161ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161ac4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x161ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x161ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161ad0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x161ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x161ad4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x161ad8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x161adc: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x161ae0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x161ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x161ae4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x161ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x161ae8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x161AE8u;
    {
        const bool branch_taken_0x161ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ae8) {
            ctx->pc = 0x161BF0u;
            goto label_161bf0;
        }
    }
    ctx->pc = 0x161AF0u;
    // 0x161af0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x161af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x161af4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x161af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x161af8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x161AF8u;
    {
        const bool branch_taken_0x161af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161af8) {
            ctx->pc = 0x161BB8u;
            goto label_161bb8;
        }
    }
    ctx->pc = 0x161B00u;
    // 0x161b00: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b04: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x161b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161b0c: 0x0  nop
    ctx->pc = 0x161b0cu;
    // NOP
    // 0x161b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b14: 0x0  nop
    ctx->pc = 0x161b14u;
    // NOP
    // 0x161b18: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x161B18u;
    {
        const bool branch_taken_0x161b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b18) {
            ctx->pc = 0x161BA8u;
            goto label_161ba8;
        }
    }
    ctx->pc = 0x161B20u;
    // 0x161b20: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x161b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161b24: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x161b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x161b28: 0xc058f20  jal         func_163C80
    ctx->pc = 0x161B28u;
    SET_GPR_U32(ctx, 31, 0x161B30u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x161B28u, 0x161B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B30u;
label_161b30:
    // 0x161b30: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x161b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x161b34: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x161b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161b3c: 0x0  nop
    ctx->pc = 0x161b3cu;
    // NOP
    // 0x161b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b44: 0x0  nop
    ctx->pc = 0x161b44u;
    // NOP
    // 0x161b48: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x161B48u;
    {
        const bool branch_taken_0x161b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b48) {
            ctx->pc = 0x161B64u;
            goto label_161b64;
        }
    }
    ctx->pc = 0x161B50u;
    // 0x161b50: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x161b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x161b54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b58: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x161b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x161b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x161b60: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x161b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_161b64:
    // 0x161b64: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x161b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161b68: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x161b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x161b6c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x161b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x161b70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161b74: 0x0  nop
    ctx->pc = 0x161b74u;
    // NOP
    // 0x161b78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161b78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161b7c: 0x0  nop
    ctx->pc = 0x161b7cu;
    // NOP
    // 0x161b80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x161B80u;
    {
        const bool branch_taken_0x161b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161b80) {
            ctx->pc = 0x161B98u;
            goto label_161b98;
        }
    }
    ctx->pc = 0x161B88u;
    // 0x161b88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161b8c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161b90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x161B90u;
    {
        const bool branch_taken_0x161b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161b90) {
            ctx->pc = 0x161BF0u;
            goto label_161bf0;
        }
    }
    ctx->pc = 0x161B98u;
label_161b98:
    // 0x161b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b9c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161ba0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x161BA0u;
    {
        const bool branch_taken_0x161ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ba0) {
            ctx->pc = 0x161BF0u;
            goto label_161bf0;
        }
    }
    ctx->pc = 0x161BA8u;
label_161ba8:
    // 0x161ba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161bac: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161bb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x161BB0u;
    {
        const bool branch_taken_0x161bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161bb0) {
            ctx->pc = 0x161BF0u;
            goto label_161bf0;
        }
    }
    ctx->pc = 0x161BB8u;
label_161bb8:
    // 0x161bb8: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161bbc: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x161bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x161bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161bc4: 0x0  nop
    ctx->pc = 0x161bc4u;
    // NOP
    // 0x161bc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161bc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161bcc: 0x0  nop
    ctx->pc = 0x161bccu;
    // NOP
    // 0x161bd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x161BD0u;
    {
        const bool branch_taken_0x161bd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161bd0) {
            ctx->pc = 0x161BE8u;
            goto label_161be8;
        }
    }
    ctx->pc = 0x161BD8u;
    // 0x161bd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x161bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161bdc: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x161BE0u;
    {
        const bool branch_taken_0x161be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161be0) {
            ctx->pc = 0x161BF0u;
            goto label_161bf0;
        }
    }
    ctx->pc = 0x161BE8u;
label_161be8:
    // 0x161be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161bec: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
label_161bf0:
    // 0x161bf0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x161bf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161bfc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x161bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161c00: 0x3e00008  jr          $ra
    ctx->pc = 0x161C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161C08u;
}
