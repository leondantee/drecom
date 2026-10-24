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

// Function: caseD_10
// Address: 0x296524 - 0x296530
void caseD_10_0x296524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x296524");
#endif

    ctx->pc = 0x296524u;

    // 0x296524: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x296524u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296528: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29652c: 0x0  nop
    ctx->pc = 0x29652cu;
    // NOP
    ctx->pc = 0x296530u;
}
