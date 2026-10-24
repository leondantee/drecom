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

// Function: caseD_4
// Address: 0x188408 - 0x18842c
void caseD_4_0x188408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x188408");
#endif

    ctx->pc = 0x188408u;

    // 0x188408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18840c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x188410: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x188414: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x188414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
    // 0x188418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18841c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18841cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188420: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x188420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188424: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x188424u;
    {
        const bool branch_taken_0x188424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188424) {
            ctx->pc = 0x188478u;
            return;
        }
    }
    ctx->pc = 0x18842Cu;
}
