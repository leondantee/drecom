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

// Function: entry_001da848
// Address: 0x1da848 - 0x1da850
void entry_001da848_0x1da848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da848_0x1da848");
#endif

    ctx->pc = 0x1da848u;

    // 0x1da848: 0x2402023c  addiu       $v0, $zero, 0x23C
    ctx->pc = 0x1da848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x1da84c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da84cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1da850u;
}
