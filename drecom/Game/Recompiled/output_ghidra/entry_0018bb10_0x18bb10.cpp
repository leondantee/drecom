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

// Function: entry_0018bb10
// Address: 0x18bb10 - 0x18bb28
void entry_0018bb10_0x18bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb10_0x18bb10");
#endif

    ctx->pc = 0x18bb10u;

    // 0x18bb10: 0x2e4300a8  sltiu       $v1, $s2, 0xA8
    ctx->pc = 0x18bb10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)168) ? 1 : 0);
    // 0x18bb14: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x18BB14u;
    {
        const bool branch_taken_0x18bb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb14) {
            ctx->pc = 0x18BADCu;
            return;
        }
    }
    ctx->pc = 0x18BB1Cu;
    // 0x18bb1c: 0x8e710078  lw          $s1, 0x78($s3)
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x18bb20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18BB20u;
    {
        const bool branch_taken_0x18bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb20) {
            ctx->pc = 0x18BB50u;
            return;
        }
    }
    ctx->pc = 0x18BB28u;
}
