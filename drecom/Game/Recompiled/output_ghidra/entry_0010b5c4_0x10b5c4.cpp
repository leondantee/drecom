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

// Function: entry_0010b5c4
// Address: 0x10b5c4 - 0x10b5c8
void entry_0010b5c4_0x10b5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b5c4_0x10b5c4");
#endif

    ctx->pc = 0x10b5c4u;

    // 0x10b5c4: 0xad673d38  sw          $a3, 0x3D38($t3)
    ctx->pc = 0x10b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 15672), GPR_U32(ctx, 7));
    ctx->pc = 0x10b5c8u;
}
