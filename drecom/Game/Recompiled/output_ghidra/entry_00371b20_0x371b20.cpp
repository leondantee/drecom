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

// Function: entry_00371b20
// Address: 0x371b20 - 0x371b54
void entry_00371b20_0x371b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371b20_0x371b20");
#endif

    switch (ctx->pc) {
        case 0x371b48u: goto label_371b48;
        default: break;
    }

    ctx->pc = 0x371b20u;

    // 0x371b20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371b24: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x371B24u;
    {
        const bool branch_taken_0x371b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371b24) {
            ctx->pc = 0x371B54u;
            return;
        }
    }
    ctx->pc = 0x371B2Cu;
    // 0x371b2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x371b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371b30: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x371b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x371b34: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371b3c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x371b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x371b40: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x371B40u;
    SET_GPR_U32(ctx, 31, 0x371B48u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x371B40u, 0x371B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371B48u;
label_371b48:
    // 0x371b48: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x371b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x371b4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x371B4Cu;
    {
        const bool branch_taken_0x371b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371b4c) {
            ctx->pc = 0x371B68u;
            return;
        }
    }
    ctx->pc = 0x371B54u;
}
