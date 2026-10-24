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

// Function: entry_00107a88
// Address: 0x107a88 - 0x107a8c
void entry_00107a88_0x107a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a88_0x107a88");
#endif

    ctx->pc = 0x107a88u;

    // 0x107a88: 0xacc23e38  sw          $v0, 0x3E38($a2)
    ctx->pc = 0x107a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15928), GPR_U32(ctx, 2));
    ctx->pc = 0x107a8cu;
}
