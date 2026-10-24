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

// Function: entry_001c51d4
// Address: 0x1c51d4 - 0x1c520c
void entry_001c51d4_0x1c51d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c51d4_0x1c51d4");
#endif

    switch (ctx->pc) {
        case 0x1c5204u: goto label_1c5204;
        default: break;
    }

    ctx->pc = 0x1c51d4u;

    // 0x1c51d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c51d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c51d8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c51dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C51DCu;
    {
        const bool branch_taken_0x1c51dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c51dc) {
            ctx->pc = 0x1C520Cu;
            return;
        }
    }
    ctx->pc = 0x1C51E4u;
    // 0x1c51e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c51ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c51f0: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c51f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c51f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c51f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c51fc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C51FCu;
    SET_GPR_U32(ctx, 31, 0x1C5204u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C51FCu, 0x1C5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5204u;
label_1c5204:
    // 0x1c5204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5204u;
    {
        const bool branch_taken_0x1c5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5204) {
            ctx->pc = 0x1C522Cu;
            return;
        }
    }
    ctx->pc = 0x1C520Cu;
}
