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

// Function: caseD_5
// Address: 0x132ec4 - 0x132f08
void caseD_5_0x132ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x132ec4");
#endif

    switch (ctx->pc) {
        case 0x132ed4u: goto label_132ed4;
        case 0x132ee0u: goto label_132ee0;
        default: break;
    }

    ctx->pc = 0x132ec4u;

    // 0x132ec4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x132ec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x132ecc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x132ECCu;
    SET_GPR_U32(ctx, 31, 0x132ED4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x132ECCu, 0x132ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ED4u;
label_132ed4:
    // 0x132ed4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ed8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132ED8u;
    SET_GPR_U32(ctx, 31, 0x132EE0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132ED8u, 0x132EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EE0u;
label_132ee0:
    // 0x132ee0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ee4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x132ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x132ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132EE8u;
    {
        const bool branch_taken_0x132ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ee8) {
            ctx->pc = 0x132F08u;
            return;
        }
    }
    ctx->pc = 0x132EF0u;
    // 0x132ef0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ef4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x132ef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x132ef8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x132ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x132efc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x132efcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x132f00: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x132F00u;
    {
        const bool branch_taken_0x132f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f00) {
            ctx->pc = 0x132FE0u;
            return;
        }
    }
    ctx->pc = 0x132F08u;
}
