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

// Function: entry_00266e50
// Address: 0x266e50 - 0x266e90
void entry_00266e50_0x266e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266e50_0x266e50");
#endif

    ctx->pc = 0x266e50u;

    // 0x266e50: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266e54: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266e58: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266e5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266e60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266e64: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266e74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266e78: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x266e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x266e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266E7Cu;
    {
        const bool branch_taken_0x266e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e7c) {
            ctx->pc = 0x266E90u;
            return;
        }
    }
    ctx->pc = 0x266E84u;
    // 0x266e84: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266e84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266e88: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x266e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x266e8c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x266e90u;
}
