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

// Function: entry_0037c438
// Address: 0x37c438 - 0x37c440
void entry_0037c438_0x37c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c438_0x37c438");
#endif

    ctx->pc = 0x37c438u;

    // 0x37c438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c43c: 0xa06011ec  sb          $zero, 0x11EC($v1)
    ctx->pc = 0x37c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x37c440u;
}
