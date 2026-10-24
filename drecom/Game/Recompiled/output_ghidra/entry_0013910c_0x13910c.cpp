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

// Function: entry_0013910c
// Address: 0x13910c - 0x139120
void entry_0013910c_0x13910c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013910c_0x13910c");
#endif

    ctx->pc = 0x13910cu;

    // 0x13910c: 0x9263009a  lbu         $v1, 0x9A($s3)
    ctx->pc = 0x13910cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 154)));
    // 0x139110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139114: 0xa263009a  sb          $v1, 0x9A($s3)
    ctx->pc = 0x139114u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x139118: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x139118u;
    {
        const bool branch_taken_0x139118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139118) {
            ctx->pc = 0x139218u;
            return;
        }
    }
    ctx->pc = 0x139120u;
}
