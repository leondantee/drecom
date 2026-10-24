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

// Function: entry_00195a08
// Address: 0x195a08 - 0x195a20
void entry_00195a08_0x195a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195a08_0x195a08");
#endif

    ctx->pc = 0x195a08u;

    // 0x195a08: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x195a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195a0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195a10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195A10u;
    {
        const bool branch_taken_0x195a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195a10) {
            ctx->pc = 0x195A20u;
            return;
        }
    }
    ctx->pc = 0x195A18u;
    // 0x195a18: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195a1c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x195a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x195a20u;
}
