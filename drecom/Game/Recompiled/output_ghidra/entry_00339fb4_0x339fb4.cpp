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

// Function: entry_00339fb4
// Address: 0x339fb4 - 0x339fbc
void entry_00339fb4_0x339fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339fb4_0x339fb4");
#endif

    ctx->pc = 0x339fb4u;

    // 0x339fb4: 0xac225438  sw          $v0, 0x5438($at)
    ctx->pc = 0x339fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21560), GPR_U32(ctx, 2));
    // 0x339fb8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x339fb8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x339fbcu;
}
