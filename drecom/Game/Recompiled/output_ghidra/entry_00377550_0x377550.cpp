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

// Function: entry_00377550
// Address: 0x377550 - 0x377554
void entry_00377550_0x377550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377550_0x377550");
#endif

    ctx->pc = 0x377550u;

    // 0x377550: 0xac3002a0  sw          $s0, 0x2A0($at)
    ctx->pc = 0x377550u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 672), GPR_U32(ctx, 16));
    ctx->pc = 0x377554u;
}
