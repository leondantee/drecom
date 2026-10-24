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

// Function: entry_0021a0d8
// Address: 0x21a0d8 - 0x21a1dc
void entry_0021a0d8_0x21a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a0d8_0x21a0d8");
#endif

    switch (ctx->pc) {
        case 0x21a11cu: goto label_21a11c;
        case 0x21a1b0u: goto label_21a1b0;
        default: break;
    }

    ctx->pc = 0x21a0d8u;

    // 0x21a0d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21a0dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a0e0: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x21A0E0u;
    {
        const bool branch_taken_0x21a0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a0e0) {
            ctx->pc = 0x21A20Cu;
            return;
        }
    }
    ctx->pc = 0x21A0E8u;
    // 0x21a0e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a0ec: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x21a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x21a0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a0f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a0fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a104: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21a104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a108: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x21a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x21a10c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a110: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x21a110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21a114: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A114u;
    SET_GPR_U32(ctx, 31, 0x21A11Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A114u, 0x21A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A11Cu;
label_21a11c:
    // 0x21a11c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a120: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a120u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a128: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a128u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a12c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a12cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a134: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a138: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a13c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a13cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a144: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a148: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a14c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a150: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a154: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21a154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a158: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a15c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a160: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a168: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a16c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a16cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a170: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a174: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a178: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a17c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a180: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a184: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a188: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a18c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a190: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a194: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a198: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a19c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a1a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1a4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a1a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A1A8u;
    SET_GPR_U32(ctx, 31, 0x21A1B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A1A8u, 0x21A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1B0u;
label_21a1b0:
    // 0x21a1b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1b4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a1b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a1b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a1bc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a1c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a1c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a1c8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A1C8u;
    {
        const bool branch_taken_0x21a1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a1c8) {
            ctx->pc = 0x21A1DCu;
            return;
        }
    }
    ctx->pc = 0x21A1D0u;
    // 0x21a1d0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21a1d0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A1D4u;
    {
        const bool branch_taken_0x21a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a1d4) {
            ctx->pc = 0x21A1F8u;
            return;
        }
    }
    ctx->pc = 0x21A1DCu;
}
