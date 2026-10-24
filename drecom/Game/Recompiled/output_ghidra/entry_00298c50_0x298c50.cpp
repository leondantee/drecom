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

// Function: entry_00298c50
// Address: 0x298c50 - 0x298c84
void entry_00298c50_0x298c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298c50_0x298c50");
#endif

    ctx->pc = 0x298c50u;

    // 0x298c50: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x298c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x298c54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298c58: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x298c5c: 0x3c020085  lui         $v0, 0x85
    ctx->pc = 0x298c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)133 << 16));
    // 0x298c60: 0x24423590  addiu       $v0, $v0, 0x3590
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13712));
    // 0x298c64: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x298c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298c68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x298c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x298c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x298c70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298C70u;
    {
        const bool branch_taken_0x298c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c70) {
            ctx->pc = 0x298C84u;
            return;
        }
    }
    ctx->pc = 0x298C78u;
    // 0x298c78: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x298c78u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x298c7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298C7Cu;
    {
        const bool branch_taken_0x298c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c7c) {
            ctx->pc = 0x298C9Cu;
            return;
        }
    }
    ctx->pc = 0x298C84u;
}
