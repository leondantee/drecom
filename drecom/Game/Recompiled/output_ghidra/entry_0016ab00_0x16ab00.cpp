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

// Function: entry_0016ab00
// Address: 0x16ab00 - 0x16ab34
void entry_0016ab00_0x16ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab00_0x16ab00");
#endif

    ctx->pc = 0x16ab00u;

    // 0x16ab00: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x16ab04: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x16ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x16ab08: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16ab0c: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16ab10: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab14: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16AB14u;
    {
        const bool branch_taken_0x16ab14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ab14) {
            ctx->pc = 0x16AB34u;
            return;
        }
    }
    ctx->pc = 0x16AB1Cu;
    // 0x16ab1c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x16ab20: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16ab24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab28: 0x28823  negu        $s1, $v0
    ctx->pc = 0x16ab28u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16ab2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB2Cu;
    {
        const bool branch_taken_0x16ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab2c) {
            ctx->pc = 0x16AB40u;
            return;
        }
    }
    ctx->pc = 0x16AB34u;
}
