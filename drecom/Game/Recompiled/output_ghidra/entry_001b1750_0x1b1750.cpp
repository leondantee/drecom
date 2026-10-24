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

// Function: entry_001b1750
// Address: 0x1b1750 - 0x1b1790
void entry_001b1750_0x1b1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1750_0x1b1750");
#endif

    switch (ctx->pc) {
        case 0x1b1774u: goto label_1b1774;
        case 0x1b178cu: goto label_1b178c;
        default: break;
    }

    ctx->pc = 0x1b1750u;

    // 0x1b1750: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b1750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1754: 0x1603000e  bne         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1754u;
    {
        const bool branch_taken_0x1b1754 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1754) {
            ctx->pc = 0x1B1790u;
            return;
        }
    }
    ctx->pc = 0x1B175Cu;
    // 0x1b175c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1760: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b1764: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b1764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1768: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b176c: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B176Cu;
    SET_GPR_U32(ctx, 31, 0x1B1774u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B176Cu, 0x1B1774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1774u;
label_1b1774:
    // 0x1b1774: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b1778: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b177c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1784: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B1784u;
    SET_GPR_U32(ctx, 31, 0x1B178Cu);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B1784u, 0x1B178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B178Cu;
label_1b178c:
    // 0x1b178c: 0x0  nop
    ctx->pc = 0x1b178cu;
    // NOP
    ctx->pc = 0x1b1790u;
}
