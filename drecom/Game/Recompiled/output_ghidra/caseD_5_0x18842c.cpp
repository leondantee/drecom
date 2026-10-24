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

// Function: caseD_5
// Address: 0x18842c - 0x188450
void caseD_5_0x18842c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x18842c");
#endif

    ctx->pc = 0x18842cu;

    // 0x18842c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188430: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x188430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x188434: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x188438: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
    // 0x18843c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188440: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x188440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188444: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x188444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188448: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188448u;
    {
        const bool branch_taken_0x188448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188448) {
            ctx->pc = 0x188478u;
            return;
        }
    }
    ctx->pc = 0x188450u;
}
