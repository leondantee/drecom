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

// Function: entry_001a2618
// Address: 0x1a2618 - 0x1a261c
void entry_001a2618_0x1a2618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2618_0x1a2618");
#endif

    ctx->pc = 0x1a2618u;

    // 0x1a2618: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x1a2618u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a261cu;
}
