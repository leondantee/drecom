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

// Function: entry_00110630
// Address: 0x110630 - 0x110638
void entry_00110630_0x110630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110630_0x110630");
#endif

    ctx->pc = 0x110630u;

    // 0x110630: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x110630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x110634: 0x0  nop
    ctx->pc = 0x110634u;
    // NOP
    ctx->pc = 0x110638u;
}
