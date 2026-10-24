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

// Function: entry_00195540
// Address: 0x195540 - 0x195560
void entry_00195540_0x195540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195540_0x195540");
#endif

    ctx->pc = 0x195540u;

    // 0x195540: 0x8e030124  lw          $v1, 0x124($s0)
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x195544: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x195544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195548: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195548u;
    {
        const bool branch_taken_0x195548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x195548) {
            ctx->pc = 0x195560u;
            return;
        }
    }
    ctx->pc = 0x195550u;
    // 0x195550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x195550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195554: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x195558: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x195558u;
    {
        const bool branch_taken_0x195558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x195558) {
            ctx->pc = 0x1955C4u;
            return;
        }
    }
    ctx->pc = 0x195560u;
}
