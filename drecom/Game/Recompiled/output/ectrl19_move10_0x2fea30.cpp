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

// Function: ectrl19_move10
// Address: 0x2fea30 - 0x2feef8
void ectrl19_move10_0x2fea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl19_move10_0x2fea30");
#endif

    switch (ctx->pc) {
        case 0x2feb14u: goto label_2feb14;
        case 0x2feb64u: goto label_2feb64;
        case 0x2feb70u: goto label_2feb70;
        case 0x2febccu: goto label_2febcc;
        case 0x2fec18u: goto label_2fec18;
        case 0x2fec24u: goto label_2fec24;
        case 0x2fed28u: goto label_2fed28;
        case 0x2fed4cu: goto label_2fed4c;
        case 0x2fed70u: goto label_2fed70;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedb4u: goto label_2fedb4;
        default: break;
    }

    ctx->pc = 0x2fea30u;

    // 0x2fea30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2fea34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2fea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2fea38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fea3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fea40: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2fea40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x2fea44: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fea44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fea48: 0x24639170  addiu       $v1, $v1, -0x6E90
    ctx->pc = 0x2fea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938992));
    // 0x2fea4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fea50: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fea50u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399170u));
    // 0x2fea54: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fea54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fea58: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fea58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fea5c: 0x24639180  addiu       $v1, $v1, -0x6E80
    ctx->pc = 0x2fea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939008));
    // 0x2fea60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fea64: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fea64u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399180u));
    // 0x2fea68: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fea68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fea6c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fea70: 0x24639190  addiu       $v1, $v1, -0x6E70
    ctx->pc = 0x2fea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939024));
    // 0x2fea74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fea78: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fea78u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399190u));
    // 0x2fea7c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fea80: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fea80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fea84: 0x246391a0  addiu       $v1, $v1, -0x6E60
    ctx->pc = 0x2fea84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939040));
    // 0x2fea88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fea8c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2fea8cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3991A0u));
    // 0x2fea90: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fea90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fea94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2fea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2fea98: 0x246391b0  addiu       $v1, $v1, -0x6E50
    ctx->pc = 0x2fea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939056));
    // 0x2fea9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2fea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2feaa0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2feaa0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3991B0u));
    // 0x2feaa4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2feaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2feaa8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2feaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2feaac: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x2feaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
    // 0x2feab0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2feab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2feab4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2feab4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3991C0u));
    // 0x2feab8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2feab8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2feabc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2feabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2feac0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2feac0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2feac4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2feac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2feac8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2feac8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2feacc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2feaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fead0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2fead0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fead4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2fead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fead8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2fead8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2feadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2feadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feae0: 0x0  nop
    ctx->pc = 0x2feae0u;
    // NOP
    // 0x2feae4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2feae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2feae8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feaec: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2feaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feaf0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2feaf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2feaf4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FEAF4u;
    {
        const bool branch_taken_0x2feaf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feaf4) {
            ctx->pc = 0x2FEBA0u;
            goto label_2feba0;
        }
    }
    ctx->pc = 0x2FEAFCu;
    // 0x2feafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2feafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb00: 0x0  nop
    ctx->pc = 0x2feb00u;
    // NOP
    // 0x2feb04: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2feb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2feb08: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2feb08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2feb0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2FEB0Cu;
    {
        const bool branch_taken_0x2feb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feb0c) {
            ctx->pc = 0x2FEB90u;
            goto label_2feb90;
        }
    }
    ctx->pc = 0x2FEB14u;
label_2feb14:
    // 0x2feb14: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2feb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feb18: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2feb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2feb1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2feb20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2feb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb24: 0x0  nop
    ctx->pc = 0x2feb24u;
    // NOP
    // 0x2feb28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2feb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2feb2c: 0x3c02c46b  lui         $v0, 0xC46B
    ctx->pc = 0x2feb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50283 << 16));
    // 0x2feb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2feb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb34: 0x0  nop
    ctx->pc = 0x2feb34u;
    // NOP
    // 0x2feb38: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2feb38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2feb3c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2feb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2feb40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2feb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2feb44: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2feb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2feb48: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feb4c: 0x24040427  addiu       $a0, $zero, 0x427
    ctx->pc = 0x2feb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
    // 0x2feb50: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2feb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2feb54: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2feb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2feb58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2feb58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2feb5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FEB5Cu;
    SET_GPR_U32(ctx, 31, 0x2FEB64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FEB5Cu, 0x2FEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB64u;
label_2feb64:
    // 0x2feb64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2feb64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2feb68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FEB68u;
    SET_GPR_U32(ctx, 31, 0x2FEB70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FEB68u, 0x2FEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEB70u;
label_2feb70:
    // 0x2feb70: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2feb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2feb74: 0x3c03c26b  lui         $v1, 0xC26B
    ctx->pc = 0x2feb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49771 << 16));
    // 0x2feb78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2feb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feb7c: 0x0  nop
    ctx->pc = 0x2feb7cu;
    // NOP
    // 0x2feb80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2feb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2feb84: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2feb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2feb88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2feb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2feb8c: 0x0  nop
    ctx->pc = 0x2feb8cu;
    // NOP
label_2feb90:
    // 0x2feb90: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x2feb90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2feb94: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2FEB94u;
    {
        const bool branch_taken_0x2feb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feb94) {
            ctx->pc = 0x2FEB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2feb14;
        }
    }
    ctx->pc = 0x2FEB9Cu;
    // 0x2feb9c: 0x0  nop
    ctx->pc = 0x2feb9cu;
    // NOP
label_2feba0:
    // 0x2feba0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feba4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2feba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2febac: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2FEBACu;
    {
        const bool branch_taken_0x2febac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2febac) {
            ctx->pc = 0x2FEC98u;
            goto label_2fec98;
        }
    }
    ctx->pc = 0x2FEBB4u;
    // 0x2febb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2febb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2febb8: 0x0  nop
    ctx->pc = 0x2febb8u;
    // NOP
    // 0x2febbc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2febbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2febc0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2febc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2febc4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2FEBC4u;
    {
        const bool branch_taken_0x2febc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2febc4) {
            ctx->pc = 0x2FEC88u;
            goto label_2fec88;
        }
    }
    ctx->pc = 0x2FEBCCu;
label_2febcc:
    // 0x2febcc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2febccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2febd0: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x2febd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2febd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2febd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2febd8: 0x0  nop
    ctx->pc = 0x2febd8u;
    // NOP
    // 0x2febdc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2febdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2febe0: 0x3c02c4e6  lui         $v0, 0xC4E6
    ctx->pc = 0x2febe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50406 << 16));
    // 0x2febe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2febe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2febe8: 0x0  nop
    ctx->pc = 0x2febe8u;
    // NOP
    // 0x2febec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2febecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2febf0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2febf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2febf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2febf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2febf8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2febf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2febfc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fec00: 0x24040428  addiu       $a0, $zero, 0x428
    ctx->pc = 0x2fec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x2fec04: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2fec04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2fec08: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fec08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fec0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fec0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fec10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FEC10u;
    SET_GPR_U32(ctx, 31, 0x2FEC18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FEC10u, 0x2FEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC18u;
label_2fec18:
    // 0x2fec18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fec18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fec1c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FEC1Cu;
    SET_GPR_U32(ctx, 31, 0x2FEC24u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FEC1Cu, 0x2FEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC24u;
label_2fec24:
    // 0x2fec24: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fec24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fec28: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2fec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec2c: 0x3c03c238  lui         $v1, 0xC238
    ctx->pc = 0x2fec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49720 << 16));
    // 0x2fec30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fec30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fec34: 0x0  nop
    ctx->pc = 0x2fec34u;
    // NOP
    // 0x2fec38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fec38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fec3c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2fec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2fec40: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2fec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec44: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x2fec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x2fec48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fec48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fec4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fec4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fec50: 0x0  nop
    ctx->pc = 0x2fec50u;
    // NOP
    // 0x2fec54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fec54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fec58: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fec58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2fec5c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fec60: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fec64: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEC64u;
    {
        const bool branch_taken_0x2fec64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fec64) {
            ctx->pc = 0x2FEC80u;
            goto label_2fec80;
        }
    }
    ctx->pc = 0x2FEC6Cu;
    // 0x2fec6c: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x2fec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec70: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fec74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fec78: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2fec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2fec7c: 0x0  nop
    ctx->pc = 0x2fec7cu;
    // NOP
label_2fec80:
    // 0x2fec80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fec80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2fec84: 0x0  nop
    ctx->pc = 0x2fec84u;
    // NOP
label_2fec88:
    // 0x2fec88: 0x2e230028  sltiu       $v1, $s1, 0x28
    ctx->pc = 0x2fec88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2fec8c: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2FEC8Cu;
    {
        const bool branch_taken_0x2fec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fec8c) {
            ctx->pc = 0x2FEBCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2febcc;
        }
    }
    ctx->pc = 0x2FEC94u;
    // 0x2fec94: 0x0  nop
    ctx->pc = 0x2fec94u;
    // NOP
label_2fec98:
    // 0x2fec98: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fec9c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feca0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2feca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2feca4: 0x14200084  bnez        $at, . + 4 + (0x84 << 2)
    ctx->pc = 0x2FECA4u;
    {
        const bool branch_taken_0x2feca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feca4) {
            ctx->pc = 0x2FEEB8u;
            goto label_2feeb8;
        }
    }
    ctx->pc = 0x2FECACu;
    // 0x2fecac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecb0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecb4: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x2fecb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2fecb8: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
    ctx->pc = 0x2FECB8u;
    {
        const bool branch_taken_0x2fecb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fecb8) {
            ctx->pc = 0x2FEEB8u;
            goto label_2feeb8;
        }
    }
    ctx->pc = 0x2FECC0u;
    // 0x2fecc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecc4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecc8: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x2fecc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x2feccc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FECCCu;
    {
        const bool branch_taken_0x2feccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feccc) {
            ctx->pc = 0x2FECE8u;
            goto label_2fece8;
        }
    }
    ctx->pc = 0x2FECD4u;
    // 0x2fecd4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecd8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fecdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fece0: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x2FECE0u;
    {
        const bool branch_taken_0x2fece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fece0) {
            ctx->pc = 0x2FEEB8u;
            goto label_2feeb8;
        }
    }
    ctx->pc = 0x2FECE8u;
label_2fece8:
    // 0x2fece8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fecec: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fecf0: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2fecf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2fecf4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FECF4u;
    {
        const bool branch_taken_0x2fecf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fecf4) {
            ctx->pc = 0x2FED10u;
            goto label_2fed10;
        }
    }
    ctx->pc = 0x2FECFCu;
    // 0x2fecfc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fed00: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fed04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fed08: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2FED08u;
    {
        const bool branch_taken_0x2fed08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fed08) {
            ctx->pc = 0x2FEEB8u;
            goto label_2feeb8;
        }
    }
    ctx->pc = 0x2FED10u;
label_2fed10:
    // 0x2fed10: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2fed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fed14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fed14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fed18: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2fed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fed1c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2fed1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2fed20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FED20u;
    SET_GPR_U32(ctx, 31, 0x2FED28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FED20u, 0x2FED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED28u;
label_2fed28:
    // 0x2fed28: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2fed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2fed2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fed2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fed30: 0x0  nop
    ctx->pc = 0x2fed30u;
    // NOP
    // 0x2fed34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fed34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fed38: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2fed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fed3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fed40: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fed40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fed44: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FED44u;
    SET_GPR_U32(ctx, 31, 0x2FED4Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FED44u, 0x2FED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED4Cu;
label_2fed4c:
    // 0x2fed4c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2fed50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fed50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fed54: 0x0  nop
    ctx->pc = 0x2fed54u;
    // NOP
    // 0x2fed58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fed58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fed5c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2fed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fed60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fed64: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2fed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fed68: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FED68u;
    SET_GPR_U32(ctx, 31, 0x2FED70u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FED68u, 0x2FED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED70u;
label_2fed70:
    // 0x2fed70: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2fed70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2fed74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fed74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fed78: 0x0  nop
    ctx->pc = 0x2fed78u;
    // NOP
    // 0x2fed7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fed7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fed80: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2fed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fed84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fed88: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2fed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fed8c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2fed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fed90: 0x24040429  addiu       $a0, $zero, 0x429
    ctx->pc = 0x2fed90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1065));
    // 0x2fed94: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2fed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2fed98: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2fed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fed9c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fed9cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2feda0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FEDA0u;
    SET_GPR_U32(ctx, 31, 0x2FEDA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FEDA0u, 0x2FEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDA8u;
label_2feda8:
    // 0x2feda8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2feda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fedac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FEDACu;
    SET_GPR_U32(ctx, 31, 0x2FEDB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FEDACu, 0x2FEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDB4u;
label_2fedb4:
    // 0x2fedb4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fedb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fedb8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fedbc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fedc0: 0x1203003d  beq         $s0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2FEDC0u;
    {
        const bool branch_taken_0x2fedc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fedc0) {
            ctx->pc = 0x2FEEB8u;
            goto label_2feeb8;
        }
    }
    ctx->pc = 0x2FEDC8u;
    // 0x2fedc8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fedcc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fedccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fedd0: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x2fedd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2fedd4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FEDD4u;
    {
        const bool branch_taken_0x2fedd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fedd4) {
            ctx->pc = 0x2FEE20u;
            goto label_2fee20;
        }
    }
    ctx->pc = 0x2FEDDCu;
    // 0x2feddc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fede0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fede0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fede4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fede8: 0x0  nop
    ctx->pc = 0x2fede8u;
    // NOP
    // 0x2fedec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2fedecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fedf0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2fedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2fedf4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fedf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fedf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fedf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fedfc: 0x0  nop
    ctx->pc = 0x2fedfcu;
    // NOP
    // 0x2fee00: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fee00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fee04: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2fee04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2fee08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee0c: 0x0  nop
    ctx->pc = 0x2fee0cu;
    // NOP
    // 0x2fee10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fee10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fee14: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fee14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fee18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FEE18u;
    {
        const bool branch_taken_0x2fee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee18) {
            ctx->pc = 0x2FEE88u;
            goto label_2fee88;
        }
    }
    ctx->pc = 0x2FEE20u;
label_2fee20:
    // 0x2fee20: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fee24: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fee28: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x2fee28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2fee2c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FEE2Cu;
    {
        const bool branch_taken_0x2fee2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee2c) {
            ctx->pc = 0x2FEE78u;
            goto label_2fee78;
        }
    }
    ctx->pc = 0x2FEE34u;
    // 0x2fee34: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fee38: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fee3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee40: 0x0  nop
    ctx->pc = 0x2fee40u;
    // NOP
    // 0x2fee44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2fee44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee48: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2fee48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2fee4c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2fee4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2fee50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee54: 0x0  nop
    ctx->pc = 0x2fee54u;
    // NOP
    // 0x2fee58: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fee58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fee5c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2fee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2fee60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee64: 0x0  nop
    ctx->pc = 0x2fee64u;
    // NOP
    // 0x2fee68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fee68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fee6c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fee6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fee70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEE70u;
    {
        const bool branch_taken_0x2fee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fee70) {
            ctx->pc = 0x2FEE88u;
            goto label_2fee88;
        }
    }
    ctx->pc = 0x2FEE78u;
label_2fee78:
    // 0x2fee78: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2fee78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2fee7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee80: 0x0  nop
    ctx->pc = 0x2fee80u;
    // NOP
    // 0x2fee84: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fee84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_2fee88:
    // 0x2fee88: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2fee88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fee8c: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fee90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee94: 0x0  nop
    ctx->pc = 0x2fee94u;
    // NOP
    // 0x2fee98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2fee98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee9c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2fee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2feea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2feea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feea4: 0x0  nop
    ctx->pc = 0x2feea4u;
    // NOP
    // 0x2feea8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2feea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2feeac: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x2feeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2feeb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2feeb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2feeb4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2feeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_2feeb8:
    // 0x2feeb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feebc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2feebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2feec0: 0x286300dc  slti        $v1, $v1, 0xDC
    ctx->pc = 0x2feec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)220) ? 1 : 0);
    // 0x2feec4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEEC4u;
    {
        const bool branch_taken_0x2feec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2feec4) {
            ctx->pc = 0x2FEEE0u;
            goto label_2feee0;
        }
    }
    ctx->pc = 0x2FEECCu;
    // 0x2feecc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feed0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2feed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2feed4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2feed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2feed8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2feed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2feedc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2feedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2feee0:
    // 0x2feee0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2feee0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2feee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2feee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2feee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2feee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2feeec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2feeecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2feef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEEF8u;
}
