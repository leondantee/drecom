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

// Function: entry_001e0418
// Address: 0x1e0418 - 0x1e0440
void entry_001e0418_0x1e0418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0418_0x1e0418");
#endif

    ctx->pc = 0x1e0418u;

    // 0x1e0418: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1e0418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1e041c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1e041cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1e0420: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1e0424: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0424u;
    {
        const bool branch_taken_0x1e0424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0424) {
            ctx->pc = 0x1E0440u;
            return;
        }
    }
    ctx->pc = 0x1E042Cu;
    // 0x1e042c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0430: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1e0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1e0434: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e0434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0438: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1e0438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e043c: 0x0  nop
    ctx->pc = 0x1e043cu;
    // NOP
    ctx->pc = 0x1e0440u;
}
