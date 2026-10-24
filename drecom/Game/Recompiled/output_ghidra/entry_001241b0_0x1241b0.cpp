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

// Function: entry_001241b0
// Address: 0x1241b0 - 0x124204
void entry_001241b0_0x1241b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001241b0_0x1241b0");
#endif

    switch (ctx->pc) {
        case 0x1241c0u: goto label_1241c0;
        default: break;
    }

    ctx->pc = 0x1241b0u;

    // 0x1241b0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1241b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1241b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1241b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1241b8: 0xc048148  jal         func_120520
    ctx->pc = 0x1241B8u;
    SET_GPR_U32(ctx, 31, 0x1241C0u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1241B8u, 0x1241C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241C0u;
label_1241c0:
    // 0x1241c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1241c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1241c4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1241c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1241c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1241c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1241cc: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x1241ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1241d0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1241D0u;
    {
        const bool branch_taken_0x1241d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1241d0) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x1241D8u;
    // 0x1241d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1241d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1241dc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1241dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1241e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1241e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1241e4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1241e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1241e8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1241E8u;
    {
        const bool branch_taken_0x1241e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241e8) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x1241F0u;
    // 0x1241f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1241f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1241f4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1241f8: 0xa2200ea0  sb          $zero, 0xEA0($s1)
    ctx->pc = 0x1241f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1241fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1241FCu;
    {
        const bool branch_taken_0x1241fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1241fc) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x124204u;
}
