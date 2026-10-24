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

// Function: entry_0033f5b8
// Address: 0x33f5b8 - 0x33f5d0
void entry_0033f5b8_0x33f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033f5b8_0x33f5b8");
#endif

    ctx->pc = 0x33f5b8u;

    // 0x33f5b8: 0x92040064  lbu         $a0, 0x64($s0)
    ctx->pc = 0x33f5b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x33f5bc: 0x93a30048  lbu         $v1, 0x48($sp)
    ctx->pc = 0x33f5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33f5c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33f5c4: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x33f5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x33f5c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33F5C8u;
    {
        const bool branch_taken_0x33f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5c8) {
            ctx->pc = 0x33F618u;
            return;
        }
    }
    ctx->pc = 0x33F5D0u;
}
