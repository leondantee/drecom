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

// Function: entry_0032cd14
// Address: 0x32cd14 - 0x32cd1c
void entry_0032cd14_0x32cd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032cd14_0x32cd14");
#endif

    ctx->pc = 0x32cd14u;

    // 0x32cd14: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x32cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x32cd18: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x32cd18u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32cd1cu;
}
