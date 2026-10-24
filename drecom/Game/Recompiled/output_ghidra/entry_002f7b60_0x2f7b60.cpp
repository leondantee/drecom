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

// Function: entry_002f7b60
// Address: 0x2f7b60 - 0x2f7b68
void entry_002f7b60_0x2f7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7b60_0x2f7b60");
#endif

    ctx->pc = 0x2f7b60u;

    // 0x2f7b60: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x2f7b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f7b64: 0x7240f628  paddub      $fp, $s2, $zero
    ctx->pc = 0x2f7b64u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f7b68u;
}
