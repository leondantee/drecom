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

// Function: entry_00254108
// Address: 0x254108 - 0x25411c
void entry_00254108_0x254108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254108_0x254108");
#endif

    ctx->pc = 0x254108u;

    // 0x254108: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x254108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25410c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x25410cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x254110: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x254110u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254114: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x254114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x254118: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x254118u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x25411cu;
}
