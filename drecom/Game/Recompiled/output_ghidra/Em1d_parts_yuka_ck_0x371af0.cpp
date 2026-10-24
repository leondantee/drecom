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

// Function: Em1d_parts_yuka_ck
// Address: 0x371af0 - 0x371e20
void Em1d_parts_yuka_ck_0x371af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_parts_yuka_ck_0x371af0");
#endif

    switch (ctx->pc) {
        case 0x371b20u: goto label_371b20;
        case 0x371b48u: goto label_371b48;
        case 0x371c78u: goto label_371c78;
        case 0x371ca0u: goto label_371ca0;
        case 0x371dc8u: goto label_371dc8;
        default: break;
    }

    ctx->pc = 0x371af0u;

    // 0x371af0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x371af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x371af4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x371af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x371af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371afc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371b00: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x371b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x371b04: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x371b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x371b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x371b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x371b0c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x371b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x371b10: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x371B10u;
    {
        const bool branch_taken_0x371b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x371b10) {
            ctx->pc = 0x371C70u;
            goto label_371c70;
        }
    }
    ctx->pc = 0x371B18u;
    // 0x371b18: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x371b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371b1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x371b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371b20:
    // 0x371b20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371b24: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x371B24u;
    {
        const bool branch_taken_0x371b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371b24) {
            ctx->pc = 0x371B54u;
            goto label_371b54;
        }
    }
    ctx->pc = 0x371B2Cu;
    // 0x371b2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x371b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371b30: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x371b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x371b34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371b3c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x371b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x371b40: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x371B40u;
    SET_GPR_U32(ctx, 31, 0x371B48u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x371B40u, 0x371B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B48u;
label_371b48:
    // 0x371b48: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371b4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x371B4Cu;
    {
        const bool branch_taken_0x371b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371b4c) {
            ctx->pc = 0x371B68u;
            goto label_371b68;
        }
    }
    ctx->pc = 0x371B54u;
label_371b54:
    // 0x371b54: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371b58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371b5c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x371b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371b60: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371b64: 0x0  nop
    ctx->pc = 0x371b64u;
    // NOP
label_371b68:
    // 0x371b68: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x371b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x371b6c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x371b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x371b70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x371b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x371b74: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371b78: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x371b78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371b7c: 0x0  nop
    ctx->pc = 0x371b7cu;
    // NOP
    // 0x371b80: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x371B80u;
    {
        const bool branch_taken_0x371b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371b80) {
            ctx->pc = 0x371C58u;
            goto label_371c58;
        }
    }
    ctx->pc = 0x371B88u;
    // 0x371b88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371b8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371b90: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x371b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371b94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371b98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x371b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371b9c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x371b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371ba0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371ba4: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371ba8: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371bb0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371bb4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x371bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371bb8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x371bb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371bbc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x371bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x371bc0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x371bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x371bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371bc8: 0x0  nop
    ctx->pc = 0x371bc8u;
    // NOP
    // 0x371bcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x371bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x371bd0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371bd4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371bd8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371be0: 0x0  nop
    ctx->pc = 0x371be0u;
    // NOP
    // 0x371be4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x371be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371be8: 0x0  nop
    ctx->pc = 0x371be8u;
    // NOP
    // 0x371bec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x371BECu;
    {
        const bool branch_taken_0x371bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371bec) {
            ctx->pc = 0x371C08u;
            goto label_371c08;
        }
    }
    ctx->pc = 0x371BF4u;
    // 0x371bf4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371bfc: 0x0  nop
    ctx->pc = 0x371bfcu;
    // NOP
    // 0x371c00: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371c04: 0x0  nop
    ctx->pc = 0x371c04u;
    // NOP
label_371c08:
    // 0x371c08: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371c0c: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x371c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x371c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371c14: 0x0  nop
    ctx->pc = 0x371c14u;
    // NOP
    // 0x371c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x371c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371c1c: 0x0  nop
    ctx->pc = 0x371c1cu;
    // NOP
    // 0x371c20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x371C20u;
    {
        const bool branch_taken_0x371c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371c20) {
            ctx->pc = 0x371C38u;
            goto label_371c38;
        }
    }
    ctx->pc = 0x371C28u;
    // 0x371c28: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x371c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x371c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371c30: 0x0  nop
    ctx->pc = 0x371c30u;
    // NOP
    // 0x371c34: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_371c38:
    // 0x371c38: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371c3c: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371c40: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371c44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371c48: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371c4c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x371c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x371c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371c54: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x371c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_371c58:
    // 0x371c58: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x371c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x371c5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371c60: 0x1620ffaf  bnez        $s1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x371C60u;
    {
        const bool branch_taken_0x371c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x371c60) {
            ctx->pc = 0x371B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371b20;
        }
    }
    ctx->pc = 0x371C68u;
    // 0x371c68: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x371C68u;
    {
        const bool branch_taken_0x371c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371c68) {
            ctx->pc = 0x371DC0u;
            goto label_371dc0;
        }
    }
    ctx->pc = 0x371C70u;
label_371c70:
    // 0x371c70: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x371c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371c74: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x371c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_371c78:
    // 0x371c78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371c7c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x371C7Cu;
    {
        const bool branch_taken_0x371c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371c7c) {
            ctx->pc = 0x371CACu;
            goto label_371cac;
        }
    }
    ctx->pc = 0x371C84u;
    // 0x371c84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x371c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371c88: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x371c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x371c8c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371c94: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x371c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x371c98: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x371C98u;
    SET_GPR_U32(ctx, 31, 0x371CA0u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x371C98u, 0x371CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CA0u;
label_371ca0:
    // 0x371ca0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x371CA4u;
    {
        const bool branch_taken_0x371ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371ca4) {
            ctx->pc = 0x371CC0u;
            goto label_371cc0;
        }
    }
    ctx->pc = 0x371CACu;
label_371cac:
    // 0x371cac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371cb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371cb4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x371cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371cb8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371cbc: 0x0  nop
    ctx->pc = 0x371cbcu;
    // NOP
label_371cc0:
    // 0x371cc0: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x371cc4: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x371cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x371cc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x371cc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x371ccc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371cd0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x371cd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371cd4: 0x0  nop
    ctx->pc = 0x371cd4u;
    // NOP
    // 0x371cd8: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x371CD8u;
    {
        const bool branch_taken_0x371cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371cd8) {
            ctx->pc = 0x371DB0u;
            goto label_371db0;
        }
    }
    ctx->pc = 0x371CE0u;
    // 0x371ce0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371ce4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371ce8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x371ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371cec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371cf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x371cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371cf4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x371cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371cf8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371cfc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371d00: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371d04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371d08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371d0c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x371d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371d10: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x371d10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371d14: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x371d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x371d18: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x371d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x371d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d20: 0x0  nop
    ctx->pc = 0x371d20u;
    // NOP
    // 0x371d24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x371d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x371d28: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371d2c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371d30: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d38: 0x0  nop
    ctx->pc = 0x371d38u;
    // NOP
    // 0x371d3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x371d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371d40: 0x0  nop
    ctx->pc = 0x371d40u;
    // NOP
    // 0x371d44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x371D44u;
    {
        const bool branch_taken_0x371d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371d44) {
            ctx->pc = 0x371D60u;
            goto label_371d60;
        }
    }
    ctx->pc = 0x371D4Cu;
    // 0x371d4c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d54: 0x0  nop
    ctx->pc = 0x371d54u;
    // NOP
    // 0x371d58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371d5c: 0x0  nop
    ctx->pc = 0x371d5cu;
    // NOP
label_371d60:
    // 0x371d60: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371d64: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x371d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x371d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d6c: 0x0  nop
    ctx->pc = 0x371d6cu;
    // NOP
    // 0x371d70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x371d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371d74: 0x0  nop
    ctx->pc = 0x371d74u;
    // NOP
    // 0x371d78: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x371D78u;
    {
        const bool branch_taken_0x371d78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371d78) {
            ctx->pc = 0x371D90u;
            goto label_371d90;
        }
    }
    ctx->pc = 0x371D80u;
    // 0x371d80: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x371d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x371d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371d88: 0x0  nop
    ctx->pc = 0x371d88u;
    // NOP
    // 0x371d8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_371d90:
    // 0x371d90: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371d94: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371d98: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371d9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371da0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371da4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x371da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371da8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x371da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x371dac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x371dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_371db0:
    // 0x371db0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x371db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x371db4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371db8: 0x1620ffaf  bnez        $s1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x371DB8u;
    {
        const bool branch_taken_0x371db8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x371db8) {
            ctx->pc = 0x371C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371c78;
        }
    }
    ctx->pc = 0x371DC0u;
label_371dc0:
    // 0x371dc0: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x371dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x371dc4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x371dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_371dc8:
    // 0x371dc8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371dcc: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371dd0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371dd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371dd8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371ddc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371de0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x371de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x371de4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x371de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x371de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371dec: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x371decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371df0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x371df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x371df4: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x371df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x371df8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x371df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x371dfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x371dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371e00: 0x1620fff1  bnez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x371E00u;
    {
        const bool branch_taken_0x371e00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x371e00) {
            ctx->pc = 0x371DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371dc8;
        }
    }
    ctx->pc = 0x371E08u;
    // 0x371e08: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x371e08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371e14: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x371e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x371e18: 0x3e00008  jr          $ra
    ctx->pc = 0x371E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371E20u;
}
