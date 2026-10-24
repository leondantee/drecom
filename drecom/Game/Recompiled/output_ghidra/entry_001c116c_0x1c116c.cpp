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

// Function: entry_001c116c
// Address: 0x1c116c - 0x1c11a4
void entry_001c116c_0x1c116c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c116c_0x1c116c");
#endif

    switch (ctx->pc) {
        case 0x1c119cu: goto label_1c119c;
        default: break;
    }

    ctx->pc = 0x1c116cu;

    // 0x1c116c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c1170: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c1170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c1174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1174u;
    {
        const bool branch_taken_0x1c1174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1174) {
            ctx->pc = 0x1C11A4u;
            return;
        }
    }
    ctx->pc = 0x1C117Cu;
    // 0x1c117c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1184: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1188: 0x24061421  addiu       $a2, $zero, 0x1421
    ctx->pc = 0x1c1188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5153));
    // 0x1c118c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c118cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C1194u;
    SET_GPR_U32(ctx, 31, 0x1C119Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C1194u, 0x1C119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C119Cu;
label_1c119c:
    // 0x1c119c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C119Cu;
    {
        const bool branch_taken_0x1c119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c119c) {
            ctx->pc = 0x1C11C4u;
            return;
        }
    }
    ctx->pc = 0x1C11A4u;
}
