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

// Function: entry_00194258
// Address: 0x194258 - 0x194260
void entry_00194258_0x194258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194258_0x194258");
#endif

    ctx->pc = 0x194258u;

    // 0x194258: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x194258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19425c: 0x0  nop
    ctx->pc = 0x19425cu;
    // NOP
    ctx->pc = 0x194260u;
}
