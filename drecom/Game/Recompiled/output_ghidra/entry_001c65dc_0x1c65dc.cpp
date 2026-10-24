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

// Function: entry_001c65dc
// Address: 0x1c65dc - 0x1c6614
void entry_001c65dc_0x1c65dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c65dc_0x1c65dc");
#endif

    switch (ctx->pc) {
        case 0x1c660cu: goto label_1c660c;
        default: break;
    }

    ctx->pc = 0x1c65dcu;

    // 0x1c65dc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c65dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c65e0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c65e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C65E4u;
    {
        const bool branch_taken_0x1c65e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c65e4) {
            ctx->pc = 0x1C6614u;
            return;
        }
    }
    ctx->pc = 0x1C65ECu;
    // 0x1c65ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65f4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c65f8: 0x24061418  addiu       $a2, $zero, 0x1418
    ctx->pc = 0x1c65f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5144));
    // 0x1c65fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c65fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6600: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c6600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6604: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C6604u;
    SET_GPR_U32(ctx, 31, 0x1C660Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C6604u, 0x1C660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C660Cu;
label_1c660c:
    // 0x1c660c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C660Cu;
    {
        const bool branch_taken_0x1c660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c660c) {
            ctx->pc = 0x1C6634u;
            return;
        }
    }
    ctx->pc = 0x1C6614u;
}
