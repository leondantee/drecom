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

// Function: entry_0033a06c
// Address: 0x33a06c - 0x33a074
void entry_0033a06c_0x33a06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a06c_0x33a06c");
#endif

    ctx->pc = 0x33a06cu;

    // 0x33a06c: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x33a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21560), GPR_U32(ctx, 2));
    // 0x33a070: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a070u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33a074u;
}
