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

// Function: entry_00195970
// Address: 0x195970 - 0x195990
void entry_00195970_0x195970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195970_0x195970");
#endif

    ctx->pc = 0x195970u;

    // 0x195970: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195974: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195978: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195978u;
    {
        const bool branch_taken_0x195978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195978) {
            ctx->pc = 0x195990u;
            return;
        }
    }
    ctx->pc = 0x195980u;
    // 0x195980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195984: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195988: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x195988u;
    {
        const bool branch_taken_0x195988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195988) {
            ctx->pc = 0x195A38u;
            return;
        }
    }
    ctx->pc = 0x195990u;
}
