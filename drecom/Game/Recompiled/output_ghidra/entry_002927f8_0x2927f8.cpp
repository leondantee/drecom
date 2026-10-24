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

// Function: entry_002927f8
// Address: 0x2927f8 - 0x292824
void entry_002927f8_0x2927f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002927f8_0x2927f8");
#endif

    switch (ctx->pc) {
        case 0x292818u: goto label_292818;
        default: break;
    }

    ctx->pc = 0x2927f8u;

    // 0x2927f8: 0x8e026870  lw          $v0, 0x6870($s0)
    ctx->pc = 0x2927f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26736)));
    // 0x2927fc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2927fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x292800: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x292800u;
    {
        const bool branch_taken_0x292800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292800) {
            ctx->pc = 0x292824u;
            return;
        }
    }
    ctx->pc = 0x292808u;
    // 0x292808: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x292808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x29280c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x29280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x292810: 0xc0a4a44  jal         func_292910
    ctx->pc = 0x292810u;
    SET_GPR_U32(ctx, 31, 0x292818u);
    ctx->pc = 0x292910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292910u, 0x292810u, 0x292818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292818u;
label_292818:
    // 0x292818: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x292818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29281c: 0xc05dbf4  jal         func_176FD0
    ctx->pc = 0x29281Cu;
    SET_GPR_U32(ctx, 31, 0x292824u);
    ctx->pc = 0x176FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FD0u, 0x29281Cu, 0x292824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292824u;
}
