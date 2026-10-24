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

// Function: Ck_em03
// Address: 0x2a8700 - 0x2a88a8
void Ck_em03_0x2a8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ck_em03_0x2a8700");
#endif

    switch (ctx->pc) {
        case 0x2a8778u: goto label_2a8778;
        case 0x2a8828u: goto label_2a8828;
        default: break;
    }

    ctx->pc = 0x2a8700u;

    // 0x2a8700: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a8704: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2a8704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2a8708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a8708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a870c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a8710: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a8710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a8714: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a8714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a8718: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2a8718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2a871c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2a871cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2a8720: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x2a8720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x2a8724: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a8724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a8728: 0x2452bb48  addiu       $s2, $v0, -0x44B8
    ctx->pc = 0x2a8728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x2a872c: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x2a872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x2a8730: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x2a8730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x2a8734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8738: 0x0  nop
    ctx->pc = 0x2a8738u;
    // NOP
    // 0x2a873c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a873cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a8740: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2a8740u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8744: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2a8744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2a8748: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x2a8748u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2a874c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A874Cu;
    {
        const bool branch_taken_0x2a874c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a874c) {
            ctx->pc = 0x2A8760u;
            goto label_2a8760;
        }
    }
    ctx->pc = 0x2A8754u;
    // 0x2a8754: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x2a8754u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2a8758: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2A8758u;
    {
        const bool branch_taken_0x2a8758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8758) {
            ctx->pc = 0x2A8888u;
            goto label_2a8888;
        }
    }
    ctx->pc = 0x2A8760u;
label_2a8760:
    // 0x2a8760: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a8760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a8764: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8768: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a8768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a876c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2a876cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8770: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2A8770u;
    {
        const bool branch_taken_0x2a8770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8770) {
            ctx->pc = 0x2A8870u;
            goto label_2a8870;
        }
    }
    ctx->pc = 0x2A8778u;
label_2a8778:
    // 0x2a8778: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2a8778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a877c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2a877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a8780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a8780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8784: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A8784u;
    {
        const bool branch_taken_0x2a8784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8784) {
            ctx->pc = 0x2A8868u;
            goto label_2a8868;
        }
    }
    ctx->pc = 0x2A878Cu;
    // 0x2a878c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2a878cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2a8790: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a8790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a8794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a8798: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8798u;
    {
        const bool branch_taken_0x2a8798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a8798) {
            ctx->pc = 0x2A87B8u;
            goto label_2a87b8;
        }
    }
    ctx->pc = 0x2A87A0u;
    // 0x2a87a0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2a87a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2a87a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a87a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a87a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a87ac: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A87ACu;
    {
        const bool branch_taken_0x2a87ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a87ac) {
            ctx->pc = 0x2A8868u;
            goto label_2a8868;
        }
    }
    ctx->pc = 0x2A87B4u;
    // 0x2a87b4: 0x0  nop
    ctx->pc = 0x2a87b4u;
    // NOP
label_2a87b8:
    // 0x2a87b8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2a87b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2a87bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a87bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a87c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2a87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a87c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a87c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a87c8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A87C8u;
    {
        const bool branch_taken_0x2a87c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a87c8) {
            ctx->pc = 0x2A8868u;
            goto label_2a8868;
        }
    }
    ctx->pc = 0x2A87D0u;
    // 0x2a87d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a87d4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87d8: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a87d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a87dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a87e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a87e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a87e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a87e8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a87e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a87ec: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a87ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a87f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a87f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a87f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2a87f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2a87f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a87fc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a87fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8800: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x2a8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8804: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a8808: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a8808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a880c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8814: 0x0  nop
    ctx->pc = 0x2a8814u;
    // NOP
    // 0x2a8818: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a8818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a881c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a881cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a8820: 0xc067588  jal         func_19D620
    ctx->pc = 0x2A8820u;
    SET_GPR_U32(ctx, 31, 0x2A8828u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2A8820u, 0x2A8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8828u;
label_2a8828:
    // 0x2a8828: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a8828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a882c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x2a882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8830: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2a8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a8834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8838: 0x0  nop
    ctx->pc = 0x2a8838u;
    // NOP
    // 0x2a883c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A883Cu;
    {
        const bool branch_taken_0x2a883c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a883c) {
            ctx->pc = 0x2A8868u;
            goto label_2a8868;
        }
    }
    ctx->pc = 0x2A8844u;
    // 0x2a8844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8848: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x2a8848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2a884c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a884cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8850: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a8850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a8854: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2a8854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2a8858: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a885c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2a885cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2a8860: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8864: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a8864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2a8868:
    // 0x2a8868: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2a8868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2a886c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a886cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a8870:
    // 0x2a8870: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2a8870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2a8874: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x2a8874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x2a8878: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a8878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a887c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2A887Cu;
    {
        const bool branch_taken_0x2a887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a887c) {
            ctx->pc = 0x2A8778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a8778;
        }
    }
    ctx->pc = 0x2A8884u;
    // 0x2a8884: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x2a8884u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2a8888:
    // 0x2a8888: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x2a8888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a888c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a888cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8890: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a8890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a8894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a8898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a889c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2a889cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a88a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A88A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A88A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A88A8u;
}
