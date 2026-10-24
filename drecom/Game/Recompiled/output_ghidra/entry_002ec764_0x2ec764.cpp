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

// Function: entry_002ec764
// Address: 0x2ec764 - 0x2ec86c
void entry_002ec764_0x2ec764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec764_0x2ec764");
#endif

    switch (ctx->pc) {
        case 0x2ec7a4u: goto label_2ec7a4;
        case 0x2ec840u: goto label_2ec840;
        default: break;
    }

    ctx->pc = 0x2ec764u;

    // 0x2ec764: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2ec764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ec768: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ec768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ec76c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ec76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ec770: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ec770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ec774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec778: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ec778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ec77c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ec77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ec780: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ec780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec784: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ec784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ec788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ec78c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ec78cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ec790: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ec790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ec794: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ec794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec798: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ec798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec79c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EC79Cu;
    SET_GPR_U32(ctx, 31, 0x2EC7A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EC79Cu, 0x2EC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC7A4u;
label_2ec7a4:
    // 0x2ec7a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7a8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ec7ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec7b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7b8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ec7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec7bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ec7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec7c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7c8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ec7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec7cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7d4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ec7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec7dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7e4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ec7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec7e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ec7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec7f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec7fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ec7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec804: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec808: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ec808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec80c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec810: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec814: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ec814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec818: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec81c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec81cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec820: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ec820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec828: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec82c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ec82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec830: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec834: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ec834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EC838u;
    SET_GPR_U32(ctx, 31, 0x2EC840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EC838u, 0x2EC840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC840u;
label_2ec840:
    // 0x2ec840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec844: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ec844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ec848: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec84c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec84cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec850: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec854: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec858: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC858u;
    {
        const bool branch_taken_0x2ec858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec858) {
            ctx->pc = 0x2EC86Cu;
            return;
        }
    }
    ctx->pc = 0x2EC860u;
    // 0x2ec860: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x2ec860u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec864: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC864u;
    {
        const bool branch_taken_0x2ec864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec864) {
            ctx->pc = 0x2EC890u;
            return;
        }
    }
    ctx->pc = 0x2EC86Cu;
}
