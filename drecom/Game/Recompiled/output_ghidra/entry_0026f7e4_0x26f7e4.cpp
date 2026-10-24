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

// Function: entry_0026f7e4
// Address: 0x26f7e4 - 0x26f80c
void entry_0026f7e4_0x26f7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f7e4_0x26f7e4");
#endif

    ctx->pc = 0x26f7e4u;

    // 0x26f7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f7e8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x26f7e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x26f7ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F7ECu;
    {
        const bool branch_taken_0x26f7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f7ec) {
            ctx->pc = 0x26F80Cu;
            return;
        }
    }
    ctx->pc = 0x26F7F4u;
    // 0x26f7f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f7f8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x26f7f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x26f7fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26f800: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x26f800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x26f804: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26F804u;
    {
        const bool branch_taken_0x26f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f804) {
            ctx->pc = 0x26F824u;
            return;
        }
    }
    ctx->pc = 0x26F80Cu;
}
