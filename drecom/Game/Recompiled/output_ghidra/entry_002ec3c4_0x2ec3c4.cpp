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

// Function: entry_002ec3c4
// Address: 0x2ec3c4 - 0x2ec4cc
void entry_002ec3c4_0x2ec3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec3c4_0x2ec3c4");
#endif

    switch (ctx->pc) {
        case 0x2ec404u: goto label_2ec404;
        case 0x2ec4a0u: goto label_2ec4a0;
        default: break;
    }

    ctx->pc = 0x2ec3c4u;

    // 0x2ec3c4: 0x8fb700f0  lw          $s7, 0xF0($sp)
    ctx->pc = 0x2ec3c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ec3c8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2ec3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ec3cc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2ec3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ec3d0: 0x8ee30130  lw          $v1, 0x130($s7)
    ctx->pc = 0x2ec3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 304)));
    // 0x2ec3d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2ec3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec3d8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x2ec3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2ec3dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2ec3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ec3e0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ec3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ec3e4: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2ec3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2ec3e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ec3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ec3ec: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2ec3ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2ec3f0: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ec3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ec3f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ec3f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec3f8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ec3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec3fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EC3FCu;
    SET_GPR_U32(ctx, 31, 0x2EC404u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EC3FCu, 0x2EC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC404u;
label_2ec404:
    // 0x2ec404: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec408: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ec40c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec410: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec414: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec418: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ec418u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec41c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ec41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec420: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec424: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec424u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec428: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ec428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec42c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec430: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec434: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ec434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec43c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec440: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec440u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec444: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ec444u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec448: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec44c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec44cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec450: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ec450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec454: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec458: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec45c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ec45cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec460: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec464: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec468: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ec468u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec46c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec470: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec474: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ec474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec478: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec47c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec47cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec480: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ec480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec484: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec488: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ec488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec48c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ec48cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec490: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec494: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ec494u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ec498: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EC498u;
    SET_GPR_U32(ctx, 31, 0x2EC4A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EC498u, 0x2EC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC4A0u;
label_2ec4a0:
    // 0x2ec4a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4a4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ec4a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ec4a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec4ac: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec4b0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec4b4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec4b8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC4B8u;
    {
        const bool branch_taken_0x2ec4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec4b8) {
            ctx->pc = 0x2EC4CCu;
            return;
        }
    }
    ctx->pc = 0x2EC4C0u;
    // 0x2ec4c0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2ec4c0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ec4c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC4C4u;
    {
        const bool branch_taken_0x2ec4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec4c4) {
            ctx->pc = 0x2EC4F0u;
            return;
        }
    }
    ctx->pc = 0x2EC4CCu;
}
