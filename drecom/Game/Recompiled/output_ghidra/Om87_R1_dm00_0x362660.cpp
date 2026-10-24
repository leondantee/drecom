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

// Function: Om87_R1_dm00
// Address: 0x362660 - 0x362754
void Om87_R1_dm00_0x362660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_R1_dm00_0x362660");
#endif

    switch (ctx->pc) {
        case 0x3626a8u: goto label_3626a8;
        case 0x362704u: goto label_362704;
        case 0x362710u: goto label_362710;
        default: break;
    }

    ctx->pc = 0x362660u;

    // 0x362660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x362660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x362664: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x362664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x362668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36266c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362670: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x362670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x362674: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x362674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x362678: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x362678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x36267c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x36267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x362680: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x362680u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AACE0u));
    // 0x362684: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x362684u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x362688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36268c: 0x8c5102d0  lw          $s1, 0x2D0($v0)
    ctx->pc = 0x36268cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x362690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362694: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x362694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x362698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36269c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x36269cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x3626a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3626A0u;
    SET_GPR_U32(ctx, 31, 0x3626A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3626A0u, 0x3626A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3626A8u;
label_3626a8:
    // 0x3626a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3626a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3626ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3626acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3626b0: 0x30700007  andi        $s0, $v1, 0x7
    ctx->pc = 0x3626b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3626b4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3626B4u;
    {
        const bool branch_taken_0x3626b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3626b4) {
            ctx->pc = 0x3626C8u;
            goto label_3626c8;
        }
    }
    ctx->pc = 0x3626BCu;
    // 0x3626bc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3626BCu;
    {
        const bool branch_taken_0x3626bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3626bc) {
            ctx->pc = 0x3626C8u;
            goto label_3626c8;
        }
    }
    ctx->pc = 0x3626C4u;
    // 0x3626c4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3626c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3626c8:
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
