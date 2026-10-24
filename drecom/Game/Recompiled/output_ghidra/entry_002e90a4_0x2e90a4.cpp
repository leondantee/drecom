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

// Function: entry_002e90a4
// Address: 0x2e90a4 - 0x2e91ac
void entry_002e90a4_0x2e90a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e90a4_0x2e90a4");
#endif

    switch (ctx->pc) {
        case 0x2e90e4u: goto label_2e90e4;
        case 0x2e9180u: goto label_2e9180;
        default: break;
    }

    ctx->pc = 0x2e90a4u;

    // 0x2e90a4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e90a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e90ac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2e90acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e90b0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2e90b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2e90b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e90b8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2e90b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e90bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e90bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e90c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e90c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e90c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e90c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e90c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e90c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e90cc: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2e90ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e90d0: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e90d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e90d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e90d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e90d8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e90d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e90dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E90DCu;
    SET_GPR_U32(ctx, 31, 0x2E90E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E90DCu, 0x2E90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90E4u;
label_2e90e4:
    // 0x2e90e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e90e8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e90e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e90ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e90f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e90f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e90f8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e90f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e90fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9100: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9104: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9108: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e9108u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e910c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e910cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9110: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9110u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9114: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e9114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e911c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e911cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9120: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9124: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e9124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9128: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e912c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e912cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9130: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9134: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9138: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e913c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e913cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9140: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9144: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9148: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e914c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9150: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9154: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e9154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9158: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e915c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e915cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9160: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e9160u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9168: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e916c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e916cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9170: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9174: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e9174u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9178: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E9178u;
    SET_GPR_U32(ctx, 31, 0x2E9180u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E9178u, 0x2E9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9180u;
label_2e9180:
    // 0x2e9180: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9184: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e9184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e9188: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e918c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e918cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e9190: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9194: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9198: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E9198u;
    {
        const bool branch_taken_0x2e9198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e9198) {
            ctx->pc = 0x2E91ACu;
            return;
        }
    }
    ctx->pc = 0x2E91A0u;
    // 0x2e91a0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2e91a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e91a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E91A4u;
    {
        const bool branch_taken_0x2e91a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91a4) {
            ctx->pc = 0x2E91C8u;
            return;
        }
    }
    ctx->pc = 0x2E91ACu;
}
