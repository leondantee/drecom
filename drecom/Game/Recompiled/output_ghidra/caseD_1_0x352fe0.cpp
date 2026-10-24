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

// Function: caseD_1
// Address: 0x352fe0 - 0x353010
void caseD_1_0x352fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x352fe0");
#endif

    switch (ctx->pc) {
        case 0x352ff0u: goto label_352ff0;
        default: break;
    }

    ctx->pc = 0x352fe0u;

    // 0x352fe0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x352fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352fe4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x352fe4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x352fe8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x352FE8u;
    SET_GPR_U32(ctx, 31, 0x352FF0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x352FE8u, 0x352FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FF0u;
label_352ff0:
    // 0x352ff0: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x352FF0u;
    {
        const bool branch_taken_0x352ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352ff0) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x352FF8u;
    // 0x352ff8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x352ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x352ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x352ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353004: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x353004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x353008: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x353008u;
    {
        const bool branch_taken_0x353008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353008) {
            ctx->pc = 0x353328u;
            return;
        }
    }
    ctx->pc = 0x353010u;
}
