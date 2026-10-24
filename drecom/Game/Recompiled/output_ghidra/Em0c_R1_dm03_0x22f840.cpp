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

// Function: Em0c_R1_dm03
// Address: 0x22f840 - 0x22ffb8
void Em0c_R1_dm03_0x22f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_dm03_0x22f840");
#endif

    switch (ctx->pc) {
        case 0x22f8ecu: goto label_22f8ec;
        case 0x22f980u: goto label_22f980;
        case 0x22f988u: goto label_22f988;
        case 0x22f9bcu: goto label_22f9bc;
        case 0x22f9e8u: goto label_22f9e8;
        case 0x22fa5cu: goto label_22fa5c;
        case 0x22fc40u: goto label_22fc40;
        case 0x22fc8cu: goto label_22fc8c;
        case 0x22fca8u: goto label_22fca8;
        case 0x22fcc0u: goto label_22fcc0;
        case 0x22fcccu: goto label_22fccc;
        case 0x22fd14u: goto label_22fd14;
        case 0x22fd38u: goto label_22fd38;
        default: break;
    }

    ctx->pc = 0x22f840u;

    // 0x22f840: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22f844: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x22f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x22f848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22f84c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f858: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x22f858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x22f85c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x22f860: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x22f864: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f868: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22f868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f86c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22f870: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x22f874: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22f878: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22f878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x22f87c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f880: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22f880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22f884: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22f884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22f888: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f88c: 0x108300ae  beq         $a0, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x22F88Cu;
    {
        const bool branch_taken_0x22f88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f88c) {
            ctx->pc = 0x22FB48u;
            goto label_22fb48;
        }
    }
    ctx->pc = 0x22F894u;
    // 0x22f894: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F894u;
    {
        const bool branch_taken_0x22f894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f894) {
            ctx->pc = 0x22F8A4u;
            goto label_22f8a4;
        }
    }
    ctx->pc = 0x22F89Cu;
    // 0x22f89c: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x22F89Cu;
    {
        const bool branch_taken_0x22f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f89c) {
            ctx->pc = 0x22FD58u;
            goto label_22fd58;
        }
    }
    ctx->pc = 0x22F8A4u;
label_22f8a4:
    // 0x22f8a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x22f8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22f8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f8b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x22f8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x22f8b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8bc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22f8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x22f8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8c8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22f8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22f8cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22f8d8: 0x24060f0c  addiu       $a2, $zero, 0xF0C
    ctx->pc = 0x22f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3852));
    // 0x22f8dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22f8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f8e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22f8e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22F8E4u;
    SET_GPR_U32(ctx, 31, 0x22F8ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22F8E4u, 0x22F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8ECu;
label_22f8ec:
    // 0x22f8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f8f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f8f8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22f8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22f8fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f8fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f900: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f904: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f908: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22f908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22f90c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f910: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f914: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f918: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22f91c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22f920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f924: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f92c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22f92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22f930: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f934: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22f938: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x22f938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f93c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x22f93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x22f940: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x22f944: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x22f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x22f948: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x22f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x22f94c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x22f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22f950: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x22f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x22f954: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x22f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x22f958: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x22f958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x22f95c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f960: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f968: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f96c: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x22f970: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f974: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f978: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F978u;
    SET_GPR_U32(ctx, 31, 0x22F980u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F978u, 0x22F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F980u;
label_22f980:
    // 0x22f980: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F980u;
    SET_GPR_U32(ctx, 31, 0x22F988u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F980u, 0x22F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f98c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f990: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F990u;
    {
        const bool branch_taken_0x22f990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f990) {
            ctx->pc = 0x22F9C4u;
            goto label_22f9c4;
        }
    }
    ctx->pc = 0x22F998u;
    // 0x22f998: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f99c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f9a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f9a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f9a8: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22f9ac: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x22f9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f9b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f9b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f9b4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F9B4u;
    SET_GPR_U32(ctx, 31, 0x22F9BCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F9B4u, 0x22F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9BCu;
label_22f9bc:
    // 0x22f9bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22F9BCu;
    {
        const bool branch_taken_0x22f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f9bc) {
            ctx->pc = 0x22F9E8u;
            goto label_22f9e8;
        }
    }
    ctx->pc = 0x22F9C4u;
label_22f9c4:
    // 0x22f9c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f9c8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22f9cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22f9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22f9d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f9d4: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x22f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x22f9d8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22f9dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f9dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f9e0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22F9E0u;
    SET_GPR_U32(ctx, 31, 0x22F9E8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22F9E0u, 0x22F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9E8u;
label_22f9e8:
    // 0x22f9e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22f9ec: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x22f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f9f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22f9f4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x22f9f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f9f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f9f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f9fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x22f9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22fa00: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22fa04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22fa0c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22fa0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22fa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22fa14: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x22fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22fa1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22fa20: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x22fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x22fa24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa28: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x22fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fa2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22fa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22fa30: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x22fa30u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22fa34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22fa38: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x22fa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x22fa3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22fa40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22fa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fa44: 0x0  nop
    ctx->pc = 0x22fa44u;
    // NOP
    // 0x22fa48: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x22fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x22fa4c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22fa50: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22fa54: 0xc040c24  jal         func_103090
    ctx->pc = 0x22FA54u;
    SET_GPR_U32(ctx, 31, 0x22FA5Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x22FA5Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x22FA5Cu) { return; }
    ctx->pc = 0x22FA5Cu;
label_22fa5c:
    // 0x22fa5c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x22fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x22fa60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa64: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x22fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22fa68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22fa6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fa74: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22fa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22fa78: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x22fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x22fa7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa80: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22fa84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22fa88: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fa8c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fa90: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x22fa90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x22fa94: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x22fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x22fa98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fa9c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x22fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22faa0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22faa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22faa4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22faa8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22faac: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x22faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x22fab0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fab4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fab8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22fabc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22fac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FAC4u;
    {
        const bool branch_taken_0x22fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fac4) {
            ctx->pc = 0x22FAE8u;
            goto label_22fae8;
        }
    }
    ctx->pc = 0x22FACCu;
    // 0x22facc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22faccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22fad0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22fad4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22fad8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22fadc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fae0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22fae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22fae4: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22fae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_22fae8:
    // 0x22fae8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22faec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22faf0: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22faf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22faf8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22fafc: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x22fb00: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22fb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22fb04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22fb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22fb08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22fb0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FB0Cu;
    {
        const bool branch_taken_0x22fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb0c) {
            ctx->pc = 0x22FB30u;
            goto label_22fb30;
        }
    }
    ctx->pc = 0x22FB14u;
    // 0x22fb14: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x22fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x22fb18: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x22fb18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22fb1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22fb20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22fb24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FB24u;
    {
        const bool branch_taken_0x22fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb24) {
            ctx->pc = 0x22FB30u;
            goto label_22fb30;
        }
    }
    ctx->pc = 0x22FB2Cu;
    // 0x22fb2c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22fb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_22fb30:
    // 0x22fb30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb34: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb38: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22fb3c: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22fb40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22fb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22fb44: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_22fb48:
    // 0x22fb48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb50: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x22fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fb54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb58: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fb60: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x22fb64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb6c: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x22fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fb70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb74: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fb7c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x22fb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x22fb80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fb88: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fb8c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fb90: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x22fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fb94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fb98: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x22fb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x22fb9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fba0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fba4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22fba8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22fba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22fbac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbb0: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fbb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22fbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22fbb8: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22fbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22fbbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fbc0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fbc4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22fbc8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22fbcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbd0: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fbd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22fbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22fbd8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x22fbdc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fbe0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fbe4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22fbe8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22fbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22fbec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22fbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22fbf0: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x22fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fbf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22fbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22fbf8: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x22fbfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fc04: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22fc08: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x22fc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x22fc0c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22FC0Cu;
    {
        const bool branch_taken_0x22fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fc0c) {
            ctx->pc = 0x22FC4Cu;
            goto label_22fc4c;
        }
    }
    ctx->pc = 0x22FC14u;
    // 0x22fc14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc18: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc20: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fc24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22fc28: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22fc2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22fc30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22fc34: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22fc38: 0xc05c848  jal         func_172120
    ctx->pc = 0x22FC38u;
    SET_GPR_U32(ctx, 31, 0x22FC40u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22FC38u, 0x22FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC40u;
label_22fc40:
    // 0x22fc40: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22fc44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22FC44u;
    {
        const bool branch_taken_0x22fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc44) {
            ctx->pc = 0x22FC90u;
            goto label_22fc90;
        }
    }
    ctx->pc = 0x22FC4Cu;
label_22fc4c:
    // 0x22fc4c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc54: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22fc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fc58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22fc5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22fc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22fc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22fc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fc64: 0x0  nop
    ctx->pc = 0x22fc64u;
    // NOP
    // 0x22fc68: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22fc68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fc6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22fc74: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22fc78: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22fc7c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22fc80: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22fc84: 0xc05c848  jal         func_172120
    ctx->pc = 0x22FC84u;
    SET_GPR_U32(ctx, 31, 0x22FC8Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22FC84u, 0x22FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FC8Cu;
label_22fc8c:
    // 0x22fc8c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_22fc90:
    // 0x22fc90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fc94: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22fc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fc98: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22fc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fc9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22fc9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22fca0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22FCA0u;
    SET_GPR_U32(ctx, 31, 0x22FCA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22FCA0u, 0x22FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCA8u;
label_22fca8:
    // 0x22fca8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22fcb0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcb4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22fcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22fcb8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22FCB8u;
    SET_GPR_U32(ctx, 31, 0x22FCC0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22FCB8u, 0x22FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCC0u;
label_22fcc0:
    // 0x22fcc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcc4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22FCC4u;
    SET_GPR_U32(ctx, 31, 0x22FCCCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22FCC4u, 0x22FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FCCCu;
label_22fccc:
    // 0x22fccc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcd0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22fcd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22fcd4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x22FCD4u;
    {
        const bool branch_taken_0x22fcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fcd4) {
            ctx->pc = 0x22FD58u;
            goto label_22fd58;
        }
    }
    ctx->pc = 0x22FCDCu;
    // 0x22fcdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fce0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fce4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x22fce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fce8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22fcec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcf0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22fcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fcf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fcf8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fcfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd00: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22fd00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fd04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22fd0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22FD0Cu;
    SET_GPR_U32(ctx, 31, 0x22FD14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22FD0Cu, 0x22FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD14u;
label_22fd14:
    // 0x22fd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22fd18: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x22fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22fd1c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x22fd20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22fd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22fd24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22fd24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22fd28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd2c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22fd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22fd30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22FD30u;
    SET_GPR_U32(ctx, 31, 0x22FD38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22FD30u, 0x22FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FD38u;
label_22fd38:
    // 0x22fd38: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22fd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22fd3c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22fd40: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x22fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22fd44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22fd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22fd48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22fd48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22fd4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd54: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22fd54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_22fd58:
    // 0x22fd58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd60: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x22fd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22fd64: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22fd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22fd68: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x22FD68u;
    {
        const bool branch_taken_0x22fd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fd68) {
            ctx->pc = 0x22FF98u;
            goto label_22ff98;
        }
    }
    ctx->pc = 0x22FD70u;
    // 0x22fd70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd78: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fd7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd80: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fd84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22fd84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fd88: 0x0  nop
    ctx->pc = 0x22fd88u;
    // NOP
    // 0x22fd8c: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22FD8Cu;
    {
        const bool branch_taken_0x22fd8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fd8c) {
            ctx->pc = 0x22FE84u;
            goto label_22fe84;
        }
    }
    ctx->pc = 0x22FD94u;
    // 0x22fd94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fd98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fd9c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fda0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fda4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fda8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22fda8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fdac: 0x0  nop
    ctx->pc = 0x22fdacu;
    // NOP
    // 0x22fdb0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FDB0u;
    {
        const bool branch_taken_0x22fdb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fdb0) {
            ctx->pc = 0x22FE0Cu;
            goto label_22fe0c;
        }
    }
    ctx->pc = 0x22FDB8u;
    // 0x22fdb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fdc0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fdc4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdc8: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fdcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fdd0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22fdd4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fddc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fde0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fde4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fde8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22fde8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fdec: 0x0  nop
    ctx->pc = 0x22fdecu;
    // NOP
    // 0x22fdf0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FDF0u;
    {
        const bool branch_taken_0x22fdf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fdf0) {
            ctx->pc = 0x22FE0Cu;
            goto label_22fe0c;
        }
    }
    ctx->pc = 0x22FDF8u;
    // 0x22fdf8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fdfc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe00: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe08: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_22fe0c:
    // 0x22fe0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe14: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22fe20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fe24: 0x0  nop
    ctx->pc = 0x22fe24u;
    // NOP
    // 0x22fe28: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FE28u;
    {
        const bool branch_taken_0x22fe28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fe28) {
            ctx->pc = 0x22FE84u;
            goto label_22fe84;
        }
    }
    ctx->pc = 0x22FE30u;
    // 0x22fe30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe38: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe40: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22fe44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22fe48: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22fe4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe54: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe5c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22fe60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fe64: 0x0  nop
    ctx->pc = 0x22fe64u;
    // NOP
    // 0x22fe68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FE68u;
    {
        const bool branch_taken_0x22fe68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fe68) {
            ctx->pc = 0x22FE84u;
            goto label_22fe84;
        }
    }
    ctx->pc = 0x22FE70u;
    // 0x22fe70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe78: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe80: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_22fe84:
    // 0x22fe84: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fe8c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fe90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fe94: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fe98: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22fe98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fe9c: 0x0  nop
    ctx->pc = 0x22fe9cu;
    // NOP
    // 0x22fea0: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x22FEA0u;
    {
        const bool branch_taken_0x22fea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fea0) {
            ctx->pc = 0x22FF98u;
            goto label_22ff98;
        }
    }
    ctx->pc = 0x22FEA8u;
    // 0x22fea8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22feac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22feacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22feb0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22feb4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22feb8: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22febc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22febcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fec0: 0x0  nop
    ctx->pc = 0x22fec0u;
    // NOP
    // 0x22fec4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FEC4u;
    {
        const bool branch_taken_0x22fec4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22fec4) {
            ctx->pc = 0x22FF20u;
            goto label_22ff20;
        }
    }
    ctx->pc = 0x22FECCu;
    // 0x22fecc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fed0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fed4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x22fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fed8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fedc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22fee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22fee4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22fee8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22feec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22feecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22fef0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22fef4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22fef8: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fefc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22fefcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ff00: 0x0  nop
    ctx->pc = 0x22ff00u;
    // NOP
    // 0x22ff04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FF04u;
    {
        const bool branch_taken_0x22ff04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff04) {
            ctx->pc = 0x22FF20u;
            goto label_22ff20;
        }
    }
    ctx->pc = 0x22FF0Cu;
    // 0x22ff0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff14: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff1c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_22ff20:
    // 0x22ff20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff28: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff30: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ff34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ff38: 0x0  nop
    ctx->pc = 0x22ff38u;
    // NOP
    // 0x22ff3c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22FF3Cu;
    {
        const bool branch_taken_0x22ff3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff3c) {
            ctx->pc = 0x22FF98u;
            goto label_22ff98;
        }
    }
    ctx->pc = 0x22FF44u;
    // 0x22ff44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff4c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff54: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22ff58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22ff5c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22ff60: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff64: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x22ff64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ff68: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x22ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ff6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff70: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ff74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ff78: 0x0  nop
    ctx->pc = 0x22ff78u;
    // NOP
    // 0x22ff7c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22FF7Cu;
    {
        const bool branch_taken_0x22ff7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ff7c) {
            ctx->pc = 0x22FF98u;
            goto label_22ff98;
        }
    }
    ctx->pc = 0x22FF84u;
    // 0x22ff84: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff88: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x22ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22ff8c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x22ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ff90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22ff94: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
label_22ff98:
    // 0x22ff98: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x22ff98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ff9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ff9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ffa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ffa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ffa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ffa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ffa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ffa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ffac: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x22ffacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22ffb0: 0x3e00008  jr          $ra
    ctx->pc = 0x22FFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FFB8u;
}
