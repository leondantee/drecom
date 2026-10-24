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

// Function: entry_002ef45c
// Address: 0x2ef45c - 0x2ef55c
void entry_002ef45c_0x2ef45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef45c_0x2ef45c");
#endif

    switch (ctx->pc) {
        case 0x2ef49cu: goto label_2ef49c;
        case 0x2ef530u: goto label_2ef530;
        default: break;
    }

    ctx->pc = 0x2ef45cu;

    // 0x2ef45c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2ef45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ef460: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ef460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ef464: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ef464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ef468: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ef468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ef46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef470: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ef470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ef474: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ef474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ef478: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ef478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ef47c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ef47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ef480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ef480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ef484: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ef484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ef488: 0x24042a09  addiu       $a0, $zero, 0x2A09
    ctx->pc = 0x2ef488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10761));
    // 0x2ef48c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ef48cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef490: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2ef490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ef494: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EF494u;
    SET_GPR_U32(ctx, 31, 0x2EF49Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EF494u, 0x2EF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF49Cu;
label_2ef49c:
    // 0x2ef49c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4a0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ef4a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4ac: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2ef4acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4b8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2ef4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4c4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ef4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4d0: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ef4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4dc: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ef4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ef4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef4e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4ec: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2ef4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ef4f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef4f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef4f8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ef4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef4fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef504: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ef504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef50c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef50cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef510: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ef510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef514: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef518: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ef518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef51c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ef51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef524: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ef528: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EF528u;
    SET_GPR_U32(ctx, 31, 0x2EF530u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EF528u, 0x2EF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF530u;
label_2ef530:
    // 0x2ef530: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef534: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ef534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ef538: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef53c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef540: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ef540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ef544: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ef544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ef548: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF548u;
    {
        const bool branch_taken_0x2ef548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef548) {
            ctx->pc = 0x2EF55Cu;
            return;
        }
    }
    ctx->pc = 0x2EF550u;
    // 0x2ef550: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ef550u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ef554: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EF554u;
    {
        const bool branch_taken_0x2ef554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef554) {
            ctx->pc = 0x2EF584u;
            return;
        }
    }
    ctx->pc = 0x2EF55Cu;
}
