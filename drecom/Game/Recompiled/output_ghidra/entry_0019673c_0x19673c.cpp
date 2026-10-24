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

// Function: entry_0019673c
// Address: 0x19673c - 0x196748
void entry_0019673c_0x19673c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019673c_0x19673c");
#endif

    ctx->pc = 0x19673cu;

    // 0x19673c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x19673cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x196740: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x196740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x196744: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x196744u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x196748u;
}
