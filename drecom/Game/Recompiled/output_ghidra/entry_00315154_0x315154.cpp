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

// Function: entry_00315154
// Address: 0x315154 - 0x31524c
void entry_00315154_0x315154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315154_0x315154");
#endif

    switch (ctx->pc) {
        case 0x315188u: goto label_315188;
        case 0x315220u: goto label_315220;
        default: break;
    }

    ctx->pc = 0x315154u;

    // 0x315154: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x315154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x315158: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x315158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31515c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31515cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315160: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x315160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x315164: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x315164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x315168: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x315168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31516c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x315170: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x315170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x315174: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x315174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x315178: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x315178u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31517c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31517cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x315180: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x315180u;
    SET_GPR_U32(ctx, 31, 0x315188u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x315180u, 0x315188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315188u;
label_315188:
    // 0x315188: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31518c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x31518cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x315190: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315194: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315198: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x315198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x31519c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3151a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151a8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x3151a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x3151ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151b4: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x3151b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3151b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3151bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151c4: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x3151c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x3151c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151d0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x3151d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151d8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151dc: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x3151dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151e8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x3151e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151f0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3151f4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x3151f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x3151f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3151f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3151fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3151fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x315200: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x315200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x315204: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315208: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x315208u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x31520c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x31520cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x315210: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315214: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x315214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x315218: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x315218u;
    SET_GPR_U32(ctx, 31, 0x315220u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x315218u, 0x315220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315220u;
label_315220:
    // 0x315220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x315224: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x315224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x315228: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x315228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x31522c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x31522cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x315230: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x315230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x315234: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x315234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x315238: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x315238u;
    {
        const bool branch_taken_0x315238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x315238) {
            ctx->pc = 0x31524Cu;
            return;
        }
    }
    ctx->pc = 0x315240u;
    // 0x315240: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x315240u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x315244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x315244u;
    {
        const bool branch_taken_0x315244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315244) {
            ctx->pc = 0x315268u;
            return;
        }
    }
    ctx->pc = 0x31524Cu;
}
