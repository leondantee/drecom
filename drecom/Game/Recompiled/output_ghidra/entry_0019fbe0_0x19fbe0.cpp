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

// Function: entry_0019fbe0
// Address: 0x19fbe0 - 0x19fbe4
void entry_0019fbe0_0x19fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbe0_0x19fbe0");
#endif

    ctx->pc = 0x19fbe0u;

    // 0x19fbe0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x19fbe0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x19fbe4u;
}
