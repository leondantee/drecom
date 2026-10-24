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

// Function: entry_0012da90
// Address: 0x12da90 - 0x12dae0
void entry_0012da90_0x12da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012da90_0x12da90");
#endif

    switch (ctx->pc) {
        case 0x12daa8u: goto label_12daa8;
        case 0x12dad8u: goto label_12dad8;
        default: break;
    }

    ctx->pc = 0x12da90u;

    // 0x12da90: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12da94: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12da98: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12DA98u;
    {
        const bool branch_taken_0x12da98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12da98) {
            ctx->pc = 0x12DB08u;
            return;
        }
    }
    ctx->pc = 0x12DAA0u;
    // 0x12daa0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12DAA0u;
    SET_GPR_U32(ctx, 31, 0x12DAA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12DAA0u, 0x12DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAA8u;
label_12daa8:
    // 0x12daa8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12daa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12daac: 0x30a70003  andi        $a3, $a1, 0x3
    ctx->pc = 0x12daacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x12dab0: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x12DAB0u;
    {
        const bool branch_taken_0x12dab0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dab0) {
            ctx->pc = 0x12DAE0u;
            return;
        }
    }
    ctx->pc = 0x12DAB8u;
    // 0x12dab8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dabc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dac0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12dac4: 0x24063c15  addiu       $a2, $zero, 0x3C15
    ctx->pc = 0x12dac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15381));
    // 0x12dac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12dacc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12daccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12dad0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DAD0u;
    SET_GPR_U32(ctx, 31, 0x12DAD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DAD0u, 0x12DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DAD8u;
label_12dad8:
    // 0x12dad8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12DAD8u;
    {
        const bool branch_taken_0x12dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dad8) {
            ctx->pc = 0x12DB74u;
            return;
        }
    }
    ctx->pc = 0x12DAE0u;
}
