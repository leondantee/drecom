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

// Function: entry_0013889c
// Address: 0x13889c - 0x1388b0
void entry_0013889c_0x13889c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013889c_0x13889c");
#endif

    ctx->pc = 0x13889cu;

    // 0x13889c: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x13889cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x1388a0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1388a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1388a4: 0xa266009a  sb          $a2, 0x9A($s3)
    ctx->pc = 0x1388a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 6));
    // 0x1388a8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1388A8u;
    {
        const bool branch_taken_0x1388a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388a8) {
            ctx->pc = 0x1389B0u;
            return;
        }
    }
    ctx->pc = 0x1388B0u;
}
