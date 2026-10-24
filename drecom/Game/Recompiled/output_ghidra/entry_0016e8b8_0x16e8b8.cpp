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

// Function: entry_0016e8b8
// Address: 0x16e8b8 - 0x16e8c8
void entry_0016e8b8_0x16e8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e8b8_0x16e8b8");
#endif

    ctx->pc = 0x16e8b8u;

    // 0x16e8b8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x16e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16e8bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16e8c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16e8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16e8c4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x16e8c8u;
}
