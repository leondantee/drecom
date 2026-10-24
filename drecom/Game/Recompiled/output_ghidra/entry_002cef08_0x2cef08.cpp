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

// Function: entry_002cef08
// Address: 0x2cef08 - 0x2cef14
void entry_002cef08_0x2cef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cef08_0x2cef08");
#endif

    ctx->pc = 0x2cef08u;

    // 0x2cef08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2cef08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cef0c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2CEF0Cu;
    {
        const bool branch_taken_0x2cef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef0c) {
            ctx->pc = 0x2CF018u;
            return;
        }
    }
    ctx->pc = 0x2CEF14u;
}
