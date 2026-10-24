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

// Function: entry_00266ce8
// Address: 0x266ce8 - 0x266cf0
void entry_00266ce8_0x266ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266ce8_0x266ce8");
#endif

    ctx->pc = 0x266ce8u;

    // 0x266ce8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x266ce8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266cec: 0x0  nop
    ctx->pc = 0x266cecu;
    // NOP
    ctx->pc = 0x266cf0u;
}
