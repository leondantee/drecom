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

// Function: entry_0031580c
// Address: 0x31580c - 0x315904
void entry_0031580c_0x31580c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031580c_0x31580c");
#endif

    switch (ctx->pc) {
        case 0x315840u: goto label_315840;
        case 0x3158d8u: goto label_3158d8;
        default: break;
    }

    ctx->pc = 0x31580cu;

    // 0x31580c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x31580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315810: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x315810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x315814: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x315814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315818: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x315818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31581c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x315820: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x315820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x315824: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x315824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x315828: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x315828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31582c: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x31582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x315830: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x315830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315834: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x315834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x315838: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x315838u;
    SET_GPR_U32(ctx, 31, 0x315840u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x315838u, 0x315840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315840u;
label_315840:
    // 0x315840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315844: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x315844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x315848: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31584c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31584cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315850: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x315850u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x315854: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315858: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31585c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31585cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315860: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x315860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x315864: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315868: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31586c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x31586cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x315870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x315874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315878: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31587c: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x31587cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x315880: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315884: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315888: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x315888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x31588c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x31588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315890: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315894: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x315894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x315898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31589c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x31589cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158a0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3158a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158ac: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3158acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3158b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158b8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3158b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3158c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158c4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3158c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3158c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158cc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3158ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3158d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3158D0u;
    SET_GPR_U32(ctx, 31, 0x3158D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3158D0u, 0x3158D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3158D8u;
label_3158d8:
    // 0x3158d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158dc: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3158dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3158e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3158e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3158e4: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3158e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3158e8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3158e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3158ec: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3158ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3158f0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3158F0u;
    {
        const bool branch_taken_0x3158f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3158f0) {
            ctx->pc = 0x315904u;
            return;
        }
    }
    ctx->pc = 0x3158F8u;
    // 0x3158f8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3158f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3158fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3158FCu;
    {
        const bool branch_taken_0x3158fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3158fc) {
            ctx->pc = 0x315920u;
            return;
        }
    }
    ctx->pc = 0x315904u;
}
