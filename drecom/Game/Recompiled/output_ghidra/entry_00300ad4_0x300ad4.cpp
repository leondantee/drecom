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

// Function: entry_00300ad4
// Address: 0x300ad4 - 0x300af4
void entry_00300ad4_0x300ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300ad4_0x300ad4");
#endif

    ctx->pc = 0x300ad4u;

    // 0x300ad4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x300ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300ad8: 0x8c421338  lw          $v0, 0x1338($v0)
    ctx->pc = 0x300ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x300adc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x300adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x300ae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300AE0u;
    {
        const bool branch_taken_0x300ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ae0) {
            ctx->pc = 0x300AF4u;
            return;
        }
    }
    ctx->pc = 0x300AE8u;
    // 0x300ae8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x300ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x300aec: 0xc0c0448  jal         func_301120
    ctx->pc = 0x300AECu;
    SET_GPR_U32(ctx, 31, 0x300AF4u);
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x300AECu, 0x300AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AF4u;
}
