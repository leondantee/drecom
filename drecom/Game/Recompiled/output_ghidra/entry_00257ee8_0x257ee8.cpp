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

// Function: entry_00257ee8
// Address: 0x257ee8 - 0x257ef0
void entry_00257ee8_0x257ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257ee8_0x257ee8");
#endif

    ctx->pc = 0x257ee8u;

    // 0x257ee8: 0x2444e510  addiu       $a0, $v0, -0x1AF0
    ctx->pc = 0x257ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x257eec: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x257eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->pc = 0x257ef0u;
}
