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

// Function: entry_002f157c
// Address: 0x2f157c - 0x2f1684
void entry_002f157c_0x2f157c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f157c_0x2f157c");
#endif

    switch (ctx->pc) {
        case 0x2f15bcu: goto label_2f15bc;
        case 0x2f1658u: goto label_2f1658;
        default: break;
    }

    ctx->pc = 0x2f157cu;

    // 0x2f157c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2f157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f1580: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2f1580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f1584: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f1584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f1588: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f1588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f158c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f1590: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f1590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f1594: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f1594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f1598: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f1598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f159c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f15a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f15a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f15a4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f15a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f15a8: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2f15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2f15ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f15acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f15b0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f15b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f15b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F15B4u;
    SET_GPR_U32(ctx, 31, 0x2F15BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F15B4u, 0x2F15BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F15BCu;
label_2f15bc:
    // 0x2f15bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15c0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f15c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f15c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15d0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2f15d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f15d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f15d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15e0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2f15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f15e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15ec: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2f15ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f15f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f15f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f15f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f15f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f15fc: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2f15fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1600: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1604: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1604u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1608: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f1608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f160c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f160cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1610: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1610u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1614: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f1614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1618: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f161c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f161cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1620: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f1620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1624: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1628: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f162c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f162cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1630: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1634: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1638: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f1638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f163c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1640: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f1640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1644: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f1644u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1648: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f164c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f164cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f1650: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F1650u;
    SET_GPR_U32(ctx, 31, 0x2F1658u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F1650u, 0x2F1658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1658u;
label_2f1658:
    // 0x2f1658: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f165c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f165cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f1660: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f1660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f1664: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f1664u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f1668: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f1668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f166c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f1670: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1670u;
    {
        const bool branch_taken_0x2f1670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1670) {
            ctx->pc = 0x2F1684u;
            return;
        }
    }
    ctx->pc = 0x2F1678u;
    // 0x2f1678: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2f1678u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f167c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F167Cu;
    {
        const bool branch_taken_0x2f167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f167c) {
            ctx->pc = 0x2F16A0u;
            return;
        }
    }
    ctx->pc = 0x2F1684u;
}
