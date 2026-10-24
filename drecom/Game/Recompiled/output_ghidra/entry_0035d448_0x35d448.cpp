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

// Function: entry_0035d448
// Address: 0x35d448 - 0x35d484
void entry_0035d448_0x35d448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d448_0x35d448");
#endif

    ctx->pc = 0x35d448u;

label_35d448:
    // 0x35d448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d44c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35d450: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d454: 0x21f02  srl         $v1, $v0, 28
    ctx->pc = 0x35d454u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x35d458: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x35d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35d45c: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x35D45Cu;
    {
        const bool branch_taken_0x35d45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d45c) {
            ctx->pc = 0x35D4F4u;
            return;
        }
    }
    ctx->pc = 0x35D464u;
    // 0x35d464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d468: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x35D468u;
    {
        const bool branch_taken_0x35d468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d468) {
            ctx->pc = 0x35D4D0u;
            return;
        }
    }
    ctx->pc = 0x35D470u;
    // 0x35d470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d474: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D474u;
    {
        const bool branch_taken_0x35d474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35d474) {
            ctx->pc = 0x35D484u;
            return;
        }
    }
    ctx->pc = 0x35D47Cu;
    // 0x35d47c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x35D47Cu;
    {
        const bool branch_taken_0x35d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d47c) {
            ctx->pc = 0x35D448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d448;
        }
    }
    ctx->pc = 0x35D484u;
}
