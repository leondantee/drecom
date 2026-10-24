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

// Function: entry_00339b6c
// Address: 0x339b6c - 0x339b74
void entry_00339b6c_0x339b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339b6c_0x339b6c");
#endif

    ctx->pc = 0x339b6cu;

    // 0x339b6c: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21560), GPR_U32(ctx, 2));
    // 0x339b70: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339b70u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x339b74u;
}
