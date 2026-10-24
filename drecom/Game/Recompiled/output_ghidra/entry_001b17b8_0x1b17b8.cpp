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

// Function: entry_001b17b8
// Address: 0x1b17b8 - 0x1b17e0
void entry_001b17b8_0x1b17b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b17b8_0x1b17b8");
#endif

    switch (ctx->pc) {
        case 0x1b17dcu: goto label_1b17dc;
        default: break;
    }

    ctx->pc = 0x1b17b8u;

    // 0x1b17b8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1b17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b17bc: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B17BCu;
    {
        const bool branch_taken_0x1b17bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b17bc) {
            ctx->pc = 0x1B17E0u;
            return;
        }
    }
    ctx->pc = 0x1B17C4u;
    // 0x1b17c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b17c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b17c8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1b17c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1b17cc: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b17ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b17d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17d4: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B17D4u;
    SET_GPR_U32(ctx, 31, 0x1B17DCu);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B17D4u, 0x1B17DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17DCu;
label_1b17dc:
    // 0x1b17dc: 0x0  nop
    ctx->pc = 0x1b17dcu;
    // NOP
    ctx->pc = 0x1b17e0u;
}
