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

// Function: srp_02_init
// Address: 0x1fc9f0 - 0x1fcebc
void srp_02_init_0x1fc9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_02_init_0x1fc9f0");
#endif

    switch (ctx->pc) {
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca90u: goto label_1fca90;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb64u: goto label_1fcb64;
        case 0x1fcb94u: goto label_1fcb94;
        case 0x1fcbc8u: goto label_1fcbc8;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc38u: goto label_1fcc38;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fcd14u: goto label_1fcd14;
        case 0x1fce1cu: goto label_1fce1c;
        default: break;
    }

    ctx->pc = 0x1fc9f0u;

    // 0x1fc9f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fc9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fc9f4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1fc9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fc9f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fc9fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fca00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fca00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fca04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fca04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fca08: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1fca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x1fca0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca10: 0x8c520ac0  lw          $s2, 0xAC0($v0)
    ctx->pc = 0x1fca10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x1fca14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fca18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca1c: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x1fca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x1fca20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca24: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x1fca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x1fca28: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x1fca28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fca2c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1fca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca30: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x1FCA30u;
    SET_GPR_U32(ctx, 31, 0x1FCA38u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x1FCA30u, 0x1FCA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA38u;
label_1fca38:
    // 0x1fca38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fca3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fca3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fca40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca44: 0xe440027c  swc1        $f0, 0x27C($v0)
    ctx->pc = 0x1fca44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 636), bits); }
    // 0x1fca48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fca4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fca50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca54: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fca54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
    // 0x1fca58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca5c: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fca5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fca60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fca64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fca68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCA68u;
    {
        const bool branch_taken_0x1fca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fca68) {
            ctx->pc = 0x1FCAA0u;
            goto label_1fcaa0;
        }
    }
    ctx->pc = 0x1FCA70u;
    // 0x1fca70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1fca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca7c: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x1fca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1fca80: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fca80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fca84: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1fca88: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x1FCA88u;
    SET_GPR_U32(ctx, 31, 0x1FCA90u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x1FCA88u, 0x1FCA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA90u;
label_1fca90:
    // 0x1fca90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fca94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fca94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fca98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fca9c: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fca9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
label_1fcaa0:
    // 0x1fcaa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcaa4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcaa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcaac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcab0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcab4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcab8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcabc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcac0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FCAC0u;
    SET_GPR_U32(ctx, 31, 0x1FCAC8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FCAC0u, 0x1FCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAC8u;
label_1fcac8:
    // 0x1fcac8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcacc: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcad0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCAD0u;
    {
        const bool branch_taken_0x1fcad0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fcad0) {
            ctx->pc = 0x1FCAECu;
            goto label_1fcaec;
        }
    }
    ctx->pc = 0x1FCAD8u;
    // 0x1fcad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcadc: 0x0  nop
    ctx->pc = 0x1fcadcu;
    // NOP
    // 0x1fcae0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fcae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fcae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCAE4u;
    {
        const bool branch_taken_0x1fcae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcae4) {
            ctx->pc = 0x1FCB08u;
            goto label_1fcb08;
        }
    }
    ctx->pc = 0x1FCAECu;
label_1fcaec:
    // 0x1fcaec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fcaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fcaf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fcaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fcaf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fcaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fcaf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcafc: 0x0  nop
    ctx->pc = 0x1fcafcu;
    // NOP
    // 0x1fcb00: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fcb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fcb04: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fcb04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fcb08:
    // 0x1fcb08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcb0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcb10: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FCB10u;
    SET_GPR_U32(ctx, 31, 0x1FCB18u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FCB18u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FCB18u) { return; }
    ctx->pc = 0x1FCB18u;
label_1fcb18:
    // 0x1fcb18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcb20: 0x0  nop
    ctx->pc = 0x1fcb20u;
    // NOP
    // 0x1fcb24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fcb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fcb28: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fcb28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcb2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FCB2Cu, 0x1FCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB34u;
label_1fcb34:
    // 0x1fcb34: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb38: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1fcb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fcb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fcb40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb44: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1fcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fcb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fcb4c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fcb50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcb58: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1fcb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1fcb5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FCB5Cu, 0x1FCB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB64u;
label_1fcb64:
    // 0x1fcb64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb68: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1fcb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fcb6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fcb70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb74: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1fcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fcb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fcb7c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fcb80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcb88: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1fcb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1fcb8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FCB8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FCB8Cu, 0x1FCB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB94u;
label_1fcb94:
    // 0x1fcb94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb98: 0xc4610278  lwc1        $f1, 0x278($v1)
    ctx->pc = 0x1fcb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fcb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fcba0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcba4: 0xc4600288  lwc1        $f0, 0x288($v1)
    ctx->pc = 0x1fcba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fcba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fcbac: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fcbb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcbb8: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x1fcbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 328), bits); }
    // 0x1fcbbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcbc0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1FCBC0u;
    {
        const bool branch_taken_0x1fcbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbc0) {
            ctx->pc = 0x1FCC98u;
            goto label_1fcc98;
        }
    }
    ctx->pc = 0x1FCBC8u;
label_1fcbc8:
    // 0x1fcbc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbcc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcbd0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcbd4: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fcbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fcbd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FCBD8u;
    SET_GPR_U32(ctx, 31, 0x1FCBE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FCBD8u, 0x1FCBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBE0u;
label_1fcbe0:
    // 0x1fcbe0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fcbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcbe4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbe8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fcbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcbec: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fcbf0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcbf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbf8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcbfc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FCC00u;
    SET_GPR_U32(ctx, 31, 0x1FCC08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FCC00u, 0x1FCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC08u;
label_1fcc08:
    // 0x1fcc08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc0c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcc0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcc10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcc14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcc18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc1c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fcc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcc20: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fcc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcc24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc28: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fcc28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcc2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc30: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FCC30u;
    SET_GPR_U32(ctx, 31, 0x1FCC38u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FCC30u, 0x1FCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC38u;
label_1fcc38:
    // 0x1fcc38: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc3c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcc3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcc44: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fcc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fcc48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCC48u;
    {
        const bool branch_taken_0x1fcc48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fcc48) {
            ctx->pc = 0x1FCC64u;
            goto label_1fcc64;
        }
    }
    ctx->pc = 0x1FCC50u;
    // 0x1fcc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcc54: 0x0  nop
    ctx->pc = 0x1fcc54u;
    // NOP
    // 0x1fcc58: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fcc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fcc5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCC5Cu;
    {
        const bool branch_taken_0x1fcc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc5c) {
            ctx->pc = 0x1FCC80u;
            goto label_1fcc80;
        }
    }
    ctx->pc = 0x1FCC64u;
label_1fcc64:
    // 0x1fcc64: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fcc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fcc68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fcc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fcc6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fcc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fcc70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcc70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcc74: 0x0  nop
    ctx->pc = 0x1fcc74u;
    // NOP
    // 0x1fcc78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fcc78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fcc7c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fcc7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fcc80:
    // 0x1fcc80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcc88: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FCC88u;
    SET_GPR_U32(ctx, 31, 0x1FCC90u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FCC90u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FCC90u) { return; }
    ctx->pc = 0x1FCC90u;
label_1fcc90:
    // 0x1fcc90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fcc94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fcc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fcc98:
    // 0x1fcc98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcc9c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fcc9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fcca0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcca4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fcca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fcca8: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1FCCA8u;
    {
        const bool branch_taken_0x1fcca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcca8) {
            ctx->pc = 0x1FCBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcbc8;
        }
    }
    ctx->pc = 0x1FCCB0u;
    // 0x1fccb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccb4: 0x90640347  lbu         $a0, 0x347($v1)
    ctx->pc = 0x1fccb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fccb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccbc: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x1fccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fccc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccc4: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fccc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fccc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fccc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcccc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccd0: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fccd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fccd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fccd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fccd8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fccdc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fccdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcce0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcce4: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fcce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcce8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fccec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fccecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fccf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fccf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fccf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1fccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fccf8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fccfc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fccfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcd00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd04: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x1fcd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcd08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fcd08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcd0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FCD0Cu;
    {
        const bool branch_taken_0x1fcd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd0c) {
            ctx->pc = 0x1FCD50u;
            goto label_1fcd50;
        }
    }
    ctx->pc = 0x1FCD14u;
label_1fcd14:
    // 0x1fcd14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd18: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fcd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fcd1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcd20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fcd24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fcd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fcd28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcd30: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fcd30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcd34: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fcd38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcd40: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fcd44: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fcd44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fcd48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fcd4c: 0x0  nop
    ctx->pc = 0x1fcd4cu;
    // NOP
label_1fcd50:
    // 0x1fcd50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd54: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fcd54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fcd58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fcd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fcd5c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fcd5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fcd60: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FCD60u;
    {
        const bool branch_taken_0x1fcd60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd60) {
            ctx->pc = 0x1FCD14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcd14;
        }
    }
    ctx->pc = 0x1FCD68u;
    // 0x1fcd68: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd6c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fcd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcd70: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1fcd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fcd74: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fcd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fcd78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcd78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcd7c: 0x0  nop
    ctx->pc = 0x1fcd7cu;
    // NOP
    // 0x1fcd80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fcd80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fcd84: 0x0  nop
    ctx->pc = 0x1fcd84u;
    // NOP
    // 0x1fcd88: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FCD88u;
    {
        const bool branch_taken_0x1fcd88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fcd88) {
            ctx->pc = 0x1FCE04u;
            goto label_1fce04;
        }
    }
    ctx->pc = 0x1FCD90u;
    // 0x1fcd90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd94: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fcd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcd98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcd9c: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fcd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcda0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fcda0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fcda4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcda8: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fcda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fcdac: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCDACu;
    {
        const bool branch_taken_0x1fcdac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fcdac) {
            ctx->pc = 0x1FCDC8u;
            goto label_1fcdc8;
        }
    }
    ctx->pc = 0x1FCDB4u;
    // 0x1fcdb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fcdb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcdb8: 0x0  nop
    ctx->pc = 0x1fcdb8u;
    // NOP
    // 0x1fcdbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fcdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fcdc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCDC0u;
    {
        const bool branch_taken_0x1fcdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdc0) {
            ctx->pc = 0x1FCDE4u;
            goto label_1fcde4;
        }
    }
    ctx->pc = 0x1FCDC8u;
label_1fcdc8:
    // 0x1fcdc8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fcdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fcdcc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fcdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fcdd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fcdd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fcdd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fcdd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcdd8: 0x0  nop
    ctx->pc = 0x1fcdd8u;
    // NOP
    // 0x1fcddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fcddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fcde0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fcde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fcde4:
    // 0x1fcde4: 0x0  nop
    ctx->pc = 0x1fcde4u;
    // NOP
    // 0x1fcde8: 0x0  nop
    ctx->pc = 0x1fcde8u;
    // NOP
    // 0x1fcdec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fcdecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fcdf0: 0x0  nop
    ctx->pc = 0x1fcdf0u;
    // NOP
    // 0x1fcdf4: 0x0  nop
    ctx->pc = 0x1fcdf4u;
    // NOP
    // 0x1fcdf8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fcdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1fcdfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCDFCu;
    {
        const bool branch_taken_0x1fcdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdfc) {
            ctx->pc = 0x1FCE10u;
            goto label_1fce10;
        }
    }
    ctx->pc = 0x1FCE04u;
label_1fce04:
    // 0x1fce04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fce04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fce08: 0x0  nop
    ctx->pc = 0x1fce08u;
    // NOP
    // 0x1fce0c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1fce10:
    // 0x1fce10: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fce10u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fce14: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCE14u;
    {
        const bool branch_taken_0x1fce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce14) {
            ctx->pc = 0x1FCE80u;
            goto label_1fce80;
        }
    }
    ctx->pc = 0x1FCE1Cu;
label_1fce1c:
    // 0x1fce1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fce20: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fce24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCE24u;
    {
        const bool branch_taken_0x1fce24 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fce24) {
            ctx->pc = 0x1FCE40u;
            goto label_1fce40;
        }
    }
    ctx->pc = 0x1FCE2Cu;
    // 0x1fce2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fce2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fce30: 0x0  nop
    ctx->pc = 0x1fce30u;
    // NOP
    // 0x1fce34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fce34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fce38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCE38u;
    {
        const bool branch_taken_0x1fce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce38) {
            ctx->pc = 0x1FCE5Cu;
            goto label_1fce5c;
        }
    }
    ctx->pc = 0x1FCE40u;
label_1fce40:
    // 0x1fce40: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1fce40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1fce44: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1fce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fce48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fce48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fce4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fce4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fce50: 0x0  nop
    ctx->pc = 0x1fce50u;
    // NOP
    // 0x1fce54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fce54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fce58: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fce58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fce5c:
    // 0x1fce5c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fce60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fce60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fce64: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fce64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fce68: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fce68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fce6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fce70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fce74: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x1fce74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x1fce78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fce78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fce7c: 0x0  nop
    ctx->pc = 0x1fce7cu;
    // NOP
label_1fce80:
    // 0x1fce80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fce84: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fce84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fce88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fce88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fce8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fce90: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fce94: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FCE94u;
    {
        const bool branch_taken_0x1fce94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce94) {
            ctx->pc = 0x1FCE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fce1c;
        }
    }
    ctx->pc = 0x1FCE9Cu;
    // 0x1fce9c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1fce9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcea0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fceac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fceacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fceb0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1fceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCEBCu;
}
