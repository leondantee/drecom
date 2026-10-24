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

// Function: entry_0033f66c
// Address: 0x33f66c - 0x33f684
void entry_0033f66c_0x33f66c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f66c_0x33f66c");
#endif

    ctx->pc = 0x33f66cu;

    // 0x33f66c: 0x92040068  lbu         $a0, 0x68($s0)
    ctx->pc = 0x33f66cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x33f670: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f674: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f678: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x33f678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f67c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F67Cu;
    {
        const bool branch_taken_0x33f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f67c) {
            ctx->pc = 0x33F6CCu;
            return;
        }
    }
    ctx->pc = 0x33F684u;
}
