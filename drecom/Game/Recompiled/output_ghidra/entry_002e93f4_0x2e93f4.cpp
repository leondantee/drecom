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

// Function: entry_002e93f4
// Address: 0x2e93f4 - 0x2e94fc
void entry_002e93f4_0x2e93f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e93f4_0x2e93f4");
#endif

    switch (ctx->pc) {
        case 0x2e9434u: goto label_2e9434;
        case 0x2e94d0u: goto label_2e94d0;
        default: break;
    }

    ctx->pc = 0x2e93f4u;

    // 0x2e93f4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e93f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e93f8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e93fc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e93fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e9400: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e9404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9408: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e9408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e940c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e940cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e9410: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9414: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e9414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e9418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e941c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e941cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e9420: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e9424: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e9424u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9428: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e942c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E942Cu;
    SET_GPR_U32(ctx, 31, 0x2E9434u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E942Cu, 0x2E9434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9434u;
label_2e9434:
    // 0x2e9434: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9438: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e943c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9440: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9444: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9448: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e9448u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e944c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9450: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9454: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9458: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e9458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e945c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9460: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9464: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e9464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e946c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9470: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9474: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e9474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9478: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e947c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e947cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9480: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9484: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9488: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e948c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e948cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9490: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9494: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9498: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9498u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e949c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94a4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e94a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e94a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94b0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e94b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e94b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94bc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e94bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e94c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94c4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e94c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E94C8u;
    SET_GPR_U32(ctx, 31, 0x2E94D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E94C8u, 0x2E94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94D0u;
label_2e94d0:
    // 0x2e94d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94d4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e94d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e94d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e94d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e94dc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e94e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e94e4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e94e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e94e8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E94E8u;
    {
        const bool branch_taken_0x2e94e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e94e8) {
            ctx->pc = 0x2E94FCu;
            return;
        }
    }
    ctx->pc = 0x2E94F0u;
    // 0x2e94f0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e94f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e94f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E94F4u;
    {
        const bool branch_taken_0x2e94f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94f4) {
            ctx->pc = 0x2E9518u;
            return;
        }
    }
    ctx->pc = 0x2E94FCu;
}
