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

// Function: entry_00360ce4
// Address: 0x360ce4 - 0x360d18
void entry_00360ce4_0x360ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360ce4_0x360ce4");
#endif

    ctx->pc = 0x360ce4u;

    // 0x360ce4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x360ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360ce8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360cf0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cf4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x360cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360cf8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360cfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360d00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x360d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360d08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360d0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360d10: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x360D10u;
    {
        const bool branch_taken_0x360d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360d10) {
            ctx->pc = 0x360F78u;
            return;
        }
    }
    ctx->pc = 0x360D18u;
}
