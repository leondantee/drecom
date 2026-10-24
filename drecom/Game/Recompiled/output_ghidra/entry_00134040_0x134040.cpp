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

// Function: entry_00134040
// Address: 0x134040 - 0x134084
void entry_00134040_0x134040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134040_0x134040");
#endif

    switch (ctx->pc) {
        case 0x134050u: goto label_134050;
        case 0x13405cu: goto label_13405c;
        default: break;
    }

    ctx->pc = 0x134040u;

    // 0x134040: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134044: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x134044u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x134048: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x134048u;
    SET_GPR_U32(ctx, 31, 0x134050u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x134048u, 0x134050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134050u;
label_134050:
    // 0x134050: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134054: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x134054u;
    SET_GPR_U32(ctx, 31, 0x13405Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x134054u, 0x13405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13405Cu;
label_13405c:
    // 0x13405c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134060: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x134060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x134064: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134064u;
    {
        const bool branch_taken_0x134064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134064) {
            ctx->pc = 0x134084u;
            return;
        }
    }
    ctx->pc = 0x13406Cu;
    // 0x13406c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134070: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x134070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x134074: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x134078: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x134078u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x13407c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13407Cu;
    {
        const bool branch_taken_0x13407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13407c) {
            ctx->pc = 0x13415Cu;
            return;
        }
    }
    ctx->pc = 0x134084u;
}
