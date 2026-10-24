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

// Function: Em10_R1_die_blow_front
// Address: 0x133970 - 0x133d98
void Em10_R1_die_blow_front_0x133970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_die_blow_front_0x133970");
#endif

    switch (ctx->pc) {
        case 0x133a08u: goto label_133a08;
        case 0x133a70u: goto label_133a70;
        case 0x133a7cu: goto label_133a7c;
        case 0x133ab8u: goto label_133ab8;
        case 0x133ac4u: goto label_133ac4;
        case 0x133ad4u: goto label_133ad4;
        case 0x133aecu: goto label_133aec;
        case 0x133b60u: goto label_133b60;
        case 0x133b94u: goto label_133b94;
        case 0x133bc8u: goto label_133bc8;
        case 0x133be0u: goto label_133be0;
        case 0x133c00u: goto label_133c00;
        case 0x133c0cu: goto label_133c0c;
        case 0x133c80u: goto label_133c80;
        case 0x133c90u: goto label_133c90;
        case 0x133ca0u: goto label_133ca0;
        case 0x133cb0u: goto label_133cb0;
        case 0x133cc0u: goto label_133cc0;
        case 0x133cd0u: goto label_133cd0;
        case 0x133ce0u: goto label_133ce0;
        case 0x133cf0u: goto label_133cf0;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d28u: goto label_133d28;
        default: break;
    }

    ctx->pc = 0x133970u;

    // 0x133970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133974: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x133974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x133978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13397c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133980: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x133980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x133984: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133988: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x133988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x13398c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13398cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133990: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x133990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x133994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x133998: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x133998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13399c: 0x108300db  beq         $a0, $v1, . + 4 + (0xDB << 2)
    ctx->pc = 0x13399Cu;
    {
        const bool branch_taken_0x13399c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13399c) {
            ctx->pc = 0x133D0Cu;
            goto label_133d0c;
        }
    }
    ctx->pc = 0x1339A4u;
    // 0x1339a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1339a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1339a8: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1339A8u;
    {
        const bool branch_taken_0x1339a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1339a8) {
            ctx->pc = 0x133BF0u;
            goto label_133bf0;
        }
    }
    ctx->pc = 0x1339B0u;
    // 0x1339b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1339b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1339b4: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1339B4u;
    {
        const bool branch_taken_0x1339b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1339b4) {
            ctx->pc = 0x133B88u;
            goto label_133b88;
        }
    }
    ctx->pc = 0x1339BCu;
    // 0x1339bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1339c0: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1339C0u;
    {
        const bool branch_taken_0x1339c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1339c0) {
            ctx->pc = 0x133AA8u;
            goto label_133aa8;
        }
    }
    ctx->pc = 0x1339C8u;
    // 0x1339c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1339C8u;
    {
        const bool branch_taken_0x1339c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339c8) {
            ctx->pc = 0x1339D8u;
            goto label_1339d8;
        }
    }
    ctx->pc = 0x1339D0u;
    // 0x1339d0: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x1339D0u;
    {
        const bool branch_taken_0x1339d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339d0) {
            ctx->pc = 0x133D80u;
            goto label_133d80;
        }
    }
    ctx->pc = 0x1339D8u;
label_1339d8:
    // 0x1339d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1339d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339dc: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x1339dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1339e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339e4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1339e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1339e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1339ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1339f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1339f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1339f4: 0x2406051c  addiu       $a2, $zero, 0x51C
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x1339f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1339f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1339fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1339fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133a00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133A00u;
    SET_GPR_U32(ctx, 31, 0x133A08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133A00u, 0x133A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A08u;
label_133a08:
    // 0x133a08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x133a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133a0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a10: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x133a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x133a14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133a1c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x133a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x133a20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133a24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133a2c: 0xa202009b  sb          $v0, 0x9B($s0)
    ctx->pc = 0x133a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x133a30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a34: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x133a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x133a38: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x133a3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x133a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x133a40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x133a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x133a44: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x133a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x133a48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a4c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x133a50: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x133a54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x133a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x133a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x133a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133a5c: 0x2404050a  addiu       $a0, $zero, 0x50A
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x133a60: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x133a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x133a64: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x133a64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133a68: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x133A68u;
    SET_GPR_U32(ctx, 31, 0x133A70u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x133A68u, 0x133A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A70u;
label_133a70:
    // 0x133a70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a74: 0xc04da3c  jal         func_1368F0
    ctx->pc = 0x133A74u;
    SET_GPR_U32(ctx, 31, 0x133A7Cu);
    ctx->pc = 0x1368F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F0u, 0x133A74u, 0x133A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A7Cu;
label_133a7c:
    // 0x133a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133a80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a84: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133a88: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x133a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x133a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133a90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a94: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x133a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x133a98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133a9c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133aa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133aa4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133aa8:
    // 0x133aa8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133aac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133aacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133ab0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133AB0u;
    SET_GPR_U32(ctx, 31, 0x133AB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133AB0u, 0x133AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AB8u;
label_133ab8:
    // 0x133ab8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133abc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x133ABCu;
    SET_GPR_U32(ctx, 31, 0x133AC4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x133ABCu, 0x133AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AC4u;
label_133ac4:
    // 0x133ac4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ac8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x133ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133acc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x133ACCu;
    SET_GPR_U32(ctx, 31, 0x133AD4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x133ACCu, 0x133AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AD4u;
label_133ad4:
    // 0x133ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ad8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133adc: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x133adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x133ae0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x133ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x133ae4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x133AE4u;
    SET_GPR_U32(ctx, 31, 0x133AECu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x133AE4u, 0x133AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133AECu;
label_133aec:
    // 0x133aec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x133aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x133af0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133af4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x133af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133af8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133afc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x133afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x133b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x133b04: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133b08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b0c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x133b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133b10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b14: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x133b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x133b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x133b1c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x133b20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b24: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x133b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133b28: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x133b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x133b30: 0x0  nop
    ctx->pc = 0x133b30u;
    // NOP
    // 0x133b34: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x133B34u;
    {
        const bool branch_taken_0x133b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x133b34) {
            ctx->pc = 0x133B54u;
            goto label_133b54;
        }
    }
    ctx->pc = 0x133B3Cu;
    // 0x133b3c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x133b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x133b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b50: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x133b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_133b54:
    // 0x133b54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133B58u;
    SET_GPR_U32(ctx, 31, 0x133B60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133B58u, 0x133B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B60u;
label_133b60:
    // 0x133b60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b64: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x133b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x133b68: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x133B68u;
    {
        const bool branch_taken_0x133b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b68) {
            ctx->pc = 0x133D80u;
            goto label_133d80;
        }
    }
    ctx->pc = 0x133B70u;
    // 0x133b70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b74: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133b7c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x133b80: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x133B80u;
    {
        const bool branch_taken_0x133b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b80) {
            ctx->pc = 0x133D80u;
            goto label_133d80;
        }
    }
    ctx->pc = 0x133B88u;
label_133b88:
    // 0x133b88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b8c: 0xc04d07c  jal         func_1341F0
    ctx->pc = 0x133B8Cu;
    SET_GPR_U32(ctx, 31, 0x133B94u);
    ctx->pc = 0x1341F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1341F0u, 0x133B8Cu, 0x133B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B94u;
label_133b94:
    // 0x133b94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133b98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133b9c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x133b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x133ba0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x133ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x133ba4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x133ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x133ba8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bb0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x133bb4: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x133bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x133bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x133bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133bbc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x133bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x133bc0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x133BC0u;
    SET_GPR_U32(ctx, 31, 0x133BC8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x133BC0u, 0x133BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BC8u;
label_133bc8:
    // 0x133bc8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x133bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x133bcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bd0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x133bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133bd4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bd8: 0xc04d994  jal         func_136650
    ctx->pc = 0x133BD8u;
    SET_GPR_U32(ctx, 31, 0x133BE0u);
    ctx->pc = 0x136650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136650u, 0x133BD8u, 0x133BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BE0u;
label_133be0:
    // 0x133be0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133be4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133bec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133bf0:
    // 0x133bf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133bf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133bf8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133BF8u;
    SET_GPR_U32(ctx, 31, 0x133C00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133BF8u, 0x133C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C00u;
label_133c00:
    // 0x133c00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c04: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133C04u;
    SET_GPR_U32(ctx, 31, 0x133C0Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133C04u, 0x133C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C0Cu;
label_133c0c:
    // 0x133c0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c10: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x133c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x133c14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x133C14u;
    {
        const bool branch_taken_0x133c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c14) {
            ctx->pc = 0x133C34u;
            goto label_133c34;
        }
    }
    ctx->pc = 0x133C1Cu;
    // 0x133c1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c20: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133c28: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x133c28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x133c2c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x133C2Cu;
    {
        const bool branch_taken_0x133c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c2c) {
            ctx->pc = 0x133D0Cu;
            goto label_133d0c;
        }
    }
    ctx->pc = 0x133C34u;
label_133c34:
    // 0x133c34: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133c38: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c44: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x133c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x133c48: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133c4c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133c50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c58: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x133c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x133c5c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x133c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x133c60: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x133c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x133c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133c68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c6c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x133c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x133c70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c74: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x133c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x133c78: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133C78u;
    SET_GPR_U32(ctx, 31, 0x133C80u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133C78u, 0x133C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C80u;
label_133c80:
    // 0x133c80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c84: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x133c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x133c88: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133C88u;
    SET_GPR_U32(ctx, 31, 0x133C90u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133C88u, 0x133C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C90u;
label_133c90:
    // 0x133c90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x133c98: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133C98u;
    SET_GPR_U32(ctx, 31, 0x133CA0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133C98u, 0x133CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CA0u;
label_133ca0:
    // 0x133ca0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ca4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x133ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x133ca8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CA8u;
    SET_GPR_U32(ctx, 31, 0x133CB0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CA8u, 0x133CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CB0u;
label_133cb0:
    // 0x133cb0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cb4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x133cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x133cb8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CB8u;
    SET_GPR_U32(ctx, 31, 0x133CC0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CB8u, 0x133CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CC0u;
label_133cc0:
    // 0x133cc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cc4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x133cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x133cc8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CC8u;
    SET_GPR_U32(ctx, 31, 0x133CD0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CC8u, 0x133CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CD0u;
label_133cd0:
    // 0x133cd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cd4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x133cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x133cd8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CD8u;
    SET_GPR_U32(ctx, 31, 0x133CE0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CD8u, 0x133CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CE0u;
label_133ce0:
    // 0x133ce0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133ce4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x133ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x133ce8: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x133CE8u;
    SET_GPR_U32(ctx, 31, 0x133CF0u);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x133CE8u, 0x133CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CF0u;
label_133cf0:
    // 0x133cf0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x133cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x133cf4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133cf8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x133cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133cfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x133d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x133d04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133d08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x133d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_133d0c:
    // 0x133d0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133d14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133D14u;
    SET_GPR_U32(ctx, 31, 0x133D1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133D14u, 0x133D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D1Cu;
label_133d1c:
    // 0x133d1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d20: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133D20u;
    SET_GPR_U32(ctx, 31, 0x133D28u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133D20u, 0x133D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D28u;
label_133d28:
    // 0x133d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d2c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x133d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133d30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133D30u;
    {
        const bool branch_taken_0x133d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d30) {
            ctx->pc = 0x133D50u;
            goto label_133d50;
        }
    }
    ctx->pc = 0x133D38u;
    // 0x133d38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d3c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x133d3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x133d40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x133d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133d44: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x133d44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133d48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x133D48u;
    {
        const bool branch_taken_0x133d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d48) {
            ctx->pc = 0x133D80u;
            goto label_133d80;
        }
    }
    ctx->pc = 0x133D50u;
label_133d50:
    // 0x133d50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d54: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133d58: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x133d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x133d5c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133d60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d64: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133d68: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x133d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x133d6c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x133d70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133d74: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x133d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133d78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x133d7c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x133d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_133d80:
    // 0x133d80: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x133d80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133d8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x133d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x133d90: 0x3e00008  jr          $ra
    ctx->pc = 0x133D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133D98u;
}
