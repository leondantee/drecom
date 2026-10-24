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

// Function: entry_00128afc
// Address: 0x128afc - 0x128b34
void entry_00128afc_0x128afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128afc_0x128afc");
#endif

    switch (ctx->pc) {
        case 0x128b04u: goto label_128b04;
        default: break;
    }

    ctx->pc = 0x128afcu;

label_128afc:
    // 0x128afc: 0xc067694  jal         func_19DA50
label_128b00:
    if (ctx->pc == 0x128B00u) {
        ctx->pc = 0x128B04u;
        goto label_128b04;
    }
    ctx->pc = 0x128AFCu;
    SET_GPR_U32(ctx, 31, 0x128B04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x128AFCu, 0x128B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B04u;
label_128b04:
    // 0x128b04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x128b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_128b08:
    // 0x128b08: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x128b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_128b0c:
    // 0x128b0c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x128b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_128b10:
    // 0x128b10: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_128b14:
    if (ctx->pc == 0x128B14u) {
        ctx->pc = 0x128B18u;
        goto label_128b18;
    }
    ctx->pc = 0x128B10u;
    {
        const bool branch_taken_0x128b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b10) {
            ctx->pc = 0x128B84u;
            return;
        }
    }
    ctx->pc = 0x128B18u;
label_128b18:
    // 0x128b18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_128b1c:
    // 0x128b1c: 0x2464e360  addiu       $a0, $v1, -0x1CA0
    ctx->pc = 0x128b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959968));
label_128b20:
    // 0x128b20: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_128b24:
    // 0x128b24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_128b28:
    // 0x128b28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x128b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128b2c:
    // 0x128b2c: 0x600008  jr          $v1
label_128b30:
    if (ctx->pc == 0x128B30u) {
        ctx->pc = 0x128B34u;
        goto label_fallthrough_0x128b2c;
    }
    ctx->pc = 0x128B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x128b2c:
    ctx->pc = 0x128B34u;
}
