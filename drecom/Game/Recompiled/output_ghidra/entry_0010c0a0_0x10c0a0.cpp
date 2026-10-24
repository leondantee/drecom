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

// Function: entry_0010c0a0
// Address: 0x10c0a0 - 0x10c0a8
void entry_0010c0a0_0x10c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c0a0_0x10c0a0");
#endif

    ctx->pc = 0x10c0a0u;

    // 0x10c0a0: 0xac404560  sw          $zero, 0x4560($v0)
    ctx->pc = 0x10c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17760), GPR_U32(ctx, 0));
    // 0x10c0a4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x10c0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10c0a8u;
}
