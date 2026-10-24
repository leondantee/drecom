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

// Function: entry_00108d88
// Address: 0x108d88 - 0x108d90
void entry_00108d88_0x108d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108d88_0x108d88");
#endif

    ctx->pc = 0x108d88u;

    // 0x108d88: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x108d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x108d8c: 0x0  nop
    ctx->pc = 0x108d8cu;
    // NOP
    ctx->pc = 0x108d90u;
}
