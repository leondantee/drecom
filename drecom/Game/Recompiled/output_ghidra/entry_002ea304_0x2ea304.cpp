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

// Function: entry_002ea304
// Address: 0x2ea304 - 0x2ea40c
void entry_002ea304_0x2ea304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea304_0x2ea304");
#endif

    switch (ctx->pc) {
        case 0x2ea344u: goto label_2ea344;
        case 0x2ea3e0u: goto label_2ea3e0;
        default: break;
    }

    ctx->pc = 0x2ea304u;

    // 0x2ea304: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2ea304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ea308: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ea308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ea30c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ea30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ea310: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ea314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea318: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ea318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea31c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ea31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ea320: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ea320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ea324: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ea324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ea328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ea328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea32c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ea32cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ea330: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ea330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ea334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ea334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea338: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ea338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ea33c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EA33Cu;
    SET_GPR_U32(ctx, 31, 0x2EA344u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EA33Cu, 0x2EA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA344u;
label_2ea344:
    // 0x2ea344: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea348: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ea34c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ea34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea350: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea354: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea358: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ea358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea35c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ea35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea360: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea364: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea368: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ea368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea36c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea370: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea374: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ea374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea37c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea380: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea384: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ea384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea388: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea38c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea38cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea390: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ea390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea394: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea398: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea39c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ea39cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3a8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ea3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3b4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ea3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3c0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ea3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3cc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ea3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea3d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3d4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ea3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea3d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EA3D8u;
    SET_GPR_U32(ctx, 31, 0x2EA3E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EA3D8u, 0x2EA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3E0u;
label_2ea3e0:
    // 0x2ea3e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3e4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ea3e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ea3e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea3ec: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea3f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea3f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea3f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA3F8u;
    {
        const bool branch_taken_0x2ea3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ea3f8) {
            ctx->pc = 0x2EA40Cu;
            return;
        }
    }
    ctx->pc = 0x2EA400u;
    // 0x2ea400: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x2ea400u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea404: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA404u;
    {
        const bool branch_taken_0x2ea404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea404) {
            ctx->pc = 0x2EA430u;
            return;
        }
    }
    ctx->pc = 0x2EA40Cu;
}
