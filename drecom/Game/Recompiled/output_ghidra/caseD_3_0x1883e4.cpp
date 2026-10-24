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

// Function: caseD_3
// Address: 0x1883e4 - 0x188408
void caseD_3_0x1883e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1883e4");
#endif

    ctx->pc = 0x1883e4u;

    // 0x1883e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1883e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1883e8: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x1883ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1883f0: 0x24426d40  addiu       $v0, $v0, 0x6D40
    ctx->pc = 0x1883f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
    // 0x1883f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1883f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1883f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1883f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1883fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1883fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188400: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x188400u;
    {
        const bool branch_taken_0x188400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188400) {
            ctx->pc = 0x188478u;
            return;
        }
    }
    ctx->pc = 0x188408u;
}
