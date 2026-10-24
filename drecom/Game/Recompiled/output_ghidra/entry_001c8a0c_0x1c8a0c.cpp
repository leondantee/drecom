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

// Function: entry_001c8a0c
// Address: 0x1c8a0c - 0x1c8a3c
void entry_001c8a0c_0x1c8a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8a0c_0x1c8a0c");
#endif

    ctx->pc = 0x1c8a0cu;

    // 0x1c8a0c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a10: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c8a14: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1c8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1c8a18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c8a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c8a1c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8A1Cu;
    {
        const bool branch_taken_0x1c8a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a1c) {
            ctx->pc = 0x1C8A3Cu;
            return;
        }
    }
    ctx->pc = 0x1C8A24u;
    // 0x1c8a24: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8a28: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c8a2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c8a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8a30: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c8a30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c8a34: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x1C8A34u;
    {
        const bool branch_taken_0x1c8a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a34) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C8A3Cu;
}
