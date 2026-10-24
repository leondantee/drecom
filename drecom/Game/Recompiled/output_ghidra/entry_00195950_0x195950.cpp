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

// Function: entry_00195950
// Address: 0x195950 - 0x195970
void entry_00195950_0x195950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195950_0x195950");
#endif

    ctx->pc = 0x195950u;

    // 0x195950: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195954: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195958: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195958u;
    {
        const bool branch_taken_0x195958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x195958) {
            ctx->pc = 0x195970u;
            return;
        }
    }
    ctx->pc = 0x195960u;
    // 0x195960: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195964: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195968: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x195968u;
    {
        const bool branch_taken_0x195968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x195968) {
            ctx->pc = 0x195A38u;
            return;
        }
    }
    ctx->pc = 0x195970u;
}
