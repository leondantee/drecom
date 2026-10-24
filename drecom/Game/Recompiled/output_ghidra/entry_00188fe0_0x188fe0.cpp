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

// Function: entry_00188fe0
// Address: 0x188fe0 - 0x18900c
void entry_00188fe0_0x188fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fe0_0x188fe0");
#endif

    switch (ctx->pc) {
        case 0x188fecu: goto label_188fec;
        default: break;
    }

    ctx->pc = 0x188fe0u;

    // 0x188fe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188fe4: 0xc0556d0  jal         func_155B40
    ctx->pc = 0x188FE4u;
    SET_GPR_U32(ctx, 31, 0x188FECu);
    ctx->pc = 0x155B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B40u, 0x188FE4u, 0x188FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FECu;
label_188fec:
    // 0x188fec: 0x938280ac  lbu         $v0, -0x7F54($gp)
    ctx->pc = 0x188fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x188ff0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x188ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x188ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188ff8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188FF8u;
    {
        const bool branch_taken_0x188ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188ff8) {
            ctx->pc = 0x18900Cu;
            return;
        }
    }
    ctx->pc = 0x189000u;
    // 0x189000: 0x8e4213e8  lw          $v0, 0x13E8($s2)
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5096)));
    // 0x189004: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x189004u;
    {
        const bool branch_taken_0x189004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189004) {
            ctx->pc = 0x189084u;
            return;
        }
    }
    ctx->pc = 0x18900Cu;
}
