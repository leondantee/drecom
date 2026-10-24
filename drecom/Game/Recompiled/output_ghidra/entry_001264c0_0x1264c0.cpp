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

// Function: entry_001264c0
// Address: 0x1264c0 - 0x126508
void entry_001264c0_0x1264c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001264c0_0x1264c0");
#endif

    switch (ctx->pc) {
        case 0x1264d0u: goto label_1264d0;
        default: break;
    }

    ctx->pc = 0x1264c0u;

    // 0x1264c0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1264c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1264c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1264c8: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1264C8u;
    SET_GPR_U32(ctx, 31, 0x1264D0u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1264C8u, 0x1264D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1264D0u;
label_1264d0:
    // 0x1264d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1264D0u;
    {
        const bool branch_taken_0x1264d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1264d0) {
            ctx->pc = 0x126508u;
            return;
        }
    }
    ctx->pc = 0x1264D8u;
    // 0x1264d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1264dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1264e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1264e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1264e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1264e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1264ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1264f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1264f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1264f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1264f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1264fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1264fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126504: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x126508u;
}
