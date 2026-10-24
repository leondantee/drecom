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

// Function: caseD_1
// Address: 0x33877c - 0x338794
void caseD_1_0x33877c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x33877c");
#endif

    ctx->pc = 0x33877cu;

    // 0x33877c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x33877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x338780: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x338780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x338784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x338784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x338788: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x338788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33878c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33878Cu;
    {
        const bool branch_taken_0x33878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33878c) {
            ctx->pc = 0x338798u;
            return;
        }
    }
    ctx->pc = 0x338794u;
}
