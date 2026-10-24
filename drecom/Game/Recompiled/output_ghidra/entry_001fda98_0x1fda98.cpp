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

// Function: entry_001fda98
// Address: 0x1fda98 - 0x1fdae4
void entry_001fda98_0x1fda98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fda98_0x1fda98");
#endif

    switch (ctx->pc) {
        case 0x1fdac0u: goto label_1fdac0;
        default: break;
    }

    ctx->pc = 0x1fda98u;

    // 0x1fda98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fda9c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fda9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdaa0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fdaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fdaa4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fdaa8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdaac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fdaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fdab0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fdab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fdab4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1fdab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdab8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FDAB8u;
    SET_GPR_U32(ctx, 31, 0x1FDAC0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FDAB8u, 0x1FDAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAC0u;
label_1fdac0:
    // 0x1fdac0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1fdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdac4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fdac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fdac8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDAC8u;
    {
        const bool branch_taken_0x1fdac8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fdac8) {
            ctx->pc = 0x1FDAE4u;
            return;
        }
    }
    ctx->pc = 0x1FDAD0u;
    // 0x1fdad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fdad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdad4: 0x0  nop
    ctx->pc = 0x1fdad4u;
    // NOP
    // 0x1fdad8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fdad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fdadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDADCu;
    {
        const bool branch_taken_0x1fdadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdadc) {
            ctx->pc = 0x1FDB00u;
            return;
        }
    }
    ctx->pc = 0x1FDAE4u;
}
