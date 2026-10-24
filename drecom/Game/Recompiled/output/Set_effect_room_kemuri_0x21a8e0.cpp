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

// Function: Set_effect_room_kemuri
// Address: 0x21a8e0 - 0x21ac48
void Set_effect_room_kemuri_0x21a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_room_kemuri_0x21a8e0");
#endif

    switch (ctx->pc) {
        case 0x21a978u: goto label_21a978;
        case 0x21aa10u: goto label_21aa10;
        case 0x21aa84u: goto label_21aa84;
        case 0x21ab1cu: goto label_21ab1c;
        default: break;
    }

    ctx->pc = 0x21a8e0u;

    // 0x21a8e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21a8e4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x21a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x21a8e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21a8ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21a8f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21a8f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21a8f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21a8fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a908: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x21a908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x21a90c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x21a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x21a910: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x21a910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
    // 0x21a914: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x21a914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x21a918: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x21a918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
    // 0x21a91c: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x21a91cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x21a920: 0xe7ad00c8  swc1        $f13, 0xC8($sp)
    ctx->pc = 0x21a920u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x21a924: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x21a924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x21a928: 0x2451fce0  addiu       $s1, $v0, -0x320
    ctx->pc = 0x21a928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x21a92c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21a930: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x21A930u;
    {
        const bool branch_taken_0x21a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a930) {
            ctx->pc = 0x21AA6Cu;
            goto label_21aa6c;
        }
    }
    ctx->pc = 0x21A938u;
    // 0x21a938: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x21a938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21a93c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21a940: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a944: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a94c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a950: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a954: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a958: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a95c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a960: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21a960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a964: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21a968: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a96c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21a970: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A970u;
    SET_GPR_U32(ctx, 31, 0x21A978u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A970u, 0x21A978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A978u;
label_21a978:
    // 0x21a978: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a97c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a97cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a980: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a984: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a988: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a98c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a990: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a994: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a998: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a99c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9a4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a9a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a9ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9b4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x21a9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a9b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9c0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a9c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9cc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a9d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9d8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a9dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9e4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a9e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9f0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a9f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a9f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a9fc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aa00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa04: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aa08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21AA08u;
    SET_GPR_U32(ctx, 31, 0x21AA10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21AA08u, 0x21AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA10u;
label_21aa10:
    // 0x21aa10: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa14: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21aa14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21aa18: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa1c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21aa20: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21aa24: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21aa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21aa28: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AA28u;
    {
        const bool branch_taken_0x21aa28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21aa28) {
            ctx->pc = 0x21AA3Cu;
            goto label_21aa3c;
        }
    }
    ctx->pc = 0x21AA30u;
    // 0x21aa30: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21aa30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21aa34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21AA34u;
    {
        const bool branch_taken_0x21aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa34) {
            ctx->pc = 0x21AA58u;
            goto label_21aa58;
        }
    }
    ctx->pc = 0x21AA3Cu;
label_21aa3c:
    // 0x21aa3c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa40: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21aa44: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa48: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21aa4c: 0x24740118  addiu       $s4, $v1, 0x118
    ctx->pc = 0x21aa4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21aa50: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x21aa50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21aa54: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x21aa54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21aa58:
    // 0x21aa58: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21aa5c: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x21aa5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21aa60: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21aa64: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x21AA64u;
    {
        const bool branch_taken_0x21aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa64) {
            ctx->pc = 0x21AB74u;
            goto label_21ab74;
        }
    }
    ctx->pc = 0x21AA6Cu;
label_21aa6c:
    // 0x21aa6c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21aa70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21aa70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21aa74: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x21aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21aa78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21aa78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21aa7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21AA7Cu;
    SET_GPR_U32(ctx, 31, 0x21AA84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21AA7Cu, 0x21AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA84u;
label_21aa84:
    // 0x21aa84: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa88: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21aa88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21aa8c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aa90: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aa94: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21aa94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aa98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21aa9c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaa0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aaa4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21aaa8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aab0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21aab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aab8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aabc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aac0: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x21aac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x21aac4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aac8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aacc: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21aaccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aad0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aad4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aad8: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21aad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aadc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aae0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aae4: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21aae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aae8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aaf0: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21aaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21aaf4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21aaf8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21aafc: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21aafcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ab00: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab04: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ab08: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21ab08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21ab0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab10: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21ab14: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21AB14u;
    SET_GPR_U32(ctx, 31, 0x21AB1Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21AB14u, 0x21AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AB1Cu;
label_21ab1c:
    // 0x21ab1c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab20: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21ab20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21ab24: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab28: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21ab2c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21ab30: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21ab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21ab34: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AB34u;
    {
        const bool branch_taken_0x21ab34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ab34) {
            ctx->pc = 0x21AB48u;
            goto label_21ab48;
        }
    }
    ctx->pc = 0x21AB3Cu;
    // 0x21ab3c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21ab3cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ab40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21AB40u;
    {
        const bool branch_taken_0x21ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab40) {
            ctx->pc = 0x21AB64u;
            goto label_21ab64;
        }
    }
    ctx->pc = 0x21AB48u;
label_21ab48:
    // 0x21ab48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab4c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21ab50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21ab54: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21ab58: 0x24760118  addiu       $s6, $v1, 0x118
    ctx->pc = 0x21ab58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x21ab5c: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x21ab5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21ab60: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x21ab60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_21ab64:
    // 0x21ab64: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21ab68: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x21ab68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21ab6c: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x21ab6cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21ab70: 0x0  nop
    ctx->pc = 0x21ab70u;
    // NOP
label_21ab74:
    // 0x21ab74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21ab78: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21ab78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21ab7c: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x21AB7Cu;
    {
        const bool branch_taken_0x21ab7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21ab7c) {
            ctx->pc = 0x21AC18u;
            goto label_21ac18;
        }
    }
    ctx->pc = 0x21AB84u;
    // 0x21ab84: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x21ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab88: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ab8c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x21ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21ab94: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x21ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab98: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21ab98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ab9c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x21ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aba0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21aba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21aba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21aba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abac: 0x0  nop
    ctx->pc = 0x21abacu;
    // NOP
    // 0x21abb0: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21abb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21abb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21abb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abbc: 0x0  nop
    ctx->pc = 0x21abbcu;
    // NOP
    // 0x21abc0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21abc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21abc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21abc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21abc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abcc: 0x0  nop
    ctx->pc = 0x21abccu;
    // NOP
    // 0x21abd0: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21abd4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21abd8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21abdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21abdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abe0: 0x0  nop
    ctx->pc = 0x21abe0u;
    // NOP
    // 0x21abe4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21abe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21abe8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21abec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21abecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21abf0: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x21abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x21abf4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21abf8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21abfc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21abfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ac00: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x21ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x21ac04: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21ac08: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ac0c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21ac0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21ac10: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x21ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ac14: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_21ac18:
    // 0x21ac18: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x21ac18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ac1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21ac1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ac20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21ac20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ac24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21ac24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ac28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21ac28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ac2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21ac2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ac30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21ac30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ac34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21ac34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ac38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21ac38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ac3c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC48u;
}
