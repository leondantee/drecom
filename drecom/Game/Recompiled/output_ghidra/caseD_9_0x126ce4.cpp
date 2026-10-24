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

// Function: caseD_9
// Address: 0x126ce4 - 0x126d34
void caseD_9_0x126ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x126ce4");
#endif

    switch (ctx->pc) {
        case 0x126cf4u: goto label_126cf4;
        default: break;
    }

    ctx->pc = 0x126ce4u;

    // 0x126ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126cec: 0xc05d25c  jal         func_174970
    ctx->pc = 0x126CECu;
    SET_GPR_U32(ctx, 31, 0x126CF4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126CECu, 0x126CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CF4u;
label_126cf4:
    // 0x126cf4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x126CF4u;
    {
        const bool branch_taken_0x126cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126cf4) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126CFCu;
    // 0x126cfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126d04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126d08: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x126d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x126d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126d24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126d2c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x126D2Cu;
    {
        const bool branch_taken_0x126d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d2c) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126D34u;
}
