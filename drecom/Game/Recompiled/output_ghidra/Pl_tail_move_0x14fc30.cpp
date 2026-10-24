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

// Function: Pl_tail_move
// Address: 0x14fc30 - 0x14fe6c
void Pl_tail_move_0x14fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_tail_move_0x14fc30");
#endif

    switch (ctx->pc) {
        case 0x14fc7cu: goto label_14fc7c;
        case 0x14fcacu: goto label_14fcac;
        case 0x14fe38u: goto label_14fe38;
        default: break;
    }

    ctx->pc = 0x14fc30u;

    // 0x14fc30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14fc34: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x14fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x14fc38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14fc3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14fc40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14fc44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14fc48: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14fc4c: 0x2472dbc0  addiu       $s2, $v1, -0x2440
    ctx->pc = 0x14fc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x14fc50: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x14fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14fc54: 0x2473c960  addiu       $s3, $v1, -0x36A0
    ctx->pc = 0x14fc54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x14fc58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fc5c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x14fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14fc60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x14fc64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14fc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14fc68: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x14FC68u;
    {
        const bool branch_taken_0x14fc68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fc68) {
            ctx->pc = 0x14FE4Cu;
            goto label_14fe4c;
        }
    }
    ctx->pc = 0x14FC70u;
    // 0x14fc70: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x14fc70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14fc74: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x14FC74u;
    {
        const bool branch_taken_0x14fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fc74) {
            ctx->pc = 0x14FE40u;
            goto label_14fe40;
        }
    }
    ctx->pc = 0x14FC7Cu;
label_14fc7c:
    // 0x14fc7c: 0x26230009  addiu       $v1, $s1, 0x9
    ctx->pc = 0x14fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    // 0x14fc80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fc84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fc88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fc8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fc90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x14fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fc94: 0x8e6202d0  lw          $v0, 0x2D0($s3)
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x14fc98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14fc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fc9c: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x14fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fca0: 0xc64d137c  lwc1        $f13, 0x137C($s2)
    ctx->pc = 0x14fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14fca4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14FCA4u;
    SET_GPR_U32(ctx, 31, 0x14FCACu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14FCA4u, 0x14FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCACu;
label_14fcac:
    // 0x14fcac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14fcb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14fcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fcb4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14fcb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fcbc: 0x0  nop
    ctx->pc = 0x14fcbcu;
    // NOP
    // 0x14fcc0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x14FCC0u;
    {
        const bool branch_taken_0x14fcc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fcc0) {
            ctx->pc = 0x14FCE8u;
            goto label_14fce8;
        }
    }
    ctx->pc = 0x14FCC8u;
    // 0x14fcc8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x14fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x14fccc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x14fcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fcd4: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14fcd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14fcdc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fce0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14FCE0u;
    {
        const bool branch_taken_0x14fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fce0) {
            ctx->pc = 0x14FE28u;
            goto label_14fe28;
        }
    }
    ctx->pc = 0x14FCE8u;
label_14fce8:
    // 0x14fce8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x14fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fcf0: 0x0  nop
    ctx->pc = 0x14fcf0u;
    // NOP
    // 0x14fcf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fcf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fcf8: 0x0  nop
    ctx->pc = 0x14fcf8u;
    // NOP
    // 0x14fcfc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14FCFCu;
    {
        const bool branch_taken_0x14fcfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fcfc) {
            ctx->pc = 0x14FD44u;
            goto label_14fd44;
        }
    }
    ctx->pc = 0x14FD04u;
    // 0x14fd04: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x14fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd08: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x14fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x14fd0c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd14: 0x0  nop
    ctx->pc = 0x14fd14u;
    // NOP
    // 0x14fd18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd1c: 0x0  nop
    ctx->pc = 0x14fd1cu;
    // NOP
    // 0x14fd20: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x14FD20u;
    {
        const bool branch_taken_0x14fd20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fd20) {
            ctx->pc = 0x14FD80u;
            goto label_14fd80;
        }
    }
    ctx->pc = 0x14FD28u;
    // 0x14fd28: 0x3c02bba3  lui         $v0, 0xBBA3
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48035 << 16));
    // 0x14fd2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd34: 0x0  nop
    ctx->pc = 0x14fd34u;
    // NOP
    // 0x14fd38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14fd3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14FD3Cu;
    {
        const bool branch_taken_0x14fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fd3c) {
            ctx->pc = 0x14FD80u;
            goto label_14fd80;
        }
    }
    ctx->pc = 0x14FD44u;
label_14fd44:
    // 0x14fd44: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x14fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd48: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x14fd4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd54: 0x0  nop
    ctx->pc = 0x14fd54u;
    // NOP
    // 0x14fd58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fd58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd5c: 0x0  nop
    ctx->pc = 0x14fd5cu;
    // NOP
    // 0x14fd60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x14FD60u;
    {
        const bool branch_taken_0x14fd60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fd60) {
            ctx->pc = 0x14FD80u;
            goto label_14fd80;
        }
    }
    ctx->pc = 0x14FD68u;
    // 0x14fd68: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x14fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x14fd6c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x14fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x14fd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd74: 0x0  nop
    ctx->pc = 0x14fd74u;
    // NOP
    // 0x14fd78: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14fd7c: 0x0  nop
    ctx->pc = 0x14fd7cu;
    // NOP
label_14fd80:
    // 0x14fd80: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd84: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14fd88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14fd8c: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fd90: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd98: 0x0  nop
    ctx->pc = 0x14fd98u;
    // NOP
    // 0x14fd9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fda0: 0x0  nop
    ctx->pc = 0x14fda0u;
    // NOP
    // 0x14fda4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14FDA4u;
    {
        const bool branch_taken_0x14fda4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fda4) {
            ctx->pc = 0x14FDECu;
            goto label_14fdec;
        }
    }
    ctx->pc = 0x14FDACu;
    // 0x14fdac: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fdb0: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x14fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x14fdb4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fdb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fdbc: 0x0  nop
    ctx->pc = 0x14fdbcu;
    // NOP
    // 0x14fdc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fdc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fdc4: 0x0  nop
    ctx->pc = 0x14fdc4u;
    // NOP
    // 0x14fdc8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x14FDC8u;
    {
        const bool branch_taken_0x14fdc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fdc8) {
            ctx->pc = 0x14FE28u;
            goto label_14fe28;
        }
    }
    ctx->pc = 0x14FDD0u;
    // 0x14fdd0: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x14fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x14fdd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fdd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fddc: 0x0  nop
    ctx->pc = 0x14fddcu;
    // NOP
    // 0x14fde0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fde4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14FDE4u;
    {
        const bool branch_taken_0x14fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fde4) {
            ctx->pc = 0x14FE28u;
            goto label_14fe28;
        }
    }
    ctx->pc = 0x14FDECu;
label_14fdec:
    // 0x14fdec: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x14fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fdf0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x14fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x14fdf4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fdf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fdf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fdfc: 0x0  nop
    ctx->pc = 0x14fdfcu;
    // NOP
    // 0x14fe00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14fe00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fe04: 0x0  nop
    ctx->pc = 0x14fe04u;
    // NOP
    // 0x14fe08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x14FE08u;
    {
        const bool branch_taken_0x14fe08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fe08) {
            ctx->pc = 0x14FE28u;
            goto label_14fe28;
        }
    }
    ctx->pc = 0x14FE10u;
    // 0x14fe10: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x14fe14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fe18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fe1c: 0x0  nop
    ctx->pc = 0x14fe1cu;
    // NOP
    // 0x14fe20: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fe24: 0x0  nop
    ctx->pc = 0x14fe24u;
    // NOP
label_14fe28:
    // 0x14fe28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14fe28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14fe2c: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x14fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fe30: 0xc06773c  jal         func_19DCF0
    ctx->pc = 0x14FE30u;
    SET_GPR_U32(ctx, 31, 0x14FE38u);
    ctx->pc = 0x19DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DCF0u, 0x14FE30u, 0x14FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE38u;
label_14fe38:
    // 0x14fe38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14fe38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14fe3c: 0x0  nop
    ctx->pc = 0x14fe3cu;
    // NOP
label_14fe40:
    // 0x14fe40: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x14fe40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14fe44: 0x1460ff8d  bnez        $v1, . + 4 + (-0x73 << 2)
    ctx->pc = 0x14FE44u;
    {
        const bool branch_taken_0x14fe44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fe44) {
            ctx->pc = 0x14FC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fc7c;
        }
    }
    ctx->pc = 0x14FE4Cu;
label_14fe4c:
    // 0x14fe4c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x14fe4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14fe50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14fe54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fe58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14fe58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14fe5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fe60: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14fe64: 0x3e00008  jr          $ra
    ctx->pc = 0x14FE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FE6Cu;
}
