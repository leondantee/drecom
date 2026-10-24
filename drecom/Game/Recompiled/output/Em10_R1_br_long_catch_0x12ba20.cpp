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

// Function: Em10_R1_br_long_catch
// Address: 0x12ba20 - 0x12bb58
void Em10_R1_br_long_catch_0x12ba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_long_catch_0x12ba20");
#endif

    switch (ctx->pc) {
        case 0x12ba58u: goto label_12ba58;
        default: break;
    }

    ctx->pc = 0x12ba20u;

    // 0x12ba20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ba24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x12ba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x12ba28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12ba2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba30: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x12ba30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12ba34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12ba34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12ba38: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12ba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12ba3c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x12BA3Cu;
    {
        const bool branch_taken_0x12ba3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba3c) {
            ctx->pc = 0x12BAE8u;
            goto label_12bae8;
        }
    }
    ctx->pc = 0x12BA44u;
    // 0x12ba44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba48: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x12ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x12ba4c: 0x24454e60  addiu       $a1, $v0, 0x4E60
    ctx->pc = 0x12ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20064));
    // 0x12ba50: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x12BA50u;
    SET_GPR_U32(ctx, 31, 0x12BA58u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x12BA50u, 0x12BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BA58u;
label_12ba58:
    // 0x12ba58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ba5c: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12BA5Cu;
    {
        const bool branch_taken_0x12ba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ba5c) {
            ctx->pc = 0x12BAB0u;
            goto label_12bab0;
        }
    }
    ctx->pc = 0x12BA64u;
    // 0x12ba64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba68: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BA68u;
    {
        const bool branch_taken_0x12ba68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ba68) {
            ctx->pc = 0x12BA78u;
            goto label_12ba78;
        }
    }
    ctx->pc = 0x12BA70u;
    // 0x12ba70: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12BA70u;
    {
        const bool branch_taken_0x12ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ba70) {
            ctx->pc = 0x12BAE8u;
            goto label_12bae8;
        }
    }
    ctx->pc = 0x12BA78u;
label_12ba78:
    // 0x12ba78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ba78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ba7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ba80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ba84: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12ba88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ba8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ba90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ba94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ba98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ba9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ba9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12baa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12baa4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12baa8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12BAA8u;
    {
        const bool branch_taken_0x12baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12baa8) {
            ctx->pc = 0x12BB48u;
            goto label_12bb48;
        }
    }
    ctx->pc = 0x12BAB0u;
label_12bab0:
    // 0x12bab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bab4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bab8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12bab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12babc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x12babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x12bac0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bac4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bacc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12baccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bad0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bad4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bad8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12badc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12badcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12bae0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12BB48u;
            goto label_12bb48;
        }
    }
    ctx->pc = 0x12BAE8u;
label_12bae8:
    // 0x12bae8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12baec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12baecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12baf0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12baf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12baf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12baf8: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12BAF8u;
    {
        const bool branch_taken_0x12baf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12baf8) {
            ctx->pc = 0x12BB48u;
            goto label_12bb48;
        }
    }
    ctx->pc = 0x12BB00u;
    // 0x12bb00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12bb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12bb08: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12BB08u;
    {
        const bool branch_taken_0x12bb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb08) {
            ctx->pc = 0x12BB48u;
            goto label_12bb48;
        }
    }
    ctx->pc = 0x12BB10u;
    // 0x12bb10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bb14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12bb18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bb1c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x12bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12bb20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12bb24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12bb28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12bb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bb30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12bb38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bb3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12bb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12bb40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12BB40u;
    {
        const bool branch_taken_0x12bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bb40) {
            ctx->pc = 0x12BB48u;
            goto label_12bb48;
        }
    }
    ctx->pc = 0x12BB48u;
label_12bb48:
    // 0x12bb48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x12bb48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12bb4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12bb50: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB58u;
}
