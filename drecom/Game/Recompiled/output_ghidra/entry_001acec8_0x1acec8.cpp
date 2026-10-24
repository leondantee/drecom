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

// Function: entry_001acec8
// Address: 0x1acec8 - 0x1aced0
void entry_001acec8_0x1acec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acec8_0x1acec8");
#endif

    ctx->pc = 0x1acec8u;

    // 0x1acec8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1acec8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1acecc: 0x0  nop
    ctx->pc = 0x1aceccu;
    // NOP
    ctx->pc = 0x1aced0u;
}
