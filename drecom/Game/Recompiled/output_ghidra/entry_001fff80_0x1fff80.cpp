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

// Function: entry_001fff80
// Address: 0x1fff80 - 0x1fff88
void entry_001fff80_0x1fff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fff80_0x1fff80");
#endif

    ctx->pc = 0x1fff80u;

    // 0x1fff80: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1fff84: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x1fff84u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1fff88u;
}
