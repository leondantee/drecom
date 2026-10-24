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

// Function: entry_0021976c
// Address: 0x21976c - 0x21986c
void entry_0021976c_0x21976c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021976c_0x21976c");
#endif

    switch (ctx->pc) {
        case 0x2197b0u: goto label_2197b0;
        case 0x219840u: goto label_219840;
        default: break;
    }

    ctx->pc = 0x21976cu;

    // 0x21976c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x219770: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x219770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219774: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x219774u;
    {
        const bool branch_taken_0x219774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219774) {
            ctx->pc = 0x21989Cu;
            return;
        }
    }
    ctx->pc = 0x21977Cu;
    // 0x21977c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x219780: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x219780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x219784: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x219784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x219788: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x219788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21978c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x219790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x219790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x219794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x219794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x219798: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x219798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21979c: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x21979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x2197a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2197a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2197a4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2197a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2197A8u;
    SET_GPR_U32(ctx, 31, 0x2197B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2197A8u, 0x2197B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197B0u;
label_2197b0:
    // 0x2197b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197b4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2197b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2197b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197c0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2197c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197cc: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2197ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197d4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197d8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2197d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197e4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2197e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197f0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2197f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2197f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2197f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2197f8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2197f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2197fc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2197fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x219800: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219804: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219808: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219808u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21980c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219810: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219814: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219814u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219818: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21981c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21981cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219820: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x219820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219824: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219828: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21982c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21982cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x219830: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219834: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219834u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219838: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219838u;
    SET_GPR_U32(ctx, 31, 0x219840u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219838u, 0x219840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219840u;
label_219840:
    // 0x219840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219844: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219848: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21984c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21984cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x219850: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219854: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219858: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219858u;
    {
        const bool branch_taken_0x219858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219858) {
            ctx->pc = 0x21986Cu;
            return;
        }
    }
    ctx->pc = 0x219860u;
    // 0x219860: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x219860u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219864u;
    {
        const bool branch_taken_0x219864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219864) {
            ctx->pc = 0x219888u;
            return;
        }
    }
    ctx->pc = 0x21986Cu;
}
