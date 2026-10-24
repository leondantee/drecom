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

// Function: entry_00267398
// Address: 0x267398 - 0x2673d8
void entry_00267398_0x267398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267398_0x267398");
#endif

    ctx->pc = 0x267398u;

    // 0x267398: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26739c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2673a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2673a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2673a4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2673a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2673a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2673ac: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x2673acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x2673b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2673b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2673b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2673bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2673c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2673c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2673C4u;
    {
        const bool branch_taken_0x2673c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2673c4) {
            ctx->pc = 0x2673D8u;
            return;
        }
    }
    ctx->pc = 0x2673CCu;
    // 0x2673cc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2673ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2673d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2673d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2673d4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2673d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2673d8u;
}
