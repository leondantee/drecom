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

// Function: entry_00110820
// Address: 0x110820 - 0x110828
void entry_00110820_0x110820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110820_0x110820");
#endif

    ctx->pc = 0x110820u;

    // 0x110820: 0xae624618  sw          $v0, 0x4618($s3)
    ctx->pc = 0x110820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17944), GPR_U32(ctx, 2));
    // 0x110824: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110828u;
}
