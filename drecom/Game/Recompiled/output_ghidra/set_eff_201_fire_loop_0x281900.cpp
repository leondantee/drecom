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

// Function: set_eff_201_fire_loop
// Address: 0x281900 - 0x281ca4
void set_eff_201_fire_loop_0x281900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_201_fire_loop_0x281900");
#endif

    switch (ctx->pc) {
        case 0x281934u: goto label_281934;
        case 0x281958u: goto label_281958;
        case 0x2819e8u: goto label_2819e8;
        case 0x281aecu: goto label_281aec;
        case 0x281b7cu: goto label_281b7c;
        default: break;
    }

    ctx->pc = 0x281900u;

    // 0x281900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x281900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x281904: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x281904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x281908: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x281908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28190c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x281910: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x281910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x281914: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x281914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x281918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28191c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281928: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x281928u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28192c: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x28192Cu;
    {
        const bool branch_taken_0x28192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28192c) {
            ctx->pc = 0x281C68u;
            goto label_281c68;
        }
    }
    ctx->pc = 0x281934u;
label_281934:
    // 0x281934: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x281934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x281938: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28193c: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x28193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x281940: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281944: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x281944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x281948: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28194c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28194cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281950: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281950u;
    SET_GPR_U32(ctx, 31, 0x281958u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281950u, 0x281958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281958u;
label_281958:
    // 0x281958: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28195c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x28195cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x281960: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281964: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281968: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x281968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x28196c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x28196cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281970: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281974: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x281974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x281978: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28197c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x28197cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281980: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x281980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x281984: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281988: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281988u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x28198c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x28198cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x281990: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281994: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281998: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x281998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x28199c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x28199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819a4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2819a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819b0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2819b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819bc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2819bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819c8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2819c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819d4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2819d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819dc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2819dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2819E0u;
    SET_GPR_U32(ctx, 31, 0x2819E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2819E0u, 0x2819E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819E8u;
label_2819e8:
    // 0x2819e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819ec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2819ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2819f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819f4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2819f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2819f8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2819f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2819fc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2819fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x281a00: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281A00u;
    {
        const bool branch_taken_0x281a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281a00) {
            ctx->pc = 0x281A14u;
            goto label_281a14;
        }
    }
    ctx->pc = 0x281A08u;
    // 0x281a08: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x281a08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281A0Cu;
    {
        const bool branch_taken_0x281a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281a0c) {
            ctx->pc = 0x281A30u;
            goto label_281a30;
        }
    }
    ctx->pc = 0x281A14u;
label_281a14:
    // 0x281a14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281a18: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x281a1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281a20: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x281a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x281a24: 0x24540118  addiu       $s4, $v0, 0x118
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x281a28: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x281a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x281a2c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x281a2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_281a30:
    // 0x281a30: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x281a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x281a34: 0x2455a610  addiu       $s5, $v0, -0x59F0
    ctx->pc = 0x281a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x281a38: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x281a3c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x281a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x281a40: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x281a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x281a44: 0x12020020  beq         $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x281A44u;
    {
        const bool branch_taken_0x281a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x281a44) {
            ctx->pc = 0x281AC8u;
            goto label_281ac8;
        }
    }
    ctx->pc = 0x281A4Cu;
    // 0x281a4c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a54: 0x0  nop
    ctx->pc = 0x281a54u;
    // NOP
    // 0x281a58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x281a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x281a5c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a64: 0x0  nop
    ctx->pc = 0x281a64u;
    // NOP
    // 0x281a68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x281a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x281a6c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x281a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x281a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a74: 0x0  nop
    ctx->pc = 0x281a74u;
    // NOP
    // 0x281a78: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x281a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x281a7c: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x281a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x281a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a84: 0x0  nop
    ctx->pc = 0x281a84u;
    // NOP
    // 0x281a88: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x281a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x281a8c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x281a90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x281a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x281a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281a98: 0x0  nop
    ctx->pc = 0x281a98u;
    // NOP
    // 0x281a9c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x281a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x281aa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281aa8: 0x0  nop
    ctx->pc = 0x281aa8u;
    // NOP
    // 0x281aac: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x281aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x281ab0: 0x3c024487  lui         $v0, 0x4487
    ctx->pc = 0x281ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17543 << 16));
    // 0x281ab4: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x281ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x281ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281abc: 0x0  nop
    ctx->pc = 0x281abcu;
    // NOP
    // 0x281ac0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x281ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x281ac4: 0x0  nop
    ctx->pc = 0x281ac4u;
    // NOP
label_281ac8:
    // 0x281ac8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x281ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x281acc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x281ad0: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x281ad4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281ad8: 0x24042109  addiu       $a0, $zero, 0x2109
    ctx->pc = 0x281ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8457));
    // 0x281adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281ae0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x281ae0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281ae4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281AE4u;
    SET_GPR_U32(ctx, 31, 0x281AECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281AE4u, 0x281AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281AECu;
label_281aec:
    // 0x281aec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281af0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x281af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x281af4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281af8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281af8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281afc: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x281afcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b08: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x281b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b10: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b14: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x281b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b1c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b20: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x281b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b28: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b2c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x281b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b30: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b34: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b38: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x281b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b40: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b44: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x281b44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b4c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b50: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x281b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b54: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b58: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b5c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x281b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b64: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b68: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x281b68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x281b6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b70: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x281b70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x281b74: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x281B74u;
    SET_GPR_U32(ctx, 31, 0x281B7Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x281B74u, 0x281B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B7Cu;
label_281b7c:
    // 0x281b7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b80: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x281b80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x281b84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281b88: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x281b88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x281b8c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281b90: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281b94: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281B94u;
    {
        const bool branch_taken_0x281b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x281b94) {
            ctx->pc = 0x281BA8u;
            goto label_281ba8;
        }
    }
    ctx->pc = 0x281B9Cu;
    // 0x281b9c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x281b9cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x281BA0u;
    {
        const bool branch_taken_0x281ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ba0) {
            ctx->pc = 0x281BC8u;
            goto label_281bc8;
        }
    }
    ctx->pc = 0x281BA8u;
label_281ba8:
    // 0x281ba8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281bac: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x281bacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x281bb0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281bb4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x281bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x281bb8: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x281bb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x281bbc: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x281bbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x281bc0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x281bc0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x281bc4: 0x0  nop
    ctx->pc = 0x281bc4u;
    // NOP
label_281bc8:
    // 0x281bc8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x281bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x281bcc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x281bccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x281bd0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x281bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x281bd4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281bd8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281bdc: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x281BDCu;
    {
        const bool branch_taken_0x281bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x281bdc) {
            ctx->pc = 0x281C60u;
            goto label_281c60;
        }
    }
    ctx->pc = 0x281BE4u;
    // 0x281be4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x281be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x281be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281bec: 0x0  nop
    ctx->pc = 0x281becu;
    // NOP
    // 0x281bf0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x281bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x281bf4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x281bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x281bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281bfc: 0x0  nop
    ctx->pc = 0x281bfcu;
    // NOP
    // 0x281c00: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x281c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x281c04: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x281c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x281c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c0c: 0x0  nop
    ctx->pc = 0x281c0cu;
    // NOP
    // 0x281c10: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x281c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x281c14: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x281c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c1c: 0x0  nop
    ctx->pc = 0x281c1cu;
    // NOP
    // 0x281c20: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x281c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x281c24: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x281c28: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x281c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x281c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c30: 0x0  nop
    ctx->pc = 0x281c30u;
    // NOP
    // 0x281c34: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x281c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x281c38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281c3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c40: 0x0  nop
    ctx->pc = 0x281c40u;
    // NOP
    // 0x281c44: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x281c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x281c48: 0x3c03442b  lui         $v1, 0x442B
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17451 << 16));
    // 0x281c4c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x281c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c54: 0x0  nop
    ctx->pc = 0x281c54u;
    // NOP
    // 0x281c58: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x281c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x281c5c: 0x0  nop
    ctx->pc = 0x281c5cu;
    // NOP
label_281c60:
    // 0x281c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x281c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x281c64: 0x0  nop
    ctx->pc = 0x281c64u;
    // NOP
label_281c68:
    // 0x281c68: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x281c68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x281c6c: 0x1460ff31  bnez        $v1, . + 4 + (-0xCF << 2)
    ctx->pc = 0x281C6Cu;
    {
        const bool branch_taken_0x281c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x281c6c) {
            ctx->pc = 0x281934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281934;
        }
    }
    ctx->pc = 0x281C74u;
    // 0x281c74: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x281c74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x281c78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x281c78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281c7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x281c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281c80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281c84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x281c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281c88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281c8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281c98: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x281c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x281C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281CA4u;
}
