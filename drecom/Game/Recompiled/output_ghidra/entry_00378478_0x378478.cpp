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

// Function: entry_00378478
// Address: 0x378478 - 0x3784a0
void entry_00378478_0x378478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378478_0x378478");
#endif

    ctx->pc = 0x378478u;

    // 0x378478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37847c: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37847Cu;
    {
        const bool branch_taken_0x37847c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x37847c) {
            ctx->pc = 0x3784A0u;
            return;
        }
    }
    ctx->pc = 0x378484u;
    // 0x378484: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x378484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x378488: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x378488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37848c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x378490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x378490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x378494: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x378494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x378498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x378498u;
    {
        const bool branch_taken_0x378498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378498) {
            ctx->pc = 0x3784B0u;
            return;
        }
    }
    ctx->pc = 0x3784A0u;
}
