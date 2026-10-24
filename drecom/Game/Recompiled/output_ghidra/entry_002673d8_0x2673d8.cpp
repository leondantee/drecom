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

// Function: entry_002673d8
// Address: 0x2673d8 - 0x267418
void entry_002673d8_0x2673d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002673d8_0x2673d8");
#endif

    ctx->pc = 0x2673d8u;

    // 0x2673d8: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x2673d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x2673dc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2673dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2673e0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2673e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2673e4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2673e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2673e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2673ec: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x2673ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x2673f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2673f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2673f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2673fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267400: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x267400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x267404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267404u;
    {
        const bool branch_taken_0x267404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267404) {
            ctx->pc = 0x267418u;
            return;
        }
    }
    ctx->pc = 0x26740Cu;
    // 0x26740c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x267410: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x267410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x267414: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x267414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x267418u;
}
