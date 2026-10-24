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

// Function: entry_002ee684
// Address: 0x2ee684 - 0x2ee784
void entry_002ee684_0x2ee684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee684_0x2ee684");
#endif

    switch (ctx->pc) {
        case 0x2ee6c4u: goto label_2ee6c4;
        case 0x2ee758u: goto label_2ee758;
        default: break;
    }

    ctx->pc = 0x2ee684u;

    // 0x2ee684: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2ee684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee688: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ee68c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ee68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ee690: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ee690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ee694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee698: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ee698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ee69c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ee69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ee6a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ee6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ee6a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ee6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ee6a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ee6ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ee6acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ee6b0: 0x24041509  addiu       $a0, $zero, 0x1509
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5385));
    // 0x2ee6b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ee6b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee6b8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2ee6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee6bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EE6BCu;
    SET_GPR_U32(ctx, 31, 0x2EE6C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EE6BCu, 0x2EE6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE6C4u;
label_2ee6c4:
    // 0x2ee6c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6c8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ee6cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6d4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ee6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6e0: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2ee6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6ec: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ee6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee6f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee6f8: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ee6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee6fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee700: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee704: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ee704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee70c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee710: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee710u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee714: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2ee714u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee718: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee71c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee71cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee720: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ee720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee724: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee728: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee72c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ee72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee730: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee734: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee738: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ee738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee73c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee740: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee744: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ee744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee748: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee74c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ee74cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee750: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EE750u;
    SET_GPR_U32(ctx, 31, 0x2EE758u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EE750u, 0x2EE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE758u;
label_2ee758:
    // 0x2ee758: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee75c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee75cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ee760: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee764: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee768: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee76c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee770: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE770u;
    {
        const bool branch_taken_0x2ee770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee770) {
            ctx->pc = 0x2EE784u;
            return;
        }
    }
    ctx->pc = 0x2EE778u;
    // 0x2ee778: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ee778u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee77c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EE77Cu;
    {
        const bool branch_taken_0x2ee77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee77c) {
            ctx->pc = 0x2EE7ACu;
            return;
        }
    }
    ctx->pc = 0x2EE784u;
}
