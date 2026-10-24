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

// Function: entry_0010bc98
// Address: 0x10bc98 - 0x10bcd0
void entry_0010bc98_0x10bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bc98_0x10bc98");
#endif

    ctx->pc = 0x10bc98u;

label_10bc98:
    // 0x10bc98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10bc9c: 0x0  nop
    ctx->pc = 0x10bc9cu;
    // NOP
    // 0x10bca0: 0x0  nop
    ctx->pc = 0x10bca0u;
    // NOP
    // 0x10bca4: 0x0  nop
    ctx->pc = 0x10bca4u;
    // NOP
    // 0x10bca8: 0x0  nop
    ctx->pc = 0x10bca8u;
    // NOP
    // 0x10bcac: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BCACu;
    {
        const bool branch_taken_0x10bcac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10bcac) {
            ctx->pc = 0x10BC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bc98;
        }
    }
    ctx->pc = 0x10BCB4u;
    // 0x10bcb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10bcb8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10bcbc: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10bcc0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10bcc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10bcc4u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x10bcc8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10bcc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10bccc: 0x0  nop
    ctx->pc = 0x10bcccu;
    // NOP
    ctx->pc = 0x10bcd0u;
}
