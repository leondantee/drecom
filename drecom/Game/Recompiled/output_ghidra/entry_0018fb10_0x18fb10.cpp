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

// Function: entry_0018fb10
// Address: 0x18fb10 - 0x18fb34
void entry_0018fb10_0x18fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fb10_0x18fb10");
#endif

    ctx->pc = 0x18fb10u;

    // 0x18fb10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18fb14: 0x8c370af0  lw          $s7, 0xAF0($at)
    ctx->pc = 0x18fb14u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18fb18: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x18fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x18fb1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FB1Cu;
    {
        const bool branch_taken_0x18fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb1c) {
            ctx->pc = 0x18FB34u;
            return;
        }
    }
    ctx->pc = 0x18FB24u;
    // 0x18fb24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18fb28: 0x2456df50  addiu       $s6, $v0, -0x20B0
    ctx->pc = 0x18fb28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x18fb2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18FB2Cu;
    {
        const bool branch_taken_0x18fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb2c) {
            ctx->pc = 0x18FB3Cu;
            return;
        }
    }
    ctx->pc = 0x18FB34u;
}
