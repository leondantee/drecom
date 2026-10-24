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

// Function: entry_00266dd0
// Address: 0x266dd0 - 0x266e10
void entry_00266dd0_0x266dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266dd0_0x266dd0");
#endif

    ctx->pc = 0x266dd0u;

    // 0x266dd0: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266dd4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266dd8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266ddc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266de0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266de4: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266dec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266df8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x266df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x266dfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266DFCu;
    {
        const bool branch_taken_0x266dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266dfc) {
            ctx->pc = 0x266E10u;
            return;
        }
    }
    ctx->pc = 0x266E04u;
    // 0x266e04: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x266e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x266e08: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x266e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x266e0c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x266e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x266e10u;
}
