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

// Function: set_eff_203_fire_loop
// Address: 0x268880 - 0x268bfc
void set_eff_203_fire_loop_0x268880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_203_fire_loop_0x268880");
#endif

    switch (ctx->pc) {
        case 0x2688d0u: goto label_2688d0;
        case 0x268960u: goto label_268960;
        case 0x268a64u: goto label_268a64;
        case 0x268af4u: goto label_268af4;
        default: break;
    }

    ctx->pc = 0x268880u;

    // 0x268880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x268880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x268884: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x268884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x268888: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x268888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26888c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26888cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x268890: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x268890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x268894: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x268894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x268898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x268898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26889c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26889cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2688a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2688a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2688a4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2688a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2688a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2688a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2688ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2688acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2688b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2688b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2688b4: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x2688b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x2688b8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2688b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2688bc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2688bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2688c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2688c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2688c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2688c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2688c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2688C8u;
    SET_GPR_U32(ctx, 31, 0x2688D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2688C8u, 0x2688D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688D0u;
label_2688d0:
    // 0x2688d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2688d4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2688d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2688d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2688d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2688dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2688dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2688e0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2688e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2688e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2688e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2688e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2688e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2688ec: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2688ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2688f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2688f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2688f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2688f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2688f8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2688f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2688fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2688fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268900: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268904: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x268904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x268908: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26890c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26890cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268910: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x268910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x268914: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268918: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26891c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x26891cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x268920: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268924: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268928: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x268928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x26892c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268930: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268934: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x268934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x268938: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26893c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x26893cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268940: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x268940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x268944: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268948: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x26894c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x26894cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x268950: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268954: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x268954u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x268958: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x268958u;
    SET_GPR_U32(ctx, 31, 0x268960u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x268958u, 0x268960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268960u;
label_268960:
    // 0x268960: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268964: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x268964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x268968: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x26896c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x26896cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268970: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x268970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x268974: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x268974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x268978: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268978u;
    {
        const bool branch_taken_0x268978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268978) {
            ctx->pc = 0x26898Cu;
            goto label_26898c;
        }
    }
    ctx->pc = 0x268980u;
    // 0x268980: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x268980u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268984u;
    {
        const bool branch_taken_0x268984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268984) {
            ctx->pc = 0x2689A8u;
            goto label_2689a8;
        }
    }
    ctx->pc = 0x26898Cu;
label_26898c:
    // 0x26898c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x26898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268990: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x268990u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x268994: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268998: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x268998u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x26899c: 0x24530118  addiu       $s3, $v0, 0x118
    ctx->pc = 0x26899cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x2689a0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x2689a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2689a4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2689a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2689a8:
    // 0x2689a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2689a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2689ac: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x2689acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2689b0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2689b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2689b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2689b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2689b8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2689b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2689bc: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2689BCu;
    {
        const bool branch_taken_0x2689bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2689bc) {
            ctx->pc = 0x268A3Cu;
            goto label_268a3c;
        }
    }
    ctx->pc = 0x2689C4u;
    // 0x2689c4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2689c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689cc: 0x0  nop
    ctx->pc = 0x2689ccu;
    // NOP
    // 0x2689d0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2689d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2689d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2689d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2689d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689dc: 0x0  nop
    ctx->pc = 0x2689dcu;
    // NOP
    // 0x2689e0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2689e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2689e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2689e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2689e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689ec: 0x0  nop
    ctx->pc = 0x2689ecu;
    // NOP
    // 0x2689f0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2689f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2689f4: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x2689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x2689f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689fc: 0x0  nop
    ctx->pc = 0x2689fcu;
    // NOP
    // 0x268a00: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x268a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x268a04: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x268a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x268a08: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x268a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x268a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268a10: 0x0  nop
    ctx->pc = 0x268a10u;
    // NOP
    // 0x268a14: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x268a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x268a18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268a20: 0x0  nop
    ctx->pc = 0x268a20u;
    // NOP
    // 0x268a24: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x268a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x268a28: 0x3c024487  lui         $v0, 0x4487
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17543 << 16));
    // 0x268a2c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x268a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x268a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268a34: 0x0  nop
    ctx->pc = 0x268a34u;
    // NOP
    // 0x268a38: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x268a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_268a3c:
    // 0x268a3c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x268a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x268a40: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268a44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x268a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x268a48: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x268a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x268a4c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x268a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268a50: 0x24042109  addiu       $a0, $zero, 0x2109
    ctx->pc = 0x268a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8457));
    // 0x268a54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x268a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268a58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x268a58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268a5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x268A5Cu;
    SET_GPR_U32(ctx, 31, 0x268A64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x268A5Cu, 0x268A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A64u;
label_268a64:
    // 0x268a64: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a68: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x268a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x268a6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a70: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a74: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x268a74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a78: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a7c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a80: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x268a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a88: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a8c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x268a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a90: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268a94: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268a94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268a98: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x268a98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x268a9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268aa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268aa4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x268aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x268aa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268aac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ab0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x268ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ab4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ab8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268abc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x268abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ac0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ac4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ac8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x268ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x268acc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ad0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ad4: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x268ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ad8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268adc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x268adcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x268ae0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x268ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x268ae4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268ae8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x268ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x268aec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x268AECu;
    SET_GPR_U32(ctx, 31, 0x268AF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x268AECu, 0x268AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AF4u;
label_268af4:
    // 0x268af4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268af8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x268af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x268afc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268b00: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x268b00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x268b04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268b08: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268b0c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x268B0Cu;
    {
        const bool branch_taken_0x268b0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x268b0c) {
            ctx->pc = 0x268B20u;
            goto label_268b20;
        }
    }
    ctx->pc = 0x268B14u;
    // 0x268b14: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x268b14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x268b18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268B18u;
    {
        const bool branch_taken_0x268b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268b18) {
            ctx->pc = 0x268B3Cu;
            goto label_268b3c;
        }
    }
    ctx->pc = 0x268B20u;
label_268b20:
    // 0x268b20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268b24: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x268b24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268b28: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268b2c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x268b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268b30: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x268b30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x268b34: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x268b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x268b38: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x268b38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_268b3c:
    // 0x268b3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x268b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x268b40: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x268b40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x268b44: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x268b44u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x268b48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x268b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x268b4c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x268b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x268b50: 0x1203001f  beq         $s0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x268B50u;
    {
        const bool branch_taken_0x268b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x268b50) {
            ctx->pc = 0x268BD0u;
            goto label_268bd0;
        }
    }
    ctx->pc = 0x268B58u;
    // 0x268b58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x268b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x268b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b60: 0x0  nop
    ctx->pc = 0x268b60u;
    // NOP
    // 0x268b64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x268b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x268b68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x268b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x268b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b70: 0x0  nop
    ctx->pc = 0x268b70u;
    // NOP
    // 0x268b74: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x268b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x268b78: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x268b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x268b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b80: 0x0  nop
    ctx->pc = 0x268b80u;
    // NOP
    // 0x268b84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x268b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x268b88: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x268b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x268b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268b90: 0x0  nop
    ctx->pc = 0x268b90u;
    // NOP
    // 0x268b94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x268b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x268b98: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x268b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x268b9c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x268b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x268ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268ba4: 0x0  nop
    ctx->pc = 0x268ba4u;
    // NOP
    // 0x268ba8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x268ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x268bac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x268bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x268bb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268bb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268bb4: 0x0  nop
    ctx->pc = 0x268bb4u;
    // NOP
    // 0x268bb8: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x268bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x268bbc: 0x3c03442b  lui         $v1, 0x442B
    ctx->pc = 0x268bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17451 << 16));
    // 0x268bc0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x268bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x268bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x268bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268bc8: 0x0  nop
    ctx->pc = 0x268bc8u;
    // NOP
    // 0x268bcc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x268bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_268bd0:
    // 0x268bd0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x268bd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268bd4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x268bd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268bd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x268bd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268bdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x268bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268be0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x268be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268bf0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x268bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x268bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x268BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268BFCu;
}
