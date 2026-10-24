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

// Function: entry_002ee8a8
// Address: 0x2ee8a8 - 0x2ee988
void entry_002ee8a8_0x2ee8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee8a8_0x2ee8a8");
#endif

    switch (ctx->pc) {
        case 0x2ee8c0u: goto label_2ee8c0;
        case 0x2ee95cu: goto label_2ee95c;
        default: break;
    }

    ctx->pc = 0x2ee8a8u;

    // 0x2ee8a8: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2ee8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2ee8ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ee8acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee8b0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2ee8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ee8b4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2ee8b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee8b8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EE8B8u;
    SET_GPR_U32(ctx, 31, 0x2EE8C0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EE8B8u, 0x2EE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8C0u;
label_2ee8c0:
    // 0x2ee8c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8c4: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ee8c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ee8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee8cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee8d4: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ee8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee8d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ee8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee8dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8e0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee8e4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ee8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee8e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8ec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee8f0: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ee8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee8f8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee8fc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee900: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2ee900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ee904: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee908: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee90c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ee90cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee910: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee914: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee918: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ee918u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee91c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee920: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee924: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ee924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee928: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee92c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee92cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee930: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ee930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee934: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee938: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee93c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ee93cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee940: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee944: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee948: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ee948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ee94c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee950: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ee950u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ee954: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EE954u;
    SET_GPR_U32(ctx, 31, 0x2EE95Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EE954u, 0x2EE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE95Cu;
label_2ee95c:
    // 0x2ee95c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee960: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ee960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ee964: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ee964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ee968: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ee96c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee970: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee974: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE974u;
    {
        const bool branch_taken_0x2ee974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee974) {
            ctx->pc = 0x2EE988u;
            return;
        }
    }
    ctx->pc = 0x2EE97Cu;
    // 0x2ee97c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2ee97cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ee980: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE980u;
    {
        const bool branch_taken_0x2ee980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee980) {
            ctx->pc = 0x2EE9A8u;
            return;
        }
    }
    ctx->pc = 0x2EE988u;
}
