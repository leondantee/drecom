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

// Function: entry_00209880
// Address: 0x209880 - 0x209898
void entry_00209880_0x209880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209880_0x209880");
#endif

    switch (ctx->pc) {
        case 0x209890u: goto label_209890;
        default: break;
    }

    ctx->pc = 0x209880u;

    // 0x209880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209884: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x209888: 0xc080f60  jal         func_203D80
    ctx->pc = 0x209888u;
    SET_GPR_U32(ctx, 31, 0x209890u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209888u, 0x209890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209890u;
label_209890:
    // 0x209890: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x209890u;
    {
        const bool branch_taken_0x209890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209890) {
            ctx->pc = 0x209CA0u;
            return;
        }
    }
    ctx->pc = 0x209898u;
}
