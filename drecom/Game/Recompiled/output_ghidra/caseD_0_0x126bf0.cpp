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

// Function: caseD_0
// Address: 0x126bf0 - 0x126c50
void caseD_0_0x126bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x126bf0");
#endif

    switch (ctx->pc) {
        case 0x126c04u: goto label_126c04;
        default: break;
    }

    ctx->pc = 0x126bf0u;

    // 0x126bf0: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x126BF0u;
    {
        const bool branch_taken_0x126bf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x126bf0) {
            ctx->pc = 0x126C50u;
            return;
        }
    }
    ctx->pc = 0x126BF8u;
    // 0x126bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126bfc: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x126BFCu;
    SET_GPR_U32(ctx, 31, 0x126C04u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x126BFCu, 0x126C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C04u;
label_126c04:
    // 0x126c04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x126C04u;
    {
        const bool branch_taken_0x126c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c04) {
            ctx->pc = 0x126C50u;
            return;
        }
    }
    ctx->pc = 0x126C0Cu;
    // 0x126c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126c10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126c14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126c18: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x126c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x126c1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126c24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126c28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126c2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126c30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126c34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126c3c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x126c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126c40: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x126c44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x126c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x126c48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x126c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x126c4c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x126c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x126c50u;
}
