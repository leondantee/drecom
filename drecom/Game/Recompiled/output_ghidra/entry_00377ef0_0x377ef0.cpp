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

// Function: entry_00377ef0
// Address: 0x377ef0 - 0x377f20
void entry_00377ef0_0x377ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377ef0_0x377ef0");
#endif

    ctx->pc = 0x377ef0u;

    // 0x377ef0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377ef4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x377ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377ef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377efc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x377EFCu;
    {
        const bool branch_taken_0x377efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x377efc) {
            ctx->pc = 0x377F20u;
            return;
        }
    }
    ctx->pc = 0x377F04u;
    // 0x377f04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x377f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x377f08: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x377f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x377f0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377f10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x377f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377f14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x377f18: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x377f1c: 0x0  nop
    ctx->pc = 0x377f1cu;
    // NOP
    ctx->pc = 0x377f20u;
}
