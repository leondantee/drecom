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

// Function: entry_00374f88
// Address: 0x374f88 - 0x374fb4
void entry_00374f88_0x374f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374f88_0x374f88");
#endif

    ctx->pc = 0x374f88u;

label_374f88:
    // 0x374f88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x374f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f8c:
    // 0x374f8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x374f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374f90:
    // 0x374f90: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x374f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_374f94:
    // 0x374f94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374f98:
    // 0x374f98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x374f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_374f9c:
    // 0x374f9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_374fa0:
    // 0x374fa0: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x374fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
label_374fa4:
    // 0x374fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374fa8:
    // 0x374fa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x374fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_374fac:
    // 0x374fac: 0x40f809  jalr        $v0
label_374fb0:
    if (ctx->pc == 0x374FB0u) {
        ctx->pc = 0x374FB4u;
        goto label_fallthrough_0x374fac;
    }
    ctx->pc = 0x374FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374FB4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FACu, 0x374FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x374fac:
    ctx->pc = 0x374FB4u;
}
