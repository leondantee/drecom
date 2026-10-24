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

// Function: entry_00266e90
// Address: 0x266e90 - 0x266ec8
void entry_00266e90_0x266e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266e90_0x266e90");
#endif

    ctx->pc = 0x266e90u;

    // 0x266e90: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266e94: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x266e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x266e98: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x266e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266e9c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x266e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x266ea0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x266ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x266ea4: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x266ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x266ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266eb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x266eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x266eb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x266eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266eb8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x266eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x266ebc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266EBCu;
    {
        const bool branch_taken_0x266ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ebc) {
            ctx->pc = 0x266EC8u;
            return;
        }
    }
    ctx->pc = 0x266EC4u;
    // 0x266ec4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x266ec8u;
}
