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

// Function: entry_001debf0
// Address: 0x1debf0 - 0x1dec08
void entry_001debf0_0x1debf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001debf0_0x1debf0");
#endif

    ctx->pc = 0x1debf0u;

    // 0x1debf0: 0x9643001c  lhu         $v1, 0x1C($s2)
    ctx->pc = 0x1debf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1debf4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEBF4u;
    {
        const bool branch_taken_0x1debf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1debf4) {
            ctx->pc = 0x1DEC08u;
            return;
        }
    }
    ctx->pc = 0x1DEBFCu;
    // 0x1debfc: 0xfe600010  sd          $zero, 0x10($s3)
    ctx->pc = 0x1debfcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 0));
    // 0x1dec00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DEC00u;
    {
        const bool branch_taken_0x1dec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec00) {
            ctx->pc = 0x1DEC50u;
            return;
        }
    }
    ctx->pc = 0x1DEC08u;
}
