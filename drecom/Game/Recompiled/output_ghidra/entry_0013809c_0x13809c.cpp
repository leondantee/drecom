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

// Function: entry_0013809c
// Address: 0x13809c - 0x1380b0
void entry_0013809c_0x13809c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013809c_0x13809c");
#endif

    ctx->pc = 0x13809cu;

    // 0x13809c: 0x9274009a  lbu         $s4, 0x9A($s3)
    ctx->pc = 0x13809cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x1380a0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1380a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1380a4: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x1380a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x1380a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1380A8u;
    {
        const bool branch_taken_0x1380a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1380a8) {
            ctx->pc = 0x138110u;
            return;
        }
    }
    ctx->pc = 0x1380B0u;
}
