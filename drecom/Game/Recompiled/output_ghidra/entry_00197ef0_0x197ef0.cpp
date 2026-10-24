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

// Function: entry_00197ef0
// Address: 0x197ef0 - 0x197f10
void entry_00197ef0_0x197ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197ef0_0x197ef0");
#endif

    ctx->pc = 0x197ef0u;

    // 0x197ef0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197ef4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x197ef8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x197EF8u;
    {
        const bool branch_taken_0x197ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ef8) {
            ctx->pc = 0x197F10u;
            return;
        }
    }
    ctx->pc = 0x197F00u;
    // 0x197f00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197f04: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x197f08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x197f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x197f0c: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x197f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    ctx->pc = 0x197f10u;
}
