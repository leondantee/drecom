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

// Function: entry_00374fb4
// Address: 0x374fb4 - 0x374ff0
void entry_00374fb4_0x374fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374fb4_0x374fb4");
#endif

    switch (ctx->pc) {
        case 0x374fe0u: goto label_374fe0;
        default: break;
    }

    ctx->pc = 0x374fb4u;

label_374fb4:
    // 0x374fb4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x374fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374fb8:
    // 0x374fb8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x374fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_374fbc:
    // 0x374fbc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x374fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_374fc0:
    // 0x374fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x374fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_374fc4:
    // 0x374fc4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x374fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_374fc8:
    // 0x374fc8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x374fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_374fcc:
    // 0x374fcc: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x374fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
label_374fd0:
    // 0x374fd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_374fd4:
    // 0x374fd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x374fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_374fd8:
    // 0x374fd8: 0x40f809  jalr        $v0
label_374fdc:
    if (ctx->pc == 0x374FDCu) {
        ctx->pc = 0x374FE0u;
        goto label_374fe0;
    }
    ctx->pc = 0x374FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x374FE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FD8u, 0x374FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x374FE0u;
label_374fe0:
    // 0x374fe0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x374fe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_374fe4:
    // 0x374fe4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x374fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_374fe8:
    // 0x374fe8: 0x3e00008  jr          $ra
label_374fec:
    if (ctx->pc == 0x374FECu) {
        ctx->pc = 0x374FF0u;
        goto label_fallthrough_0x374fe8;
    }
    ctx->pc = 0x374FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x374fe8:
    ctx->pc = 0x374FF0u;
}
