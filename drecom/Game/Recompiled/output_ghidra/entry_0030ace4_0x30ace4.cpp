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

// Function: entry_0030ace4
// Address: 0x30ace4 - 0x30ad0c
void entry_0030ace4_0x30ace4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ace4_0x30ace4");
#endif

    ctx->pc = 0x30ace4u;

    // 0x30ace4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30ace8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x30ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x30acec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x30acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x30acf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30ACF0u;
    {
        const bool branch_taken_0x30acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30acf0) {
            ctx->pc = 0x30AD0Cu;
            return;
        }
    }
    ctx->pc = 0x30ACF8u;
    // 0x30acf8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30acfc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x30acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x30ad00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30ad04: 0xc0c45f0  jal         func_3117C0
    ctx->pc = 0x30AD04u;
    SET_GPR_U32(ctx, 31, 0x30AD0Cu);
    ctx->pc = 0x3117C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3117C0u, 0x30AD04u, 0x30AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD0Cu;
}
