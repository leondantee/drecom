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

// Function: entry_001c3d0c
// Address: 0x1c3d0c - 0x1c3d44
void entry_001c3d0c_0x1c3d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3d0c_0x1c3d0c");
#endif

    switch (ctx->pc) {
        case 0x1c3d3cu: goto label_1c3d3c;
        default: break;
    }

    ctx->pc = 0x1c3d0cu;

    // 0x1c3d0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3d10: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3d14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3D14u;
    {
        const bool branch_taken_0x1c3d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d14) {
            ctx->pc = 0x1C3D44u;
            return;
        }
    }
    ctx->pc = 0x1C3D1Cu;
    // 0x1c3d1c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3d24: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3d28: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c3d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c3d2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3d30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3d34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3D34u;
    SET_GPR_U32(ctx, 31, 0x1C3D3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3D34u, 0x1C3D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D3Cu;
label_1c3d3c:
    // 0x1c3d3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3D3Cu;
    {
        const bool branch_taken_0x1c3d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d3c) {
            ctx->pc = 0x1C3D64u;
            return;
        }
    }
    ctx->pc = 0x1C3D44u;
}
