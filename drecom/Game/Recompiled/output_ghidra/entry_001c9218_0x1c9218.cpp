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

// Function: entry_001c9218
// Address: 0x1c9218 - 0x1c9244
void entry_001c9218_0x1c9218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9218_0x1c9218");
#endif

    ctx->pc = 0x1c9218u;

    // 0x1c9218: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c921c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c921cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c9220: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c9224: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c9224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c9228: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9228u;
    {
        const bool branch_taken_0x1c9228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9228) {
            ctx->pc = 0x1C9244u;
            return;
        }
    }
    ctx->pc = 0x1C9230u;
    // 0x1c9230: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9234: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9238: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1c9238u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c923c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C923Cu;
    {
        const bool branch_taken_0x1c923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c923c) {
            ctx->pc = 0x1C9250u;
            return;
        }
    }
    ctx->pc = 0x1C9244u;
}
