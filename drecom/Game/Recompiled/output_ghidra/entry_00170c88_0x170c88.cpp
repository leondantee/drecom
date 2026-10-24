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

// Function: entry_00170c88
// Address: 0x170c88 - 0x170c90
void entry_00170c88_0x170c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c88_0x170c88");
#endif

    ctx->pc = 0x170c88u;

    // 0x170c88: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x170c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
    // 0x170c8c: 0x0  nop
    ctx->pc = 0x170c8cu;
    // NOP
    ctx->pc = 0x170c90u;
}
