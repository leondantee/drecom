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

// Function: entry_00264938
// Address: 0x264938 - 0x264948
void entry_00264938_0x264938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264938_0x264938");
#endif

    ctx->pc = 0x264938u;

    // 0x264938: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x264938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x26493c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x264940: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x264940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x264944: 0x0  nop
    ctx->pc = 0x264944u;
    // NOP
    ctx->pc = 0x264948u;
}
