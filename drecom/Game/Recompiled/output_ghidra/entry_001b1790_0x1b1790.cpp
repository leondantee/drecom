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

// Function: entry_001b1790
// Address: 0x1b1790 - 0x1b17b8
void entry_001b1790_0x1b1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1790_0x1b1790");
#endif

    switch (ctx->pc) {
        case 0x1b17b4u: goto label_1b17b4;
        default: break;
    }

    ctx->pc = 0x1b1790u;

    // 0x1b1790: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1794: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1794u;
    {
        const bool branch_taken_0x1b1794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1794) {
            ctx->pc = 0x1B17B8u;
            return;
        }
    }
    ctx->pc = 0x1B179Cu;
    // 0x1b179c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b17a0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1b17a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b17a4: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1b17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b17a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b17ac: 0xc06c224  jal         func_1B0890
    ctx->pc = 0x1B17ACu;
    SET_GPR_U32(ctx, 31, 0x1B17B4u);
    ctx->pc = 0x1B0890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0890u, 0x1B17ACu, 0x1B17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B4u;
label_1b17b4:
    // 0x1b17b4: 0x0  nop
    ctx->pc = 0x1b17b4u;
    // NOP
    ctx->pc = 0x1b17b8u;
}
