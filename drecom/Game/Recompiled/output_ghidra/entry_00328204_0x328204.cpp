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

// Function: entry_00328204
// Address: 0x328204 - 0x328220
void entry_00328204_0x328204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328204_0x328204");
#endif

    ctx->pc = 0x328204u;

    // 0x328204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x328204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328208: 0x8c830274  lw          $v1, 0x274($a0)
    ctx->pc = 0x328208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x32820c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328210: 0xac830274  sw          $v1, 0x274($a0)
    ctx->pc = 0x328210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
    // 0x328214: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x328214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328218: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x328218u;
    {
        const bool branch_taken_0x328218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328218) {
            ctx->pc = 0x3282D8u;
            return;
        }
    }
    ctx->pc = 0x328220u;
}
