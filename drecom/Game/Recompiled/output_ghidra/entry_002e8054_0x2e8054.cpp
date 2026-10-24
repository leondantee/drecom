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

// Function: entry_002e8054
// Address: 0x2e8054 - 0x2e815c
void entry_002e8054_0x2e8054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8054_0x2e8054");
#endif

    switch (ctx->pc) {
        case 0x2e8094u: goto label_2e8094;
        case 0x2e8130u: goto label_2e8130;
        default: break;
    }

    ctx->pc = 0x2e8054u;

    // 0x2e8054: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e8054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e8058: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e8058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e805c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e805cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e8060: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e8064: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8068: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e8068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e806c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e8070: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e8070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e8074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e8074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e8078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e8078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e807c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e807cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8080: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e8080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e8084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e8084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8088: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e8088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e808c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E808Cu;
    SET_GPR_U32(ctx, 31, 0x2E8094u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E808Cu, 0x2E8094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8094u;
label_2e8094:
    // 0x2e8094: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8098: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e809c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e80a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80a4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80a8: 0xa062013a  sb          $v0, 0x13A($v1)
    ctx->pc = 0x2e80a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e80ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e80b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80b4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80b8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2e80b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e80bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80c0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80c4: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2e80c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e80cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80d0: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80d4: 0xa064011b  sb          $a0, 0x11B($v1)
    ctx->pc = 0x2e80d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 283), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e80d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80e0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e80e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80ec: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e80ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e80f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e80f8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e80f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e80fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e80fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8104: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e8104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8108: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e810c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e810cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8110: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e8110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8118: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8118u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e811c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e811cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8120: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8124: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e8124u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8128: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E8128u;
    SET_GPR_U32(ctx, 31, 0x2E8130u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E8128u, 0x2E8130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8130u;
label_2e8130:
    // 0x2e8130: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8134: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e8134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e8138: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e813c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e813cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e8140: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e8144: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e8144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e8148: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8148u;
    {
        const bool branch_taken_0x2e8148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8148) {
            ctx->pc = 0x2E815Cu;
            return;
        }
    }
    ctx->pc = 0x2E8150u;
    // 0x2e8150: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2e8150u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8154: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8154u;
    {
        const bool branch_taken_0x2e8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8154) {
            ctx->pc = 0x2E8178u;
            return;
        }
    }
    ctx->pc = 0x2E815Cu;
}
