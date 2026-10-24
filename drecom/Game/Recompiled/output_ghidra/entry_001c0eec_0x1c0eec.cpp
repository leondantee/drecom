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

// Function: entry_001c0eec
// Address: 0x1c0eec - 0x1c0f24
void entry_001c0eec_0x1c0eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0eec_0x1c0eec");
#endif

    switch (ctx->pc) {
        case 0x1c0f1cu: goto label_1c0f1c;
        default: break;
    }

    ctx->pc = 0x1c0eecu;

    // 0x1c0eec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c0eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c0ef0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c0ef4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0EF4u;
    {
        const bool branch_taken_0x1c0ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ef4) {
            ctx->pc = 0x1C0F24u;
            return;
        }
    }
    ctx->pc = 0x1C0EFCu;
    // 0x1c0efc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0f04: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c0f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c0f08: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c0f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c0f0c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c0f10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c0f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c0f14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C0F14u;
    SET_GPR_U32(ctx, 31, 0x1C0F1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C0F14u, 0x1C0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F1Cu;
label_1c0f1c:
    // 0x1c0f1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0F1Cu;
    {
        const bool branch_taken_0x1c0f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f1c) {
            ctx->pc = 0x1C0F44u;
            return;
        }
    }
    ctx->pc = 0x1C0F24u;
}
