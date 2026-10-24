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

// Function: srp_04_init
// Address: 0x1fd9e0 - 0x1fdef8
void srp_04_init_0x1fd9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_04_init_0x1fd9e0");
#endif

    switch (ctx->pc) {
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda40u: goto label_1fda40;
        case 0x1fda50u: goto label_1fda50;
        case 0x1fda88u: goto label_1fda88;
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdba0u: goto label_1fdba0;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdc10u: goto label_1fdc10;
        case 0x1fdc40u: goto label_1fdc40;
        case 0x1fdc98u: goto label_1fdc98;
        case 0x1fdcecu: goto label_1fdcec;
        case 0x1fde54u: goto label_1fde54;
        default: break;
    }

    ctx->pc = 0x1fd9e0u;

    // 0x1fd9e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fd9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fd9e4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1fd9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1fd9e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fd9ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fd9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fd9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fd9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fd9f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fd9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd9fc: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1fd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x1fda00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda04: 0x8c530ac0  lw          $s3, 0xAC0($v0)
    ctx->pc = 0x1fda04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x1fda08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fda08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda10: 0xac430358  sw          $v1, 0x358($v0)
    ctx->pc = 0x1fda10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 856), GPR_U32(ctx, 3));
    // 0x1fda14: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda18: 0x8c420ac4  lw          $v0, 0xAC4($v0)
    ctx->pc = 0x1fda18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x1fda1c: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x1fda1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fda20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fda20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fda24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1FDA24u;
    SET_GPR_U32(ctx, 31, 0x1FDA2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1FDA24u, 0x1FDA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA2Cu;
label_1fda2c:
    // 0x1fda2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fda30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fda34: 0x24450140  addiu       $a1, $v0, 0x140
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fda38: 0xc067678  jal         func_19D9E0
    ctx->pc = 0x1FDA38u;
    SET_GPR_U32(ctx, 31, 0x1FDA40u);
    ctx->pc = 0x19D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9E0u, 0x1FDA38u, 0x1FDA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA40u;
label_1fda40:
    // 0x1fda40: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1fda40u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fda44: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda48: 0xc0c9930  jal         func_3264C0
    ctx->pc = 0x1FDA48u;
    SET_GPR_U32(ctx, 31, 0x1FDA50u);
    ctx->pc = 0x3264C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264C0u, 0x1FDA48u, 0x1FDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA50u;
label_1fda50:
    // 0x1fda50: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda54: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fda54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fda58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fda58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fda5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fda5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fda60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDA60u;
    {
        const bool branch_taken_0x1fda60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fda60) {
            ctx->pc = 0x1FDA98u;
            goto label_1fda98;
        }
    }
    ctx->pc = 0x1FDA68u;
    // 0x1fda68: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1fda68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda6c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda74: 0x24840280  addiu       $a0, $a0, 0x280
    ctx->pc = 0x1fda74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1fda78: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1fda78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fda7c: 0x24460280  addiu       $a2, $v0, 0x280
    ctx->pc = 0x1fda7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1fda80: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x1FDA80u;
    SET_GPR_U32(ctx, 31, 0x1FDA88u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x1FDA80u, 0x1FDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA88u;
label_1fda88:
    // 0x1fda88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fda88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fda8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fda8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fda90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda94: 0xe440028c  swc1        $f0, 0x28C($v0)
    ctx->pc = 0x1fda94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 652), bits); }
label_1fda98:
    // 0x1fda98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda9c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fda9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdaa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fdaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fdaa4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fdaa8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdaac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fdaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdab0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdab4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1fdab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdab8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FDAB8u;
    SET_GPR_U32(ctx, 31, 0x1FDAC0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FDAB8u, 0x1FDAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAC0u;
label_1fdac0:
    // 0x1fdac0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdac4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fdac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdac8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDAC8u;
    {
        const bool branch_taken_0x1fdac8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdac8) {
            ctx->pc = 0x1FDAE4u;
            goto label_1fdae4;
        }
    }
    ctx->pc = 0x1FDAD0u;
    // 0x1fdad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdad4: 0x0  nop
    ctx->pc = 0x1fdad4u;
    // NOP
    // 0x1fdad8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fdad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fdadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDADCu;
    {
        const bool branch_taken_0x1fdadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdadc) {
            ctx->pc = 0x1FDB00u;
            goto label_1fdb00;
        }
    }
    ctx->pc = 0x1FDAE4u;
label_1fdae4:
    // 0x1fdae4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fdae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdaec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fdaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fdaf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdaf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdaf4: 0x0  nop
    ctx->pc = 0x1fdaf4u;
    // NOP
    // 0x1fdaf8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fdaf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fdafc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fdafcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fdb00:
    // 0x1fdb00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdb04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdb08: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FDB08u;
    SET_GPR_U32(ctx, 31, 0x1FDB10u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FDB10u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDB10u) { return; }
    ctx->pc = 0x1FDB10u;
label_1fdb10:
    // 0x1fdb10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fdb14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdb18: 0x0  nop
    ctx->pc = 0x1fdb18u;
    // NOP
    // 0x1fdb1c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fdb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1fdb20: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fdb20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fdb24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdb28: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1FDB28u;
    {
        const bool branch_taken_0x1fdb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb28) {
            ctx->pc = 0x1FDCA0u;
            goto label_1fdca0;
        }
    }
    ctx->pc = 0x1FDB30u;
label_1fdb30:
    // 0x1fdb30: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FDB30u;
    {
        const bool branch_taken_0x1fdb30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb30) {
            ctx->pc = 0x1FDBC8u;
            goto label_1fdbc8;
        }
    }
    ctx->pc = 0x1FDB38u;
    // 0x1fdb38: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FDB38u;
    SET_GPR_U32(ctx, 31, 0x1FDB40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FDB38u, 0x1FDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB40u;
label_1fdb40:
    // 0x1fdb40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb44: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1fdb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdb48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fdb48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdb4c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb50: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1fdb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdb58: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdb5c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb64: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1fdb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1fdb68: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FDB68u;
    SET_GPR_U32(ctx, 31, 0x1FDB70u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FDB68u, 0x1FDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB70u;
label_1fdb70:
    // 0x1fdb70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb74: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1fdb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdb78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fdb78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdb7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb80: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1fdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdb84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdb84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdb88: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdb8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdb94: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1fdb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1fdb98: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FDB98u;
    SET_GPR_U32(ctx, 31, 0x1FDBA0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FDB98u, 0x1FDBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBA0u;
label_1fdba0:
    // 0x1fdba0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdba4: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1fdba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdba8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fdba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdbac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbb0: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1fdbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdbb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fdbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fdbb8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdbbc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbc4: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x1fdbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
label_1fdbc8:
    // 0x1fdbc8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fdbcc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbd4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdbd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdbdc: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1fdbe0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FDBE0u;
    SET_GPR_U32(ctx, 31, 0x1FDBE8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FDBE0u, 0x1FDBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBE8u;
label_1fdbe8:
    // 0x1fdbe8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdbec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdbf0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdbf4: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fdbf8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fdbfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc00: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fdc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc08: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1FDC08u;
    SET_GPR_U32(ctx, 31, 0x1FDC10u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1FDC08u, 0x1FDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC10u;
label_1fdc10:
    // 0x1fdc10: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc14: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fdc14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdc18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fdc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fdc1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fdc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fdc20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc24: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fdc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fdc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdc2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc30: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1fdc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdc34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc38: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FDC38u;
    SET_GPR_U32(ctx, 31, 0x1FDC40u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FDC38u, 0x1FDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC40u;
label_1fdc40:
    // 0x1fdc40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdc44: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fdc44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdc48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fdc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fdc4c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1fdc50: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDC50u;
    {
        const bool branch_taken_0x1fdc50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdc50) {
            ctx->pc = 0x1FDC6Cu;
            goto label_1fdc6c;
        }
    }
    ctx->pc = 0x1FDC58u;
    // 0x1fdc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdc5c: 0x0  nop
    ctx->pc = 0x1fdc5cu;
    // NOP
    // 0x1fdc60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fdc60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fdc64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDC64u;
    {
        const bool branch_taken_0x1fdc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc64) {
            ctx->pc = 0x1FDC88u;
            goto label_1fdc88;
        }
    }
    ctx->pc = 0x1FDC6Cu;
label_1fdc6c:
    // 0x1fdc6c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fdc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1fdc70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fdc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fdc74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fdc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fdc78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fdc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdc7c: 0x0  nop
    ctx->pc = 0x1fdc7cu;
    // NOP
    // 0x1fdc80: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fdc80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fdc84: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fdc84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fdc88:
    // 0x1fdc88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc8c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fdc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdc90: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FDC90u;
    SET_GPR_U32(ctx, 31, 0x1FDC98u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FDC98u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FDC98u) { return; }
    ctx->pc = 0x1FDC98u;
label_1fdc98:
    // 0x1fdc98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fdc98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fdc9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fdca0:
    // 0x1fdca0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdca4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdca4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdca8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcac: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fdcacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fdcb0: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1FDCB0u;
    {
        const bool branch_taken_0x1fdcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdcb0) {
            ctx->pc = 0x1FDB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdb30;
        }
    }
    ctx->pc = 0x1FDCB8u;
    // 0x1fdcb8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcbc: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fdcbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fdcc0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fdcc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcc4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcc8: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fdcc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fdccc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fdcd4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fdcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdcd8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcdc: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fdcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fdce0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fdce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fdce4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FDCE4u;
    {
        const bool branch_taken_0x1fdce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdce4) {
            ctx->pc = 0x1FDD88u;
            goto label_1fdd88;
        }
    }
    ctx->pc = 0x1FDCECu;
label_1fdcec:
    // 0x1fdcec: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdcf0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdcf4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fdcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdcf8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1fdcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fdcfc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1fdcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1fdd00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1fdd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1fdd04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fdd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdd08: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDD08u;
    {
        const bool branch_taken_0x1fdd08 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fdd08) {
            ctx->pc = 0x1FDD24u;
            goto label_1fdd24;
        }
    }
    ctx->pc = 0x1FDD10u;
    // 0x1fdd10: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fdd10u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdd14: 0x0  nop
    ctx->pc = 0x1fdd14u;
    // NOP
    // 0x1fdd18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fdd18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fdd1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDD1Cu;
    {
        const bool branch_taken_0x1fdd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd1c) {
            ctx->pc = 0x1FDD40u;
            goto label_1fdd40;
        }
    }
    ctx->pc = 0x1FDD24u;
label_1fdd24:
    // 0x1fdd24: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1fdd28: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1fdd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fdd2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fdd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fdd30: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fdd30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdd34: 0x0  nop
    ctx->pc = 0x1fdd34u;
    // NOP
    // 0x1fdd38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fdd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fdd3c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fdd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fdd40:
    // 0x1fdd40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fdd40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fdd44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fdd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fdd48: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1fdd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1fdd4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd50: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fdd50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fdd54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdd58: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fdd5c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fdd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdd60: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd68: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fdd68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdd6c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fdd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fdd70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdd78: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fdd7c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fdd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fdd80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fdd84: 0x0  nop
    ctx->pc = 0x1fdd84u;
    // NOP
label_1fdd88:
    // 0x1fdd88: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdd8c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fdd8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fdd90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdd94: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fdd94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fdd98: 0x1020ffd4  beqz        $at, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1FDD98u;
    {
        const bool branch_taken_0x1fdd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd98) {
            ctx->pc = 0x1FDCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdcec;
        }
    }
    ctx->pc = 0x1FDDA0u;
    // 0x1fdda0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdda4: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fdda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fdda8: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x1fddac: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1fddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1fddb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fddb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddb4: 0x0  nop
    ctx->pc = 0x1fddb4u;
    // NOP
    // 0x1fddb8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1fddb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fddbc: 0x0  nop
    ctx->pc = 0x1fddbcu;
    // NOP
    // 0x1fddc0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDE3Cu;
            goto label_1fde3c;
        }
    }
    ctx->pc = 0x1FDDC8u;
    // 0x1fddc8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fddcc: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x1fddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fddd0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fddd4: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x1fddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fddd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1fddd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fdddc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdde0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdde4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDDE4u;
    {
        const bool branch_taken_0x1fdde4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fdde4) {
            ctx->pc = 0x1FDE00u;
            goto label_1fde00;
        }
    }
    ctx->pc = 0x1FDDECu;
    // 0x1fddec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fddecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddf0: 0x0  nop
    ctx->pc = 0x1fddf0u;
    // NOP
    // 0x1fddf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fddf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fddf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDDF8u;
    {
        const bool branch_taken_0x1fddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fddf8) {
            ctx->pc = 0x1FDE1Cu;
            goto label_1fde1c;
        }
    }
    ctx->pc = 0x1FDE00u;
label_1fde00:
    // 0x1fde00: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1fde00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1fde04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1fde04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fde08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fde08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fde0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fde0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde10: 0x0  nop
    ctx->pc = 0x1fde10u;
    // NOP
    // 0x1fde14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fde14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fde18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1fde18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fde1c:
    // 0x1fde1c: 0x0  nop
    ctx->pc = 0x1fde1cu;
    // NOP
    // 0x1fde20: 0x0  nop
    ctx->pc = 0x1fde20u;
    // NOP
    // 0x1fde24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fde24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1fde28: 0x0  nop
    ctx->pc = 0x1fde28u;
    // NOP
    // 0x1fde2c: 0x0  nop
    ctx->pc = 0x1fde2cu;
    // NOP
    // 0x1fde30: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fde30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1fde34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDE34u;
    {
        const bool branch_taken_0x1fde34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde34) {
            ctx->pc = 0x1FDE48u;
            goto label_1fde48;
        }
    }
    ctx->pc = 0x1FDE3Cu;
label_1fde3c:
    // 0x1fde3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fde3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde40: 0x0  nop
    ctx->pc = 0x1fde40u;
    // NOP
    // 0x1fde44: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fde44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1fde48:
    // 0x1fde48: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fde48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fde4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FDE4Cu;
    {
        const bool branch_taken_0x1fde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde4c) {
            ctx->pc = 0x1FDEB8u;
            goto label_1fdeb8;
        }
    }
    ctx->pc = 0x1FDE54u;
label_1fde54:
    // 0x1fde54: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fde54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fde58: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fde58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fde5c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDE5Cu;
    {
        const bool branch_taken_0x1fde5c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fde5c) {
            ctx->pc = 0x1FDE78u;
            goto label_1fde78;
        }
    }
    ctx->pc = 0x1FDE64u;
    // 0x1fde64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fde64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde68: 0x0  nop
    ctx->pc = 0x1fde68u;
    // NOP
    // 0x1fde6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fde6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fde70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDE70u;
    {
        const bool branch_taken_0x1fde70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fde70) {
            ctx->pc = 0x1FDE94u;
            goto label_1fde94;
        }
    }
    ctx->pc = 0x1FDE78u;
label_1fde78:
    // 0x1fde78: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1fde7c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x1fde7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fde80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1fde80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1fde84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1fde84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde88: 0x0  nop
    ctx->pc = 0x1fde88u;
    // NOP
    // 0x1fde8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fde8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fde90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fde90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fde94:
    // 0x1fde94: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fde94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fde98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fde98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fde9c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fde9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fdea0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fdea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdea4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdeac: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x1fdeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x1fdeb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fdeb4: 0x0  nop
    ctx->pc = 0x1fdeb4u;
    // NOP
label_1fdeb8:
    // 0x1fdeb8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdebc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fdec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fdec8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fdec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fdecc: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FDECCu;
    {
        const bool branch_taken_0x1fdecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdecc) {
            ctx->pc = 0x1FDE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fde54;
        }
    }
    ctx->pc = 0x1FDED4u;
    // 0x1fded4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1fded4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fded8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fded8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fdedc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fdedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fdee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fdee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdeec: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fdeecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fdef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDEF8u;
}
