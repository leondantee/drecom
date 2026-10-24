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

// Function: entry_0032df24
// Address: 0x32df24 - 0x32df2c
void entry_0032df24_0x32df24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032df24_0x32df24");
#endif

    ctx->pc = 0x32df24u;

    // 0x32df24: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x32df24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x32df28: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x32df28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32df2cu;
}
