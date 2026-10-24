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

// Function: entry_00267458
// Address: 0x267458 - 0x267490
void entry_00267458_0x267458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267458_0x267458");
#endif

    ctx->pc = 0x267458u;

    // 0x267458: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26745c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267460: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267464: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267468: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26746c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267474: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267478: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26747c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267480: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x267480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x267484: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x267484u;
    {
        const bool branch_taken_0x267484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267484) {
            ctx->pc = 0x267490u;
            return;
        }
    }
    ctx->pc = 0x26748Cu;
    // 0x26748c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x26748cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x267490u;
}
