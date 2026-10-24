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

// Function: entry_00195560
// Address: 0x195560 - 0x195588
void entry_00195560_0x195560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195560_0x195560");
#endif

    ctx->pc = 0x195560u;

    // 0x195560: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x195560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x195564: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195568: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x195568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19556c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19556Cu;
    {
        const bool branch_taken_0x19556c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19556c) {
            ctx->pc = 0x195588u;
            return;
        }
    }
    ctx->pc = 0x195574u;
    // 0x195574: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195578: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19557c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19557Cu;
    {
        const bool branch_taken_0x19557c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19557c) {
            ctx->pc = 0x1955C4u;
            return;
        }
    }
    ctx->pc = 0x195584u;
    // 0x195584: 0x0  nop
    ctx->pc = 0x195584u;
    // NOP
    ctx->pc = 0x195588u;
}
