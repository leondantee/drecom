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

// Function: entry_002dd860
// Address: 0x2dd860 - 0x2dd8b4
void entry_002dd860_0x2dd860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd860_0x2dd860");
#endif

    switch (ctx->pc) {
        case 0x2dd868u: goto label_2dd868;
        default: break;
    }

    ctx->pc = 0x2dd860u;

    // 0x2dd860: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DD860u;
    SET_GPR_U32(ctx, 31, 0x2DD868u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DD860u, 0x2DD868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD868u;
label_2dd868:
    // 0x2dd868: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2dd868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dd86c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dd86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dd870: 0x10600155  beqz        $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x2DD870u;
    {
        const bool branch_taken_0x2dd870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd870) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD878u;
    // 0x2dd878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd87c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dd880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd884: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2dd884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dd888: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd88c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dd88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd890: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd894: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dd894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd89c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dd89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dd8a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2dd8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd8a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd8a8: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x2dd8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x2dd8ac: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x2DD8ACu;
    {
        const bool branch_taken_0x2dd8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd8ac) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD8B4u;
}
