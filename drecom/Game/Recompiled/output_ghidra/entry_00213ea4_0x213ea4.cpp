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

// Function: entry_00213ea4
// Address: 0x213ea4 - 0x213ea8
void entry_00213ea4_0x213ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213ea4_0x213ea4");
#endif

    ctx->pc = 0x213ea4u;

    // 0x213ea4: 0x24840f28  addiu       $a0, $a0, 0xF28
    ctx->pc = 0x213ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3880));
    ctx->pc = 0x213ea8u;
}
