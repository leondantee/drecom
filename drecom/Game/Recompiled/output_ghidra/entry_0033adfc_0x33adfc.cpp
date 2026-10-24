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

// Function: entry_0033adfc
// Address: 0x33adfc - 0x33ae2c
void entry_0033adfc_0x33adfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033adfc_0x33adfc");
#endif

    ctx->pc = 0x33adfcu;

    // 0x33adfc: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x33adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x33ae00: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AE00u;
    {
        const bool branch_taken_0x33ae00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae00) {
            ctx->pc = 0x33AE2Cu;
            return;
        }
    }
    ctx->pc = 0x33AE08u;
    // 0x33ae08: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x33ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33ae0c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AE0Cu;
    {
        const bool branch_taken_0x33ae0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae0c) {
            ctx->pc = 0x33AE2Cu;
            return;
        }
    }
    ctx->pc = 0x33AE14u;
    // 0x33ae14: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x33ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x33ae18: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AE18u;
    {
        const bool branch_taken_0x33ae18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ae18) {
            ctx->pc = 0x33AE2Cu;
            return;
        }
    }
    ctx->pc = 0x33AE20u;
    // 0x33ae20: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x33ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x33ae24: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AE24u;
    {
        const bool branch_taken_0x33ae24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ae24) {
            ctx->pc = 0x33AE5Cu;
            return;
        }
    }
    ctx->pc = 0x33AE2Cu;
}
