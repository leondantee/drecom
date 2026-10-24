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

// Function: entry_00147be4
// Address: 0x147be4 - 0x147c04
void entry_00147be4_0x147be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147be4_0x147be4");
#endif

    switch (ctx->pc) {
        case 0x147bf0u: goto label_147bf0;
        default: break;
    }

    ctx->pc = 0x147be4u;

    // 0x147be4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147be4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147be8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147BE8u;
    SET_GPR_U32(ctx, 31, 0x147BF0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147BE8u, 0x147BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BF0u;
label_147bf0:
    // 0x147bf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147bf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147bf8: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x147bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x147bfc: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x147BFCu;
    {
        const bool branch_taken_0x147bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147bfc) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147C04u;
}
