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

// Function: entry_0012415c
// Address: 0x12415c - 0x1241b0
void entry_0012415c_0x12415c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012415c_0x12415c");
#endif

    switch (ctx->pc) {
        case 0x12416cu: goto label_12416c;
        default: break;
    }

    ctx->pc = 0x12415cu;

    // 0x12415c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12415cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124160: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124164: 0xc048148  jal         func_120520
    ctx->pc = 0x124164u;
    SET_GPR_U32(ctx, 31, 0x12416Cu);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124164u, 0x12416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12416Cu;
label_12416c:
    // 0x12416c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124170: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x124170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x124174: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x124174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124178: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x124178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x12417c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12417Cu;
    {
        const bool branch_taken_0x12417c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12417c) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x124184u;
    // 0x124184: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124188: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x12418c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124190: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x124190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x124194: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x124194u;
    {
        const bool branch_taken_0x124194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124194) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x12419Cu;
    // 0x12419c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1241a0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1241a4: 0xa0400ea0  sb          $zero, 0xEA0($v0)
    ctx->pc = 0x1241a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1241a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1241A8u;
    {
        const bool branch_taken_0x1241a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241a8) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x1241B0u;
}
