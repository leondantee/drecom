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

// Function: caseD_5
// Address: 0x1cb9d4 - 0x1cb9f8
void caseD_5_0x1cb9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1cb9d4");
#endif

    switch (ctx->pc) {
        case 0x1cb9f4u: goto label_1cb9f4;
        default: break;
    }

    ctx->pc = 0x1cb9d4u;

    // 0x1cb9d4: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x1cb9d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB9D8u;
    {
        const bool branch_taken_0x1cb9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9d8) {
            ctx->pc = 0x1CB9F8u;
            return;
        }
    }
    ctx->pc = 0x1CB9E0u;
    // 0x1cb9e0: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x1cb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x1cb9e4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x1cb9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1cb9e8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cb9ec: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1CB9ECu;
    SET_GPR_U32(ctx, 31, 0x1CB9F4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1CB9ECu, 0x1CB9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9F4u;
label_1cb9f4:
    // 0x1cb9f4: 0xe6001b54  swc1        $f0, 0x1B54($s0)
    ctx->pc = 0x1cb9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6996), bits); }
    ctx->pc = 0x1cb9f8u;
}
