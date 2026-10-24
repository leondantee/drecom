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

// Function: entry_00125c78
// Address: 0x125c78 - 0x125cc8
void entry_00125c78_0x125c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125c78_0x125c78");
#endif

    switch (ctx->pc) {
        case 0x125c88u: goto label_125c88;
        default: break;
    }

    ctx->pc = 0x125c78u;

    // 0x125c78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125c80: 0xc05d25c  jal         func_174970
    ctx->pc = 0x125C80u;
    SET_GPR_U32(ctx, 31, 0x125C88u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x125C80u, 0x125C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C88u;
label_125c88:
    // 0x125c88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x125C88u;
    {
        const bool branch_taken_0x125c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125c88) {
            ctx->pc = 0x125CC8u;
            return;
        }
    }
    ctx->pc = 0x125C90u;
    // 0x125c90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125c94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125c98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125c98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125c9c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x125c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x125ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ca4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125ca8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125cac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125cb4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125cbc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125cc0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x125CC0u;
    {
        const bool branch_taken_0x125cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125cc0) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125CC8u;
}
