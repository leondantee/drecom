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

// Function: entry_00377f50
// Address: 0x377f50 - 0x377f80
void entry_00377f50_0x377f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377f50_0x377f50");
#endif

    ctx->pc = 0x377f50u;

    // 0x377f50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f54: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f58: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x377f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x377f5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377F5Cu;
    {
        const bool branch_taken_0x377f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f5c) {
            ctx->pc = 0x377F80u;
            return;
        }
    }
    ctx->pc = 0x377F64u;
    // 0x377f64: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f68: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f6c: 0x24650084  addiu       $a1, $v1, 0x84
    ctx->pc = 0x377f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x377f70: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377f74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377f78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377f7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x377f80u;
}
