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

// Function: entry_001004ac
// Address: 0x1004ac - 0x1004b4
void entry_001004ac_0x1004ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001004ac_0x1004ac");
#endif

    ctx->pc = 0x1004acu;

    // 0x1004ac: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1004acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1004b0: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1004b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    ctx->pc = 0x1004b4u;
}
