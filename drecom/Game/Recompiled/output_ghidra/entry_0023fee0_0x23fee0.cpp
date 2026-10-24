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

// Function: entry_0023fee0
// Address: 0x23fee0 - 0x23ff2c
void entry_0023fee0_0x23fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fee0_0x23fee0");
#endif

    ctx->pc = 0x23fee0u;

    // 0x23fee0: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x23fee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fee4: 0x912a0001  lbu         $t2, 0x1($t1)
    ctx->pc = 0x23fee4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x23fee8: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x23fee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x23feec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23fef0: 0x10a6045b  beq         $a1, $a2, . + 4 + (0x45B << 2)
    ctx->pc = 0x23FEF0u;
    {
        const bool branch_taken_0x23fef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x23fef0) {
            ctx->pc = 0x241060u;
            return;
        }
    }
    ctx->pc = 0x23FEF8u;
    // 0x23fef8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23fef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23fefc: 0x10a70452  beq         $a1, $a3, . + 4 + (0x452 << 2)
    ctx->pc = 0x23FEFCu;
    {
        const bool branch_taken_0x23fefc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x23fefc) {
            ctx->pc = 0x241048u;
            return;
        }
    }
    ctx->pc = 0x23FF04u;
    // 0x23ff04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ff08: 0x10a80482  beq         $a1, $t0, . + 4 + (0x482 << 2)
    ctx->pc = 0x23FF08u;
    {
        const bool branch_taken_0x23ff08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x23ff08) {
            ctx->pc = 0x241114u;
            return;
        }
    }
    ctx->pc = 0x23FF10u;
    // 0x23ff10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x23ff10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ff14: 0x10a9041f  beq         $a1, $t1, . + 4 + (0x41F << 2)
    ctx->pc = 0x23FF14u;
    {
        const bool branch_taken_0x23ff14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x23ff14) {
            ctx->pc = 0x240F94u;
            return;
        }
    }
    ctx->pc = 0x23FF1Cu;
    // 0x23ff1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FF1Cu;
    {
        const bool branch_taken_0x23ff1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff1c) {
            ctx->pc = 0x23FF2Cu;
            return;
        }
    }
    ctx->pc = 0x23FF24u;
    // 0x23ff24: 0x1000047b  b           . + 4 + (0x47B << 2)
    ctx->pc = 0x23FF24u;
    {
        const bool branch_taken_0x23ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ff24) {
            ctx->pc = 0x241114u;
            return;
        }
    }
    ctx->pc = 0x23FF2Cu;
}
