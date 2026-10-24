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

// Function: entry_0016ee08
// Address: 0x16ee08 - 0x16ee10
void entry_0016ee08_0x16ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee08_0x16ee08");
#endif

    ctx->pc = 0x16ee08u;

    // 0x16ee08: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x16ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x16ee0c: 0x0  nop
    ctx->pc = 0x16ee0cu;
    // NOP
    ctx->pc = 0x16ee10u;
}
