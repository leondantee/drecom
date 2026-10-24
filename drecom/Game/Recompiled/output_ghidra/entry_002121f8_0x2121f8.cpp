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

// Function: entry_002121f8
// Address: 0x2121f8 - 0x212204
void entry_002121f8_0x2121f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002121f8_0x2121f8");
#endif

    ctx->pc = 0x2121f8u;

    // 0x2121f8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2121f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2121fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2121fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x212200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x212204u;
}
