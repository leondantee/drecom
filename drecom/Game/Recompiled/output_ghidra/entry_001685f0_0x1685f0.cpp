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

// Function: entry_001685f0
// Address: 0x1685f0 - 0x16861c
void entry_001685f0_0x1685f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001685f0_0x1685f0");
#endif

    ctx->pc = 0x1685f0u;

    // 0x1685f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1685f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685f4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1685f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1685f8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1685F8u;
    {
        const bool branch_taken_0x1685f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685f8) {
            ctx->pc = 0x16861Cu;
            return;
        }
    }
    ctx->pc = 0x168600u;
    // 0x168600: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168608: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16860c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168610: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x168610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x168614: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168614) {
            ctx->pc = 0x168444u;
            return;
        }
    }
    ctx->pc = 0x16861Cu;
}
