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

// Function: entry_001a97f0
// Address: 0x1a97f0 - 0x1a9804
void entry_001a97f0_0x1a97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a97f0_0x1a97f0");
#endif

    ctx->pc = 0x1a97f0u;

    // 0x1a97f0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1a97f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a97f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a97f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a97f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a97f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a97fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a97fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a9804u;
}
