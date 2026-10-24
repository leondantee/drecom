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

// Function: entry_0018fc64
// Address: 0x18fc64 - 0x18fc6c
void entry_0018fc64_0x18fc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc64_0x18fc64");
#endif

    ctx->pc = 0x18fc64u;

    // 0x18fc64: 0x122982  srl         $a1, $s2, 6
    ctx->pc = 0x18fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 6));
    // 0x18fc68: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x18fc68u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18fc6cu;
}
