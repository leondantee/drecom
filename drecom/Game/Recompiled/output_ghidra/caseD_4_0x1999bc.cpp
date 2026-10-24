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

// Function: caseD_4
// Address: 0x1999bc - 0x1999f4
void caseD_4_0x1999bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1999bc");
#endif

    switch (ctx->pc) {
        case 0x1999dcu: goto label_1999dc;
        default: break;
    }

    ctx->pc = 0x1999bcu;

    // 0x1999bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1999c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1999c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1999c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1999c8: 0x24062826  addiu       $a2, $zero, 0x2826
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10278));
    // 0x1999cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1999d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1999d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1999D4u;
    SET_GPR_U32(ctx, 31, 0x1999DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1999D4u, 0x1999DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999DCu;
label_1999dc:
    // 0x1999dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1999dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1999e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1999e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1999e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1999e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1999e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1999e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1999ec: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1999ECu;
    {
        const bool branch_taken_0x1999ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999ec) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x1999F4u;
}
