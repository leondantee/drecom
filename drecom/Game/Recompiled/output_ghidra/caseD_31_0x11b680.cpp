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

// Function: caseD_31
// Address: 0x11b680 - 0x11b688
void caseD_31_0x11b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_31_0x11b680");
#endif

    ctx->pc = 0x11b680u;

    // 0x11b680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11b680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b684: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x11b688u;
}
