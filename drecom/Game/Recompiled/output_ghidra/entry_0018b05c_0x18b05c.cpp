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

// Function: entry_0018b05c
// Address: 0x18b05c - 0x18b080
void entry_0018b05c_0x18b05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b05c_0x18b05c");
#endif

    ctx->pc = 0x18b05cu;

    // 0x18b05c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x18b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18b060: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x18b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18b064: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18B064u;
    {
        const bool branch_taken_0x18b064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b064) {
            ctx->pc = 0x18B090u;
            return;
        }
    }
    ctx->pc = 0x18B06Cu;
    // 0x18b06c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b070: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B070u;
    {
        const bool branch_taken_0x18b070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b070) {
            ctx->pc = 0x18B080u;
            return;
        }
    }
    ctx->pc = 0x18B078u;
    // 0x18b078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B078u;
    {
        const bool branch_taken_0x18b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b078) {
            ctx->pc = 0x18B098u;
            return;
        }
    }
    ctx->pc = 0x18B080u;
}
