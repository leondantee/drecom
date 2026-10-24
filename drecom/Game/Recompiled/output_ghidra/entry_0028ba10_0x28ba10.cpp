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

// Function: entry_0028ba10
// Address: 0x28ba10 - 0x28ba30
void entry_0028ba10_0x28ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ba10_0x28ba10");
#endif

    ctx->pc = 0x28ba10u;

    // 0x28ba10: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28ba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28ba14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba18: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x28BA18u;
    {
        const bool branch_taken_0x28ba18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ba18) {
            ctx->pc = 0x28BC2Cu;
            return;
        }
    }
    ctx->pc = 0x28BA20u;
    // 0x28ba20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA20u;
    {
        const bool branch_taken_0x28ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba20) {
            ctx->pc = 0x28BA30u;
            return;
        }
    }
    ctx->pc = 0x28BA28u;
    // 0x28ba28: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x28BA28u;
    {
        const bool branch_taken_0x28ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba28) {
            ctx->pc = 0x28BD60u;
            return;
        }
    }
    ctx->pc = 0x28BA30u;
}
