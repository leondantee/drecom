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

// Function: entry_0016ede0
// Address: 0x16ede0 - 0x16ede8
void entry_0016ede0_0x16ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ede0_0x16ede0");
#endif

    ctx->pc = 0x16ede0u;

    // 0x16ede0: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x16ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x16ede4: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x16ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->pc = 0x16ede8u;
}
