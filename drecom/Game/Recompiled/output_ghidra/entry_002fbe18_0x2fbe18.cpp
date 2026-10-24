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

// Function: entry_002fbe18
// Address: 0x2fbe18 - 0x2fbe44
void entry_002fbe18_0x2fbe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbe18_0x2fbe18");
#endif

    ctx->pc = 0x2fbe18u;

    // 0x2fbe18: 0x1600ffa7  bnez        $s0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2FBE18u;
    {
        const bool branch_taken_0x2fbe18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe18) {
            ctx->pc = 0x2FBCB8u;
            return;
        }
    }
    ctx->pc = 0x2FBE20u;
    // 0x2fbe20: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x2fbe20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe24: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x2fbe24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2fbe28: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FBE28u;
    {
        const bool branch_taken_0x2fbe28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe28) {
            ctx->pc = 0x2FBE44u;
            return;
        }
    }
    ctx->pc = 0x2FBE30u;
    // 0x2fbe30: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe34: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fbe34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fbe38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbe3c: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FBE3Cu;
    {
        const bool branch_taken_0x2fbe3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fbe3c) {
            ctx->pc = 0x2FBE68u;
            return;
        }
    }
    ctx->pc = 0x2FBE44u;
}
