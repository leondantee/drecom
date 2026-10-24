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

// Function: entry_0035c178
// Address: 0x35c178 - 0x35c1ac
void entry_0035c178_0x35c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035c178_0x35c178");
#endif

    ctx->pc = 0x35c178u;

    // 0x35c178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c17c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c180: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35c180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c184: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c188: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35c188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c18c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c190: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35c190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c194: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c198: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35c198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c19c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c1a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35c1a4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x35C1A4u;
    {
        const bool branch_taken_0x35c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c1a4) {
            ctx->pc = 0x35C244u;
            return;
        }
    }
    ctx->pc = 0x35C1ACu;
}
