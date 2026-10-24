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

// Function: entry_0033ac8c
// Address: 0x33ac8c - 0x33acbc
void entry_0033ac8c_0x33ac8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ac8c_0x33ac8c");
#endif

    ctx->pc = 0x33ac8cu;

    // 0x33ac8c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x33ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x33ac90: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AC90u;
    {
        const bool branch_taken_0x33ac90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ac90) {
            ctx->pc = 0x33ACBCu;
            return;
        }
    }
    ctx->pc = 0x33AC98u;
    // 0x33ac98: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33ac9c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AC9Cu;
    {
        const bool branch_taken_0x33ac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33ac9c) {
            ctx->pc = 0x33ACBCu;
            return;
        }
    }
    ctx->pc = 0x33ACA4u;
    // 0x33aca4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x33aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x33aca8: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33ACA8u;
    {
        const bool branch_taken_0x33aca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aca8) {
            ctx->pc = 0x33ACBCu;
            return;
        }
    }
    ctx->pc = 0x33ACB0u;
    // 0x33acb0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x33acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33acb4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33ACB4u;
    {
        const bool branch_taken_0x33acb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33acb4) {
            ctx->pc = 0x33ACD8u;
            return;
        }
    }
    ctx->pc = 0x33ACBCu;
}
