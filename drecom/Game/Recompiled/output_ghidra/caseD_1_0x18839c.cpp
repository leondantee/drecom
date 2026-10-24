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
// Address: 0x18839c - 0x1883c0
void caseD_1_0x18839c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x18839c");
#endif

    ctx->pc = 0x18839cu;

    // 0x18839c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18839cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1883a0: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1883a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1883a4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1883a8: 0x24426cf0  addiu       $v0, $v0, 0x6CF0
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27888));
    // 0x1883ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1883b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1883b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1883b4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1883b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1883b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1883B8u;
    {
        const bool branch_taken_0x1883b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883b8) {
            ctx->pc = 0x188478u;
            return;
        }
    }
    ctx->pc = 0x1883C0u;
}
