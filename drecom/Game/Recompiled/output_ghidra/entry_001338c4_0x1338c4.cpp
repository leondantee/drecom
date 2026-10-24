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

// Function: entry_001338c4
// Address: 0x1338c4 - 0x133908
void entry_001338c4_0x1338c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001338c4_0x1338c4");
#endif

    switch (ctx->pc) {
        case 0x1338d4u: goto label_1338d4;
        case 0x1338e0u: goto label_1338e0;
        default: break;
    }

    ctx->pc = 0x1338c4u;

    // 0x1338c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1338c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1338cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1338CCu;
    SET_GPR_U32(ctx, 31, 0x1338D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1338CCu, 0x1338D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D4u;
label_1338d4:
    // 0x1338d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1338d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338d8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1338D8u;
    SET_GPR_U32(ctx, 31, 0x1338E0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1338D8u, 0x1338E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338E0u;
label_1338e0:
    // 0x1338e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1338e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1338e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1338e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1338E8u;
    {
        const bool branch_taken_0x1338e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338e8) {
            ctx->pc = 0x133908u;
            return;
        }
    }
    ctx->pc = 0x1338F0u;
    // 0x1338f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1338f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1338f4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1338f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1338f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1338f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1338fc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1338fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x133900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x133900u;
    {
        const bool branch_taken_0x133900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133900) {
            ctx->pc = 0x133938u;
            return;
        }
    }
    ctx->pc = 0x133908u;
}
