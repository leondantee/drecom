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

// Function: srp_pos_initial
// Address: 0x328780 - 0x328a48
void srp_pos_initial_0x328780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_pos_initial_0x328780");
#endif

    switch (ctx->pc) {
        case 0x3287c8u: goto label_3287c8;
        case 0x328818u: goto label_328818;
        case 0x328834u: goto label_328834;
        case 0x32885cu: goto label_32885c;
        case 0x3288acu: goto label_3288ac;
        case 0x3289b4u: goto label_3289b4;
        default: break;
    }

    ctx->pc = 0x328780u;

    // 0x328780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x328780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x328784: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x328784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x328788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32878c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x32878cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x328790: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x328790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328794: 0x90430347  lbu         $v1, 0x347($v0)
    ctx->pc = 0x328794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 839)));
    // 0x328798: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x328798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32879c: 0xa0430348  sb          $v1, 0x348($v0)
    ctx->pc = 0x32879cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x3287a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3287a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3287a4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3287a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3287a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3287a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3287ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3287acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3287b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3287b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3287b4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3287b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3287b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3287b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3287bc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x3287bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3287c0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3287C0u;
    SET_GPR_U32(ctx, 31, 0x3287C8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3287C0u, 0x3287C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287C8u;
label_3287c8:
    // 0x3287c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3287c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3287cc: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x3287ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x3287d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3287D0u;
    {
        const bool branch_taken_0x3287d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3287d0) {
            ctx->pc = 0x3287ECu;
            goto label_3287ec;
        }
    }
    ctx->pc = 0x3287D8u;
    // 0x3287d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3287d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3287dc: 0x0  nop
    ctx->pc = 0x3287dcu;
    // NOP
    // 0x3287e0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3287e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3287e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3287E4u;
    {
        const bool branch_taken_0x3287e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3287e4) {
            ctx->pc = 0x328808u;
            goto label_328808;
        }
    }
    ctx->pc = 0x3287ECu;
label_3287ec:
    // 0x3287ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3287ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3287f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3287f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3287f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3287f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3287f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3287f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3287fc: 0x0  nop
    ctx->pc = 0x3287fcu;
    // NOP
    // 0x328800: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328804: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x328804u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_328808:
    // 0x328808: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x328808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32880c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32880cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328810: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x328810u;
    SET_GPR_U32(ctx, 31, 0x328818u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x328818u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x328818u) { return; }
    ctx->pc = 0x328818u;
label_328818:
    // 0x328818: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x328818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32881c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32881cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328820: 0x0  nop
    ctx->pc = 0x328820u;
    // NOP
    // 0x328824: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x328824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x328828: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x328828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32882c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32882Cu;
    {
        const bool branch_taken_0x32882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32882c) {
            ctx->pc = 0x328860u;
            goto label_328860;
        }
    }
    ctx->pc = 0x328834u;
label_328834:
    // 0x328834: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x328838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32883c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x32883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328840: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x328840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x328844: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x328848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32884c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x32884cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328850: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x328850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328854: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x328854u;
    SET_GPR_U32(ctx, 31, 0x32885Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x328854u, 0x32885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32885Cu;
label_32885c:
    // 0x32885c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32885cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_328860:
    // 0x328860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328864: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328868: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32886c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x32886cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328870: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x328870u;
    {
        const bool branch_taken_0x328870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328870) {
            ctx->pc = 0x328834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328834;
        }
    }
    ctx->pc = 0x328878u;
    // 0x328878: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32887c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x32887cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x328880: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x328880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328888: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x328888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x32888c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328890: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x328890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x328894: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x328894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32889c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x32889cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x3288a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3288a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3288a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3288A4u;
    {
        const bool branch_taken_0x3288a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3288a4) {
            ctx->pc = 0x3288E8u;
            goto label_3288e8;
        }
    }
    ctx->pc = 0x3288ACu;
label_3288ac:
    // 0x3288ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288b0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x3288b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x3288b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3288b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3288b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3288b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3288bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3288bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3288c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3288c8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3288c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3288cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3288ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3288d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3288d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3288d8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x3288d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x3288dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3288dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3288e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3288e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3288e4: 0x0  nop
    ctx->pc = 0x3288e4u;
    // NOP
label_3288e8:
    // 0x3288e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3288e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3288ec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3288ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3288f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3288f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3288f4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3288f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3288f8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3288F8u;
    {
        const bool branch_taken_0x3288f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3288f8) {
            ctx->pc = 0x3288ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3288ac;
        }
    }
    ctx->pc = 0x328900u;
    // 0x328900: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328904: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x328904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328908: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x328908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x32890c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x32890cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x328910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x328910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328914: 0x0  nop
    ctx->pc = 0x328914u;
    // NOP
    // 0x328918: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x328918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32891c: 0x0  nop
    ctx->pc = 0x32891cu;
    // NOP
    // 0x328920: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x328920u;
    {
        const bool branch_taken_0x328920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x328920) {
            ctx->pc = 0x32899Cu;
            goto label_32899c;
        }
    }
    ctx->pc = 0x328928u;
    // 0x328928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32892c: 0xc461033c  lwc1        $f1, 0x33C($v1)
    ctx->pc = 0x32892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x328930: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328934: 0xc4600338  lwc1        $f0, 0x338($v1)
    ctx->pc = 0x328934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328938: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x328938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32893c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328940: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328944: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x328944u;
    {
        const bool branch_taken_0x328944 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x328944) {
            ctx->pc = 0x328960u;
            goto label_328960;
        }
    }
    ctx->pc = 0x32894Cu;
    // 0x32894c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32894cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328950: 0x0  nop
    ctx->pc = 0x328950u;
    // NOP
    // 0x328954: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328958: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328958u;
    {
        const bool branch_taken_0x328958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328958) {
            ctx->pc = 0x32897Cu;
            goto label_32897c;
        }
    }
    ctx->pc = 0x328960u;
label_328960:
    // 0x328960: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x328960u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x328964: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x328964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x328968: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x328968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32896c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32896cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328970: 0x0  nop
    ctx->pc = 0x328970u;
    // NOP
    // 0x328974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x328974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x328978: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x328978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_32897c:
    // 0x32897c: 0x0  nop
    ctx->pc = 0x32897cu;
    // NOP
    // 0x328980: 0x0  nop
    ctx->pc = 0x328980u;
    // NOP
    // 0x328984: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x328984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x328988: 0x0  nop
    ctx->pc = 0x328988u;
    // NOP
    // 0x32898c: 0x0  nop
    ctx->pc = 0x32898cu;
    // NOP
    // 0x328990: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x328990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x328994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x328994u;
    {
        const bool branch_taken_0x328994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328994) {
            ctx->pc = 0x3289A8u;
            goto label_3289a8;
        }
    }
    ctx->pc = 0x32899Cu;
label_32899c:
    // 0x32899c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32899cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289a0: 0x0  nop
    ctx->pc = 0x3289a0u;
    // NOP
    // 0x3289a4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3289a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3289a8:
    // 0x3289a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3289a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3289ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3289ACu;
    {
        const bool branch_taken_0x3289ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289ac) {
            ctx->pc = 0x328A18u;
            goto label_328a18;
        }
    }
    ctx->pc = 0x3289B4u;
label_3289b4:
    // 0x3289b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3289b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3289b8: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x3289b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3289bc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3289BCu;
    {
        const bool branch_taken_0x3289bc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3289bc) {
            ctx->pc = 0x3289D8u;
            goto label_3289d8;
        }
    }
    ctx->pc = 0x3289C4u;
    // 0x3289c4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3289c4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289c8: 0x0  nop
    ctx->pc = 0x3289c8u;
    // NOP
    // 0x3289cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3289ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3289d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3289D0u;
    {
        const bool branch_taken_0x3289d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289d0) {
            ctx->pc = 0x3289F4u;
            goto label_3289f4;
        }
    }
    ctx->pc = 0x3289D8u;
label_3289d8:
    // 0x3289d8: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x3289d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3289dc: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3289dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3289e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3289e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3289e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3289e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289e8: 0x0  nop
    ctx->pc = 0x3289e8u;
    // NOP
    // 0x3289ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3289ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3289f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3289f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3289f4:
    // 0x3289f4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x3289f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3289f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3289f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3289fc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3289fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x328a00: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x328a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x328a04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328a0c: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x328a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x328a10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x328a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x328a14: 0x0  nop
    ctx->pc = 0x328a14u;
    // NOP
label_328a18:
    // 0x328a18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x328a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x328a1c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328a20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328a24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x328a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328a28: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328a28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328a2c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x328A2Cu;
    {
        const bool branch_taken_0x328a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328a2c) {
            ctx->pc = 0x3289B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3289b4;
        }
    }
    ctx->pc = 0x328A34u;
    // 0x328a34: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x328a34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x328a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328a3c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x328a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x328a40: 0x3e00008  jr          $ra
    ctx->pc = 0x328A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328A48u;
}
