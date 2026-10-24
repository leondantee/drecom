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

// Function: entry_00168dcc
// Address: 0x168dcc - 0x168de4
void entry_00168dcc_0x168dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168dcc_0x168dcc");
#endif

    ctx->pc = 0x168dccu;

    // 0x168dcc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x168dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168dd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168dd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168dd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x168dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x168dd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x168ddc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168DDCu;
    {
        const bool branch_taken_0x168ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168ddc) {
            ctx->pc = 0x168DF4u;
            return;
        }
    }
    ctx->pc = 0x168DE4u;
}
