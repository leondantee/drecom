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

// Function: entry_00129880
// Address: 0x129880 - 0x1298b8
void entry_00129880_0x129880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129880_0x129880");
#endif

    switch (ctx->pc) {
        case 0x129888u: goto label_129888;
        default: break;
    }

    ctx->pc = 0x129880u;

label_129880:
    // 0x129880: 0xc067694  jal         func_19DA50
label_129884:
    if (ctx->pc == 0x129884u) {
        ctx->pc = 0x129888u;
        goto label_129888;
    }
    ctx->pc = 0x129880u;
    SET_GPR_U32(ctx, 31, 0x129888u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129880u, 0x129888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129888u;
label_129888:
    // 0x129888: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_12988c:
    // 0x12988c: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x12988cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_129890:
    // 0x129890: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x129890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_129894:
    // 0x129894: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_129898:
    if (ctx->pc == 0x129898u) {
        ctx->pc = 0x12989Cu;
        goto label_12989c;
    }
    ctx->pc = 0x129894u;
    {
        const bool branch_taken_0x129894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129894) {
            ctx->pc = 0x129994u;
            return;
        }
    }
    ctx->pc = 0x12989Cu;
label_12989c:
    // 0x12989c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x12989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1298a0:
    // 0x1298a0: 0x2464e400  addiu       $a0, $v1, -0x1C00
    ctx->pc = 0x1298a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
label_1298a4:
    // 0x1298a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1298a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1298a8:
    // 0x1298a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1298ac:
    // 0x1298ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1298acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1298b0:
    // 0x1298b0: 0x600008  jr          $v1
label_1298b4:
    if (ctx->pc == 0x1298B4u) {
        ctx->pc = 0x1298B8u;
        goto label_fallthrough_0x1298b0;
    }
    ctx->pc = 0x1298B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1298b0:
    ctx->pc = 0x1298B8u;
}
