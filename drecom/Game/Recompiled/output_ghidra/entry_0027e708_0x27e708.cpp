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

// Function: entry_0027e708
// Address: 0x27e708 - 0x27e70c
void entry_0027e708_0x27e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e708_0x27e708");
#endif

    ctx->pc = 0x27e708u;

    // 0x27e708: 0xa023d9b1  sb          $v1, -0x264F($at)
    ctx->pc = 0x27e708u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957489), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x27e70cu;
}
