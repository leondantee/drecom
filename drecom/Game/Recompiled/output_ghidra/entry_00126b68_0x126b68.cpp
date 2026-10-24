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

// Function: entry_00126b68
// Address: 0x126b68 - 0x126bb8
void entry_00126b68_0x126b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126b68_0x126b68");
#endif

    switch (ctx->pc) {
        case 0x126b78u: goto label_126b78;
        default: break;
    }

    ctx->pc = 0x126b68u;

    // 0x126b68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126b70: 0xc05d25c  jal         func_174970
    ctx->pc = 0x126B70u;
    SET_GPR_U32(ctx, 31, 0x126B78u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x126B70u, 0x126B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B78u;
label_126b78:
    // 0x126b78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x126B78u;
    {
        const bool branch_taken_0x126b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b78) {
            ctx->pc = 0x126BB8u;
            return;
        }
    }
    ctx->pc = 0x126B80u;
    // 0x126b80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126b84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126b88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126b88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126b8c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x126b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x126b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126b94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126b98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126b9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126ba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126ba4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126ba8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126bac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126bb0: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x126BB0u;
    {
        const bool branch_taken_0x126bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126bb0) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126BB8u;
}
