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

// Function: entry_0016d960
// Address: 0x16d960 - 0x16d98c
void entry_0016d960_0x16d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d960_0x16d960");
#endif

    ctx->pc = 0x16d960u;

    // 0x16d960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d964: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x16d964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16d968: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D968u;
    {
        const bool branch_taken_0x16d968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d968) {
            ctx->pc = 0x16D98Cu;
            return;
        }
    }
    ctx->pc = 0x16D970u;
    // 0x16d970: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x16d970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d978: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16d97c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16d980: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x16d980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x16d984: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
    ctx->pc = 0x16D984u;
    {
        const bool branch_taken_0x16d984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d984) {
            ctx->pc = 0x16D784u;
            return;
        }
    }
    ctx->pc = 0x16D98Cu;
}
