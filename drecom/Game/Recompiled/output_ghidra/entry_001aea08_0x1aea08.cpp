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

// Function: entry_001aea08
// Address: 0x1aea08 - 0x1aea18
void entry_001aea08_0x1aea08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aea08_0x1aea08");
#endif

    ctx->pc = 0x1aea08u;

    // 0x1aea08: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x1aea08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1aea0c: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1aea0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aea10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1aea10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aea14: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aea14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1aea18u;
}
