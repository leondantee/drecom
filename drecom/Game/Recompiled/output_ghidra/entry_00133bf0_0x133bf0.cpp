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

// Function: entry_00133bf0
// Address: 0x133bf0 - 0x133c34
void entry_00133bf0_0x133bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133bf0_0x133bf0");
#endif

    switch (ctx->pc) {
        case 0x133c00u: goto label_133c00;
        case 0x133c0cu: goto label_133c0c;
        default: break;
    }

    ctx->pc = 0x133bf0u;

    // 0x133bf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133bf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133bf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x133bf8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x133BF8u;
    SET_GPR_U32(ctx, 31, 0x133C00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x133BF8u, 0x133C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C00u;
label_133c00:
    // 0x133c00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x133c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c04: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133C04u;
    SET_GPR_U32(ctx, 31, 0x133C0Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133C04u, 0x133C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133C0Cu;
label_133c0c:
    // 0x133c0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x133c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c10: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x133c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x133c14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x133C14u;
    {
        const bool branch_taken_0x133c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c14) {
            ctx->pc = 0x133C34u;
            return;
        }
    }
    ctx->pc = 0x133C1Cu;
    // 0x133c1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x133c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x133c20: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133c28: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x133c28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x133c2c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x133C2Cu;
    {
        const bool branch_taken_0x133c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133c2c) {
            ctx->pc = 0x133D0Cu;
            return;
        }
    }
    ctx->pc = 0x133C34u;
}
