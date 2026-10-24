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

// Function: entry_002a9348
// Address: 0x2a9348 - 0x2a9368
void entry_002a9348_0x2a9348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9348_0x2a9348");
#endif

    ctx->pc = 0x2a9348u;

    // 0x2a9348: 0x920310a8  lbu         $v1, 0x10A8($s0)
    ctx->pc = 0x2a9348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x2a934c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2A934Cu;
    {
        const bool branch_taken_0x2a934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a934c) {
            ctx->pc = 0x2A9454u;
            return;
        }
    }
    ctx->pc = 0x2A9354u;
    // 0x2a9354: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a9354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9358: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a935c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a935cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9360: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A9360u;
    {
        const bool branch_taken_0x2a9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9360) {
            ctx->pc = 0x2A9454u;
            return;
        }
    }
    ctx->pc = 0x2A9368u;
}
