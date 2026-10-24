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

// Function: entry_001fac08
// Address: 0x1fac08 - 0x1fac54
void entry_001fac08_0x1fac08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fac08_0x1fac08");
#endif

    switch (ctx->pc) {
        case 0x1fac30u: goto label_1fac30;
        default: break;
    }

    ctx->pc = 0x1fac08u;

    // 0x1fac08: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac0c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fac0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fac10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fac14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fac14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fac18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac1c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fac20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fac24: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1fac24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac28: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FAC28u;
    SET_GPR_U32(ctx, 31, 0x1FAC30u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FAC28u, 0x1FAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC30u;
label_1fac30:
    // 0x1fac30: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fac34: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fac34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fac38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAC38u;
    {
        const bool branch_taken_0x1fac38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fac38) {
            ctx->pc = 0x1FAC54u;
            return;
        }
    }
    ctx->pc = 0x1FAC40u;
    // 0x1fac40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fac40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac44: 0x0  nop
    ctx->pc = 0x1fac44u;
    // NOP
    // 0x1fac48: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fac48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fac4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAC4Cu;
    {
        const bool branch_taken_0x1fac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fac4c) {
            ctx->pc = 0x1FAC70u;
            return;
        }
    }
    ctx->pc = 0x1FAC54u;
}
