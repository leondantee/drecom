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

// Function: entry_002f7a08
// Address: 0x2f7a08 - 0x2f7a10
void entry_002f7a08_0x2f7a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7a08_0x2f7a08");
#endif

    ctx->pc = 0x2f7a08u;

    // 0x2f7a08: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f7a08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7a0c: 0x7140be28  paddub      $s7, $t2, $zero
    ctx->pc = 0x2f7a0cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2f7a10u;
}
