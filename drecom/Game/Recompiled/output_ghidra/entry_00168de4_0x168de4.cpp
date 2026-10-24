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

// Function: entry_00168de4
// Address: 0x168de4 - 0x168df4
void entry_00168de4_0x168de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168de4_0x168de4");
#endif

    ctx->pc = 0x168de4u;

    // 0x168de4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168de8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168de8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168dec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168df0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168df0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x168df4u;
}
