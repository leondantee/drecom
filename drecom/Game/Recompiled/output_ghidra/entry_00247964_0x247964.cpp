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

// Function: entry_00247964
// Address: 0x247964 - 0x24798c
void entry_00247964_0x247964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247964_0x247964");
#endif

    ctx->pc = 0x247964u;

    // 0x247964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247968: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x247968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x24796c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x24796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247970: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247974u;
    {
        const bool branch_taken_0x247974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247974) {
            ctx->pc = 0x24798Cu;
            return;
        }
    }
    ctx->pc = 0x24797Cu;
    // 0x24797c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24797cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247980: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x247980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x247984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x247984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247988: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x247988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x24798cu;
}
