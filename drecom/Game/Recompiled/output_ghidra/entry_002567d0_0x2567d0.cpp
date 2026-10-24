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

// Function: entry_002567d0
// Address: 0x2567d0 - 0x2567d8
void entry_002567d0_0x2567d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002567d0_0x2567d0");
#endif

    ctx->pc = 0x2567d0u;

    // 0x2567d0: 0x2402023c  addiu       $v0, $zero, 0x23C
    ctx->pc = 0x2567d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x2567d4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2567d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x2567d8u;
}
