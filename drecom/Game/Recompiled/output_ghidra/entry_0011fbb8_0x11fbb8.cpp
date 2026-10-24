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

// Function: entry_0011fbb8
// Address: 0x11fbb8 - 0x11fbbc
void entry_0011fbb8_0x11fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fbb8_0x11fbb8");
#endif

    ctx->pc = 0x11fbb8u;

    // 0x11fbb8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x11fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    ctx->pc = 0x11fbbcu;
}
