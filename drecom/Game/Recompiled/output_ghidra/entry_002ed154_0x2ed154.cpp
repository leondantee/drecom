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

// Function: entry_002ed154
// Address: 0x2ed154 - 0x2ed25c
void entry_002ed154_0x2ed154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed154_0x2ed154");
#endif

    switch (ctx->pc) {
        case 0x2ed194u: goto label_2ed194;
        case 0x2ed230u: goto label_2ed230;
        default: break;
    }

    ctx->pc = 0x2ed154u;

    // 0x2ed154: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2ed154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed158: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2ed158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ed15c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ed15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ed160: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2ed160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2ed164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed168: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed16c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed170: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed174: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed178: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed17c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2ed17cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed180: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ed180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ed184: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ed184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed188: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed18c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2ED18Cu;
    SET_GPR_U32(ctx, 31, 0x2ED194u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2ED18Cu, 0x2ED194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED194u;
label_2ed194:
    // 0x2ed194: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed198: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ed19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed1a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1a8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ed1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed1ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed1b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1b8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ed1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed1bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1c4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ed1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed1cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1d4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ed1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed1d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1e0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ed1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1ec: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ed1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed1f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed1f8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ed1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed1fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed200: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed204: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ed204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed208: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed20c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed20cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed210: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ed210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ed218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed21c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ed21cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ed220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed224: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ed224u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ed228: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2ED228u;
    SET_GPR_U32(ctx, 31, 0x2ED230u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2ED228u, 0x2ED230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED230u;
label_2ed230:
    // 0x2ed230: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed234: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ed234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ed238: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ed238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ed23c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ed23cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed240: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed244: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed248: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED248u;
    {
        const bool branch_taken_0x2ed248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed248) {
            ctx->pc = 0x2ED25Cu;
            return;
        }
    }
    ctx->pc = 0x2ED250u;
    // 0x2ed250: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2ed250u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ed254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED254u;
    {
        const bool branch_taken_0x2ed254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed254) {
            ctx->pc = 0x2ED278u;
            return;
        }
    }
    ctx->pc = 0x2ED25Cu;
}
