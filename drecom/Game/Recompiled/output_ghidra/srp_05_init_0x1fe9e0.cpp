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

// Function: srp_05_init
// Address: 0x1fe9e0 - 0x1feefc
void srp_05_init_0x1fe9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_05_init_0x1fe9e0");
#endif

    switch (ctx->pc) {
        case 0x1fea30u: goto label_1fea30;
        case 0x1fea3cu: goto label_1fea3c;
        case 0x1fea50u: goto label_1fea50;
        case 0x1feaacu: goto label_1feaac;
        case 0x1feaf4u: goto label_1feaf4;
        case 0x1feb1cu: goto label_1feb1c;
        case 0x1feb6cu: goto label_1feb6c;
        case 0x1feb8cu: goto label_1feb8c;
        case 0x1feb9cu: goto label_1feb9c;
        case 0x1febccu: goto label_1febcc;
        case 0x1febfcu: goto label_1febfc;
        case 0x1fec48u: goto label_1fec48;
        case 0x1fec70u: goto label_1fec70;
        case 0x1feca0u: goto label_1feca0;
        case 0x1fecf8u: goto label_1fecf8;
        case 0x1fed4cu: goto label_1fed4c;
        case 0x1fee54u: goto label_1fee54;
        default: break;
    }

    ctx->pc = 0x1fe9e0u;

    // 0x1fe9e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fe9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fe9e4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1fe9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1fe9e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fe9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fe9ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fe9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe9f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fe9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe9f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fea00: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1fea00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1fea04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea08: 0x8c540ac0  lw          $s4, 0xAC0($v0)
    ctx->pc = 0x1fea08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x1fea0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fea10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea14: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x1fea14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x1fea18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea1c: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x1fea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x1fea20: 0x8c550010  lw          $s5, 0x10($v0)
    ctx->pc = 0x1fea20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fea24: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1fea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea28: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x1FEA28u;
    SET_GPR_U32(ctx, 31, 0x1FEA30u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x1FEA28u, 0x1FEA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA30u;
label_1fea30:
    // 0x1fea30: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fea34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1FEA34u;
    SET_GPR_U32(ctx, 31, 0x1FEA3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1FEA34u, 0x1FEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA3Cu;
label_1fea3c:
    // 0x1fea3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fea44: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x1fea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fea48: 0xc067678  jal         func_19D9E0
    ctx->pc = 0x1FEA48u;
    SET_GPR_U32(ctx, 31, 0x1FEA50u);
    ctx->pc = 0x19D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9E0u, 0x1FEA48u, 0x1FEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA50u;
label_1fea50:
    // 0x1fea50: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1fea50u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fea54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fea58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fea58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea60: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1fea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1fea64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fea68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fea68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fea6c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea70: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
    // 0x1fea74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea78: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fea78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fea7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fea80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fea84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FEA84u;
    {
        const bool branch_taken_0x1fea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea84) {
            ctx->pc = 0x1FEABCu;
            goto label_1feabc;
        }
    }
    ctx->pc = 0x1FEA8Cu;
    // 0x1fea8c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1fea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fea90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea94: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fea98: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x1fea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1fea9c: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1feaa0: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x1feaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1feaa4: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x1FEAA4u;
    SET_GPR_U32(ctx, 31, 0x1FEAACu);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x1FEAA4u, 0x1FEAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAACu;
label_1feaac:
    // 0x1feaac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1feaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1feab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1feab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feab4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feab8: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1feab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
label_1feabc:
    // 0x1feabc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feac0: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x1feac4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FEAC4u;
    {
        const bool branch_taken_0x1feac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feac4) {
            ctx->pc = 0x1FEAF4u;
            goto label_1feaf4;
        }
    }
    ctx->pc = 0x1FEACCu;
    // 0x1feacc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fead0: 0x8c5302ac  lw          $s3, 0x2AC($v0)
    ctx->pc = 0x1fead0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x1fead4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fead8: 0x904202a9  lbu         $v0, 0x2A9($v0)
    ctx->pc = 0x1fead8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 681)));
    // 0x1feadc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1feadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1feae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1feae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1feae4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1feae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1feae8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1feae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feaec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FEAECu;
    SET_GPR_U32(ctx, 31, 0x1FEAF4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FEAF4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FEAF4u) { return; }
    ctx->pc = 0x1FEAF4u;
label_1feaf4:
    // 0x1feaf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feaf8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1feaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1feafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1feafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1feb00: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1feb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1feb04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feb08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feb0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1feb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1feb10: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x1feb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feb14: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FEB14u;
    SET_GPR_U32(ctx, 31, 0x1FEB1Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FEB14u, 0x1FEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB1Cu;
label_1feb1c:
    // 0x1feb1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feb20: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1feb20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1feb24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEB24u;
    {
        const bool branch_taken_0x1feb24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1feb24) {
            ctx->pc = 0x1FEB40u;
            goto label_1feb40;
        }
    }
    ctx->pc = 0x1FEB2Cu;
    // 0x1feb2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1feb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feb30: 0x0  nop
    ctx->pc = 0x1feb30u;
    // NOP
    // 0x1feb34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1feb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1feb38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEB38u;
    {
        const bool branch_taken_0x1feb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb38) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB40u;
label_1feb40:
    // 0x1feb40: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1feb44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1feb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1feb48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1feb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1feb4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1feb4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feb50: 0x0  nop
    ctx->pc = 0x1feb50u;
    // NOP
    // 0x1feb54: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1feb54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1feb58: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1feb58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1feb5c:
    // 0x1feb5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1feb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1feb60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1feb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1feb64: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FEB64u;
    SET_GPR_U32(ctx, 31, 0x1FEB6Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FEB6Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FEB6Cu) { return; }
    ctx->pc = 0x1FEB6Cu;
label_1feb6c:
    // 0x1feb6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1feb70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1feb70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feb74: 0x0  nop
    ctx->pc = 0x1feb74u;
    // NOP
    // 0x1feb78: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1feb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1feb7c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1feb7cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1feb80: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1feb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feb84: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1FEB84u;
    {
        const bool branch_taken_0x1feb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb84) {
            ctx->pc = 0x1FED00u;
            goto label_1fed00;
        }
    }
    ctx->pc = 0x1FEB8Cu;
label_1feb8c:
    // 0x1feb8c: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FEB8Cu;
    {
        const bool branch_taken_0x1feb8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb8c) {
            ctx->pc = 0x1FEC28u;
            goto label_1fec28;
        }
    }
    ctx->pc = 0x1FEB94u;
    // 0x1feb94: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FEB94u;
    SET_GPR_U32(ctx, 31, 0x1FEB9Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FEB94u, 0x1FEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB9Cu;
label_1feb9c:
    // 0x1feb9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feba0: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1feba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1feba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1feba8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febac: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1febacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1febb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1febb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1febb4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1febb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1febb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febc0: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1febc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1febc4: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FEBC4u;
    SET_GPR_U32(ctx, 31, 0x1FEBCCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FEBC4u, 0x1FEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBCCu;
label_1febcc:
    // 0x1febcc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febd0: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1febd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1febd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1febd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1febd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febdc: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1febdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1febe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1febe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1febe4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1febe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1febe8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1febecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febf0: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1febf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1febf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FEBF4u;
    SET_GPR_U32(ctx, 31, 0x1FEBFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FEBF4u, 0x1FEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBFCu;
label_1febfc:
    // 0x1febfc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec00: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1fec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fec04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fec04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fec08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec0c: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1fec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fec10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fec14: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fec14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fec18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec20: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x1fec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x1fec24: 0x0  nop
    ctx->pc = 0x1fec24u;
    // NOP
label_1fec28:
    // 0x1fec28: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fec28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fec2c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fec34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec38: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec3c: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fec3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fec40: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FEC40u;
    SET_GPR_U32(ctx, 31, 0x1FEC48u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FEC40u, 0x1FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC48u;
label_1fec48:
    // 0x1fec48: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fec4c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec50: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec54: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fec58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fec58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fec5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec60: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fec60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec64: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fec64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec68: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FEC68u;
    SET_GPR_U32(ctx, 31, 0x1FEC70u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FEC68u, 0x1FEC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC70u;
label_1fec70:
    // 0x1fec70: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec74: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fec74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fec78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fec7c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fec80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fec84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec88: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fec8c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec90: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fec94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fec98: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FEC98u;
    SET_GPR_U32(ctx, 31, 0x1FECA0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FEC98u, 0x1FECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECA0u;
label_1feca0:
    // 0x1feca0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feca4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1feca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1feca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1feca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fecac: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fecacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fecb0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FECB0u;
    {
        const bool branch_taken_0x1fecb0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fecb0) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FECB8u;
    // 0x1fecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fecbc: 0x0  nop
    ctx->pc = 0x1fecbcu;
    // NOP
    // 0x1fecc0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fecc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FECC4u;
    {
        const bool branch_taken_0x1fecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fecc4) {
            ctx->pc = 0x1FECE8u;
            goto label_1fece8;
        }
    }
    ctx->pc = 0x1FECCCu;
label_1feccc:
    // 0x1feccc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fecccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fecd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fecd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fecd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fecd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fecd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fecdc: 0x0  nop
    ctx->pc = 0x1fecdcu;
    // NOP
    // 0x1fece0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fece0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fece4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fece4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fece8:
    // 0x1fece8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fecec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fecf0: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FECF0u;
    SET_GPR_U32(ctx, 31, 0x1FECF8u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FECF8u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FECF8u) { return; }
    ctx->pc = 0x1FECF8u;
label_1fecf8:
    // 0x1fecf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fecf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fecfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fecfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fed00:
    // 0x1fed00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed04: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fed04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fed08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed0c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fed0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fed10: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1FED10u;
    {
        const bool branch_taken_0x1fed10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fed10) {
            ctx->pc = 0x1FEB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feb8c;
        }
    }
    ctx->pc = 0x1FED18u;
    // 0x1fed18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed1c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fed1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fed20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fed20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed28: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fed28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fed2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fed30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fed34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fed34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed3c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fed3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fed40: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fed40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fed44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FED44u;
    {
        const bool branch_taken_0x1fed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed44) {
            ctx->pc = 0x1FED88u;
            goto label_1fed88;
        }
    }
    ctx->pc = 0x1FED4Cu;
label_1fed4c:
    // 0x1fed4c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed50: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fed50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fed54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fed5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fed60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fed68: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fed68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fed6c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fed70: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fed74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fed78: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fed7c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fed80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fed80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fed84: 0x0  nop
    ctx->pc = 0x1fed84u;
    // NOP
label_1fed88:
    // 0x1fed88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fed8c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fed8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fed90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fed94: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fed94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fed98: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FED98u;
    {
        const bool branch_taken_0x1fed98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fed98) {
            ctx->pc = 0x1FED4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fed4c;
        }
    }
    ctx->pc = 0x1FEDA0u;
    // 0x1feda0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1feda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feda4: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1feda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feda8: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1feda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fedac: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fedb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fedb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fedb4: 0x0  nop
    ctx->pc = 0x1fedb4u;
    // NOP
    // 0x1fedb8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fedb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fedbc: 0x0  nop
    ctx->pc = 0x1fedbcu;
    // NOP
    // 0x1fedc0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FEDC0u;
    {
        const bool branch_taken_0x1fedc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fedc0) {
            ctx->pc = 0x1FEE3Cu;
            goto label_1fee3c;
        }
    }
    ctx->pc = 0x1FEDC8u;
    // 0x1fedc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fedcc: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fedccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fedd0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fedd4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fedd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fedd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fedd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1feddc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1feddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fede0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fede0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fede4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEDE4u;
    {
        const bool branch_taken_0x1fede4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fede4) {
            ctx->pc = 0x1FEE00u;
            goto label_1fee00;
        }
    }
    ctx->pc = 0x1FEDECu;
    // 0x1fedec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fedecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fedf0: 0x0  nop
    ctx->pc = 0x1fedf0u;
    // NOP
    // 0x1fedf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fedf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fedf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEDF8u;
    {
        const bool branch_taken_0x1fedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fedf8) {
            ctx->pc = 0x1FEE1Cu;
            goto label_1fee1c;
        }
    }
    ctx->pc = 0x1FEE00u;
label_1fee00:
    // 0x1fee00: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fee04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fee04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fee08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fee08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fee0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fee0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee10: 0x0  nop
    ctx->pc = 0x1fee10u;
    // NOP
    // 0x1fee14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fee14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fee18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fee18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fee1c:
    // 0x1fee1c: 0x0  nop
    ctx->pc = 0x1fee1cu;
    // NOP
    // 0x1fee20: 0x0  nop
    ctx->pc = 0x1fee20u;
    // NOP
    // 0x1fee24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fee24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fee28: 0x0  nop
    ctx->pc = 0x1fee28u;
    // NOP
    // 0x1fee2c: 0x0  nop
    ctx->pc = 0x1fee2cu;
    // NOP
    // 0x1fee30: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1fee30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1fee34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE34u;
    {
        const bool branch_taken_0x1fee34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee34) {
            ctx->pc = 0x1FEE48u;
            goto label_1fee48;
        }
    }
    ctx->pc = 0x1FEE3Cu;
label_1fee3c:
    // 0x1fee3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fee3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee40: 0x0  nop
    ctx->pc = 0x1fee40u;
    // NOP
    // 0x1fee44: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1fee44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1fee48:
    // 0x1fee48: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fee48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fee4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FEE4Cu;
    {
        const bool branch_taken_0x1fee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee4c) {
            ctx->pc = 0x1FEEB8u;
            goto label_1feeb8;
        }
    }
    ctx->pc = 0x1FEE54u;
label_1fee54:
    // 0x1fee54: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fee58: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fee5c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEE5Cu;
    {
        const bool branch_taken_0x1fee5c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fee5c) {
            ctx->pc = 0x1FEE78u;
            goto label_1fee78;
        }
    }
    ctx->pc = 0x1FEE64u;
    // 0x1fee64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fee64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee68: 0x0  nop
    ctx->pc = 0x1fee68u;
    // NOP
    // 0x1fee6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fee6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fee70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEE70u;
    {
        const bool branch_taken_0x1fee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee70) {
            ctx->pc = 0x1FEE94u;
            goto label_1fee94;
        }
    }
    ctx->pc = 0x1FEE78u;
label_1fee78:
    // 0x1fee78: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1fee78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1fee7c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1fee7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fee80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fee80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fee84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fee84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee88: 0x0  nop
    ctx->pc = 0x1fee88u;
    // NOP
    // 0x1fee8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fee8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fee90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fee90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fee94:
    // 0x1fee94: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1fee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fee98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fee98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fee9c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fee9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1feea0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1feea4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1feea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1feea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1feeac: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x1feeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x1feeb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1feeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1feeb4: 0x0  nop
    ctx->pc = 0x1feeb4u;
    // NOP
label_1feeb8:
    // 0x1feeb8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1feeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feebc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1feebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1feec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1feec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1feec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1feec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1feec8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1feec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1feecc: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FEECCu;
    {
        const bool branch_taken_0x1feecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feecc) {
            ctx->pc = 0x1FEE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fee54;
        }
    }
    ctx->pc = 0x1FEED4u;
    // 0x1feed4: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1feed4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1feed8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1feed8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1feedc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1feedcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1feee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1feee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1feee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1feee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feeec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1feeecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feef0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1feef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1feef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEEFCu;
}
