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

// Function: entry_00126358
// Address: 0x126358 - 0x1263a8
void entry_00126358_0x126358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126358_0x126358");
#endif

    switch (ctx->pc) {
        case 0x126368u: goto label_126368;
        default: break;
    }

    ctx->pc = 0x126358u;

    // 0x126358: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12635c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126360: 0xc05d25c  jal         func_174970
    ctx->pc = 0x126360u;
    SET_GPR_U32(ctx, 31, 0x126368u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126360u, 0x126368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126368u;
label_126368:
    // 0x126368: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x126368u;
    {
        const bool branch_taken_0x126368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126368) {
            ctx->pc = 0x1263A8u;
            return;
        }
    }
    ctx->pc = 0x126370u;
    // 0x126370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126374: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126378: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12637c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x126380: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126384: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126384u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12638c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12638cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126390: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126394: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126398: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12639c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12639cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1263a0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1263A0u;
    {
        const bool branch_taken_0x1263a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263a0) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x1263A8u;
}
