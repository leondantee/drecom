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

// Function: entry_0010ec00
// Address: 0x10ec00 - 0x10ec24
void entry_0010ec00_0x10ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ec00_0x10ec00");
#endif

    ctx->pc = 0x10ec00u;

label_10ec00:
    // 0x10ec00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10ec04: 0x0  nop
    ctx->pc = 0x10ec04u;
    // NOP
    // 0x10ec08: 0x0  nop
    ctx->pc = 0x10ec08u;
    // NOP
    // 0x10ec0c: 0x0  nop
    ctx->pc = 0x10ec0cu;
    // NOP
    // 0x10ec10: 0x0  nop
    ctx->pc = 0x10ec10u;
    // NOP
    // 0x10ec14: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10EC14u;
    {
        const bool branch_taken_0x10ec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ec14) {
            ctx->pc = 0x10EC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ec00;
        }
    }
    ctx->pc = 0x10EC1Cu;
    // 0x10ec1c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x10EC1Cu;
    {
        const bool branch_taken_0x10ec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec1c) {
            ctx->pc = 0x10EBC0u;
            return;
        }
    }
    ctx->pc = 0x10EC24u;
}
