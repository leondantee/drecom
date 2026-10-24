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

// Function: entry_00188298
// Address: 0x188298 - 0x1882a0
void entry_00188298_0x188298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188298_0x188298");
#endif

    ctx->pc = 0x188298u;

    // 0x188298: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x18829c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18829cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1882a0u;
}
