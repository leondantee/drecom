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

// Function: Set_Fire
// Address: 0x31b190 - 0x31b25c
void Set_Fire_0x31b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_Fire_0x31b190");
#endif

    switch (ctx->pc) {
        case 0x31b1b0u: goto label_31b1b0;
        default: break;
    }

    ctx->pc = 0x31b190u;

    // 0x31b190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b194: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31b198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31b198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31b19c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x31b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x31b1a0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x31b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x31b1a4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x31b1a4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31b1a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31B1A8u;
    {
        const bool branch_taken_0x31b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b1a8) {
            ctx->pc = 0x31B1F0u;
            goto label_31b1f0;
        }
    }
    ctx->pc = 0x31B1B0u;
label_31b1b0:
    // 0x31b1b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x31b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31b1b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b1b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b1bc: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x31b1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x31b1c0: 0x8e041338  lw          $a0, 0x1338($s0)
    ctx->pc = 0x31b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x31b1c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b1c8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B1C8u;
    {
        const bool branch_taken_0x31b1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31b1c8) {
            ctx->pc = 0x31B1E8u;
            goto label_31b1e8;
        }
    }
    ctx->pc = 0x31B1D0u;
    // 0x31b1d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x31b1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b1d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31b1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31b1d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b1dc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B1DCu;
    {
        const bool branch_taken_0x31b1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b1dc) {
            ctx->pc = 0x31B200u;
            goto label_31b200;
        }
    }
    ctx->pc = 0x31B1E4u;
    // 0x31b1e4: 0x0  nop
    ctx->pc = 0x31b1e4u;
    // NOP
label_31b1e8:
    // 0x31b1e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31b1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31b1ec: 0x0  nop
    ctx->pc = 0x31b1ecu;
    // NOP
label_31b1f0:
    // 0x31b1f0: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x31b1f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b1f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x31B1F4u;
    {
        const bool branch_taken_0x31b1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b1f4) {
            ctx->pc = 0x31B1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b1b0;
        }
    }
    ctx->pc = 0x31B1FCu;
    // 0x31b1fc: 0x0  nop
    ctx->pc = 0x31b1fcu;
    // NOP
label_31b200:
    // 0x31b200: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x31b200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b204: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B204u;
    {
        const bool branch_taken_0x31b204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b204) {
            ctx->pc = 0x31B248u;
            goto label_31b248;
        }
    }
    ctx->pc = 0x31B20Cu;
    // 0x31b20c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b210: 0xae0312a4  sw          $v1, 0x12A4($s0)
    ctx->pc = 0x31b210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 3));
    // 0x31b214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b218: 0xae031298  sw          $v1, 0x1298($s0)
    ctx->pc = 0x31b218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 3));
    // 0x31b21c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b220: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31b220u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b224: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x31b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x31b228: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31b228u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31b22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b230: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x31b230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b238: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x31b238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b23c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b240: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b244: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31b244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_31b248:
    // 0x31b248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31b248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31b24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b250: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31b254: 0x3e00008  jr          $ra
    ctx->pc = 0x31B254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B25Cu;
}
