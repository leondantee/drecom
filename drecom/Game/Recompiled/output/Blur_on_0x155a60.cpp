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

// Function: Blur_on
// Address: 0x155a60 - 0x155b40
void Blur_on_0x155a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Blur_on_0x155a60");
#endif

    switch (ctx->pc) {
        case 0x155a88u: goto label_155a88;
        case 0x155a94u: goto label_155a94;
        case 0x155b28u: goto label_155b28;
        default: break;
    }

    ctx->pc = 0x155a60u;

    // 0x155a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x155a64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x155a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x155a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155a70: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x155a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x155a74: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x155a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x155a78: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x155a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x155a7c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x155a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x155a80: 0xc0557dc  jal         func_155F70
    ctx->pc = 0x155A80u;
    SET_GPR_U32(ctx, 31, 0x155A88u);
    ctx->pc = 0x155F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F70u, 0x155A80u, 0x155A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155A88u;
label_155a88:
    // 0x155a88: 0x8fb10038  lw          $s1, 0x38($sp)
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155a8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x155A8Cu;
    {
        const bool branch_taken_0x155a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155a8c) {
            ctx->pc = 0x155AF8u;
            goto label_155af8;
        }
    }
    ctx->pc = 0x155A94u;
label_155a94:
    // 0x155a94: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155a98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155a9c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155aa0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155aa4: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155aa8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155aac: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x155aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155ab0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ab4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155ab8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x155AB8u;
    {
        const bool branch_taken_0x155ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155ab8) {
            ctx->pc = 0x155AF4u;
            goto label_155af4;
        }
    }
    ctx->pc = 0x155AC0u;
    // 0x155ac0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x155ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x155ac4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ac8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x155ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155acc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155ACCu;
    {
        const bool branch_taken_0x155acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x155acc) {
            ctx->pc = 0x155AF4u;
            goto label_155af4;
        }
    }
    ctx->pc = 0x155AD4u;
    // 0x155ad4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155ad8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155adc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x155adcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x155ae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x155ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155ae4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155ae8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x155ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x155aec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x155AECu;
    {
        const bool branch_taken_0x155aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155aec) {
            ctx->pc = 0x155B28u;
            goto label_155b28;
        }
    }
    ctx->pc = 0x155AF4u;
label_155af4:
    // 0x155af4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_155af8:
    // 0x155af8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x155af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x155afc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x155afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155b00: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x155B00u;
    {
        const bool branch_taken_0x155b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155b00) {
            ctx->pc = 0x155A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155a94;
        }
    }
    ctx->pc = 0x155B08u;
    // 0x155b08: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x155b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155b0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x155b0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155b10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x155b10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155b14: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x155b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155b18: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x155b18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x155b1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x155b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155b20: 0xc055700  jal         func_155C00
    ctx->pc = 0x155B20u;
    SET_GPR_U32(ctx, 31, 0x155B28u);
    ctx->pc = 0x155C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155C00u, 0x155B20u, 0x155B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B28u;
label_155b28:
    // 0x155b28: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x155b28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155b2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155b30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b34: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x155b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155b38: 0x3e00008  jr          $ra
    ctx->pc = 0x155B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B40u;
}
