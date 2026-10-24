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

// Function: entry_00117cd4
// Address: 0x117cd4 - 0x117cd8
void entry_00117cd4_0x117cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117cd4_0x117cd4");
#endif

    ctx->pc = 0x117cd4u;

    // 0x117cd4: 0x2662d9f0  addiu       $v0, $s3, -0x2610
    ctx->pc = 0x117cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957552));
    ctx->pc = 0x117cd8u;
}
