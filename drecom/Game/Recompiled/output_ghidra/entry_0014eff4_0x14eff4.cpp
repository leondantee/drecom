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

// Function: entry_0014eff4
// Address: 0x14eff4 - 0x14f01c
void entry_0014eff4_0x14eff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eff4_0x14eff4");
#endif

    ctx->pc = 0x14eff4u;

    // 0x14eff4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14eff8: 0x84631416  lh          $v1, 0x1416($v1)
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5142)));
    // 0x14effc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14effcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14f000: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14f000u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14f004: 0x28630078  slti        $v1, $v1, 0x78
    ctx->pc = 0x14f004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x14f008: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F008u;
    {
        const bool branch_taken_0x14f008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f008) {
            ctx->pc = 0x14F01Cu;
            return;
        }
    }
    ctx->pc = 0x14F010u;
    // 0x14f010: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x14f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14f014: 0xc0bd24c  jal         func_2F4930
    ctx->pc = 0x14F014u;
    SET_GPR_U32(ctx, 31, 0x14F01Cu);
    ctx->pc = 0x2F4930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4930u, 0x14F014u, 0x14F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F01Cu;
}
