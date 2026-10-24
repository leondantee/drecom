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

// Function: entry_00219444
// Address: 0x219444 - 0x219544
void entry_00219444_0x219444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219444_0x219444");
#endif

    switch (ctx->pc) {
        case 0x219484u: goto label_219484;
        case 0x219518u: goto label_219518;
        default: break;
    }

    ctx->pc = 0x219444u;

    // 0x219444: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x219444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x219448: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x219448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21944c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21944cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x219450: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x219450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x219454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219458: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21945c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21945cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x219460: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x219460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219464: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219468: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21946c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x219470: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x219470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x219474: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x219474u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219478: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x219478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21947c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21947Cu;
    SET_GPR_U32(ctx, 31, 0x219484u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21947Cu, 0x219484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219484u;
label_219484:
    // 0x219484: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219488: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x219488u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21948c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219490: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219494: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x219494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x219498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x219498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21949c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194a4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2194a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2194a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194b0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2194b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194bc: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2194bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194c8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2194c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194d4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2194d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194e0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2194e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194ec: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2194ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2194f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2194f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2194f8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2194f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2194fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2194fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219504: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21950c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21950cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219510: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219510u;
    SET_GPR_U32(ctx, 31, 0x219518u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219510u, 0x219518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219518u;
label_219518:
    // 0x219518: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21951c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21951cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219524: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x219524u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x219528: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21952c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219530: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x219530u;
    {
        const bool branch_taken_0x219530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219530) {
            ctx->pc = 0x219544u;
            return;
        }
    }
    ctx->pc = 0x219538u;
    // 0x219538: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219538u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21953c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21953Cu;
    {
        const bool branch_taken_0x21953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21953c) {
            ctx->pc = 0x219560u;
            return;
        }
    }
    ctx->pc = 0x219544u;
}
