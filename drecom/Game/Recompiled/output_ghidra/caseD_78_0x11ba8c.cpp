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

// Function: caseD_78
// Address: 0x11ba8c - 0x11ba94
void caseD_78_0x11ba8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_78_0x11ba8c");
#endif

    ctx->pc = 0x11ba8cu;

    // 0x11ba8c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11ba90: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    ctx->pc = 0x11ba94u;
}
