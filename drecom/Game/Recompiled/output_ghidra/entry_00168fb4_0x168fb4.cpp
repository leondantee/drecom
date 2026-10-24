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

// Function: entry_00168fb4
// Address: 0x168fb4 - 0x168fc4
void entry_00168fb4_0x168fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fb4_0x168fb4");
#endif

    ctx->pc = 0x168fb4u;

    // 0x168fb4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168fb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168fb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168fbc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168fc0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x168fc4u;
}
