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

// Function: Om81_R1_dm00
// Address: 0x35b830 - 0x35b91c
void Om81_R1_dm00_0x35b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_R1_dm00_0x35b830");
#endif

    switch (ctx->pc) {
        case 0x35b878u: goto label_35b878;
        case 0x35b8ccu: goto label_35b8cc;
        case 0x35b8d8u: goto label_35b8d8;
        default: break;
    }

    ctx->pc = 0x35b830u;

    // 0x35b830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35b834: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35b838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b840: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35b840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35b844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35b848: 0x2442aa00  addiu       $v0, $v0, -0x5600
    ctx->pc = 0x35b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945280));
    // 0x35b84c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35b850: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35b850u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AAA00u));
    // 0x35b854: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x35b854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35b858: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b85c: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x35b85cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x35b860: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b864: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x35b864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b868: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b86c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x35b86cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b870: 0xc067694  jal         func_19DA50
    ctx->pc = 0x35B870u;
    SET_GPR_U32(ctx, 31, 0x35B878u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x35B870u, 0x35B878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B878u;
label_35b878:
    // 0x35b878: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35b878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35b87c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x35b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x35b880: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x35b880u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35b884: 0x0  nop
    ctx->pc = 0x35b884u;
    // NOP
    // 0x35b888: 0x0  nop
    ctx->pc = 0x35b888u;
    // NOP
    // 0x35b88c: 0x8010  mfhi        $s0
    ctx->pc = 0x35b88cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x35b890: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b894: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x35b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x35b898: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x35b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x35b89c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35b8a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35b8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35b8a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x35b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x35b8a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35b8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35b8ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35b8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x35b8b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35b8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35b8b4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x35b8b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35b8b8: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x35b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x35b8bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35b8bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b8c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35b8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35b8c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35B8C4u;
    SET_GPR_U32(ctx, 31, 0x35B8CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35B8C4u, 0x35B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B8CCu;
label_35b8cc:
    // 0x35b8cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35b8ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35b8d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35B8D0u;
    SET_GPR_U32(ctx, 31, 0x35B8D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35B8D0u, 0x35B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B8D8u;
label_35b8d8:
    // 0x35b8d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b8dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b8e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b8e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b8e8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b8ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b8f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b8f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b8f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b8fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35b8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35b900: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b904: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35b904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b90c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b910: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35b914: 0x3e00008  jr          $ra
    ctx->pc = 0x35B914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B91Cu;
}
