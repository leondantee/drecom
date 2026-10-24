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

// Function: entry_001fcaa0
// Address: 0x1fcaa0 - 0x1fcaec
void entry_001fcaa0_0x1fcaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcaa0_0x1fcaa0");
#endif

    switch (ctx->pc) {
        case 0x1fcac8u: goto label_1fcac8;
        default: break;
    }

    ctx->pc = 0x1fcaa0u;

    // 0x1fcaa0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcaa4: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcaa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fcaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fcaac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fcaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fcab0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcab4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcab8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcabc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcac0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FCAC0u;
    SET_GPR_U32(ctx, 31, 0x1FCAC8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FCAC0u, 0x1FCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAC8u;
label_1fcac8:
    // 0x1fcac8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcacc: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fcaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fcad0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCAD0u;
    {
        const bool branch_taken_0x1fcad0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fcad0) {
            ctx->pc = 0x1FCAECu;
            return;
        }
    }
    ctx->pc = 0x1FCAD8u;
    // 0x1fcad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcadc: 0x0  nop
    ctx->pc = 0x1fcadcu;
    // NOP
    // 0x1fcae0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fcae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fcae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCAE4u;
    {
        const bool branch_taken_0x1fcae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcae4) {
            ctx->pc = 0x1FCB08u;
            return;
        }
    }
    ctx->pc = 0x1FCAECu;
}
