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

// Function: entry_00377f80
// Address: 0x377f80 - 0x377fb0
void entry_00377f80_0x377f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377f80_0x377f80");
#endif

    ctx->pc = 0x377f80u;

    // 0x377f80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f84: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f88: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x377f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x377f8c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F8Cu;
    {
        const bool branch_taken_0x377f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f8c) {
            ctx->pc = 0x377FB0u;
            return;
        }
    }
    ctx->pc = 0x377F94u;
    // 0x377f94: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f98: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f9c: 0x246500cc  addiu       $a1, $v1, 0xCC
    ctx->pc = 0x377f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 204));
    // 0x377fa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377fac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x377fb0u;
}
