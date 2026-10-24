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

// Function: entry_0031ac8c
// Address: 0x31ac8c - 0x31acbc
void entry_0031ac8c_0x31ac8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ac8c_0x31ac8c");
#endif

    switch (ctx->pc) {
        case 0x31ac94u: goto label_31ac94;
        default: break;
    }

    ctx->pc = 0x31ac8cu;

    // 0x31ac8c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x31AC8Cu;
    SET_GPR_U32(ctx, 31, 0x31AC94u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x31AC8Cu, 0x31AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AC94u;
label_31ac94:
    // 0x31ac94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31ac94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31ac98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x31ac9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31AC9Cu;
    {
        const bool branch_taken_0x31ac9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ac9c) {
            ctx->pc = 0x31ACBCu;
            return;
        }
    }
    ctx->pc = 0x31ACA4u;
    // 0x31aca4: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x31aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x31aca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31aca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31acac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acb0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x31acb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x31acb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31ACB4u;
    {
        const bool branch_taken_0x31acb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31acb4) {
            ctx->pc = 0x31ACCCu;
            return;
        }
    }
    ctx->pc = 0x31ACBCu;
}
