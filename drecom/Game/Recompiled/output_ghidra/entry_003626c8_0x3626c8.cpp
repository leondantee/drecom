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

// Function: entry_003626c8
// Address: 0x3626c8 - 0x362754
void entry_003626c8_0x3626c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003626c8_0x3626c8");
#endif

    switch (ctx->pc) {
        case 0x362704u: goto label_362704;
        case 0x362710u: goto label_362710;
        default: break;
    }

    ctx->pc = 0x3626c8u;

    // 0x3626c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3626c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3626cc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3626ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3626d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3626d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3626d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3626d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3626d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3626d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3626dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3626dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3626e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3626e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3626e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3626e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3626e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3626e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3626ec: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3626ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3626f0: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3626f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3626f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3626f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3626f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3626f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3626fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3626FCu;
    SET_GPR_U32(ctx, 31, 0x362704u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3626FCu, 0x362704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362704u;
label_362704:
    // 0x362704: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x362704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x362708: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x362708u;
    SET_GPR_U32(ctx, 31, 0x362710u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x362708u, 0x362710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362710u;
label_362710:
    // 0x362710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x362710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362714: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36271c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362720: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362724: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362728: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36272c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362730: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362734: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362738: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36273c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x36273cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362748: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x362748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36274c: 0x3e00008  jr          $ra
    ctx->pc = 0x36274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362754u;
}
