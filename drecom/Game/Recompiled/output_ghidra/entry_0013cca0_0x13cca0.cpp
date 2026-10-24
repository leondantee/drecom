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

// Function: entry_0013cca0
// Address: 0x13cca0 - 0x13cca8
void entry_0013cca0_0x13cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cca0_0x13cca0");
#endif

    ctx->pc = 0x13cca0u;

    // 0x13cca0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13cca4: 0x0  nop
    ctx->pc = 0x13cca4u;
    // NOP
    ctx->pc = 0x13cca8u;
}
