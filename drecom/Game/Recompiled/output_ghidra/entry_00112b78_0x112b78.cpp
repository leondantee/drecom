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

// Function: entry_00112b78
// Address: 0x112b78 - 0x112b80
void entry_00112b78_0x112b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b78_0x112b78");
#endif

    ctx->pc = 0x112b78u;

    // 0x112b78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b7c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x112b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x112b80u;
}
