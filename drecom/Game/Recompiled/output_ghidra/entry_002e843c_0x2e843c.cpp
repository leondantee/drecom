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

// Function: entry_002e843c
// Address: 0x2e843c - 0x2e8544
void entry_002e843c_0x2e843c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e843c_0x2e843c");
#endif

    switch (ctx->pc) {
        case 0x2e847cu: goto label_2e847c;
        case 0x2e8518u: goto label_2e8518;
        default: break;
    }

    ctx->pc = 0x2e843cu;

    // 0x2e843c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e8440: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e8444: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e8444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e8448: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e844c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8450: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e8450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e8454: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e8454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e8458: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e8458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e845c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e8460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e8464: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e8464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8468: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e8468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e846c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e846cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8470: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e8470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e8474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E8474u;
    SET_GPR_U32(ctx, 31, 0x2E847Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E8474u, 0x2E847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E847Cu;
label_2e847c:
    // 0x2e847c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e847cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8480: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e8484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8488: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e848c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e848cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8490: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e8490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8494: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e8494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8498: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e849c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84a0: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e84a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e84a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84ac: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e84acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e84b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84bc: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e84bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e84c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84c8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e84c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84d4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e84d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84e0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e84e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84ec: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e84ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e84f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e84f8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e84f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e84fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e84fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8504: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e8504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e850c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e850cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8510: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E8510u;
    SET_GPR_U32(ctx, 31, 0x2E8518u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E8510u, 0x2E8518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8518u;
label_2e8518:
    // 0x2e8518: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e851c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e851cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e8520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8524: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e8524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8528: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e852c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8530: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8530u;
    {
        const bool branch_taken_0x2e8530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8530) {
            ctx->pc = 0x2E8544u;
            return;
        }
    }
    ctx->pc = 0x2E8538u;
    // 0x2e8538: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2e8538u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e853c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E853Cu;
    {
        const bool branch_taken_0x2e853c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e853c) {
            ctx->pc = 0x2E8560u;
            return;
        }
    }
    ctx->pc = 0x2E8544u;
}
