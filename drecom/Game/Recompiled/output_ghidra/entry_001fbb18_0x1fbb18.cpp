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

// Function: entry_001fbb18
// Address: 0x1fbb18 - 0x1fbb20
void entry_001fbb18_0x1fbb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb18_0x1fbb18");
#endif

    ctx->pc = 0x1fbb18u;

    // 0x1fbb18: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fbb1c: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1fbb1cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1fbb20u;
}
