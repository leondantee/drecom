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

// Function: entry_001fc73c
// Address: 0x1fc73c - 0x1fc788
void entry_001fc73c_0x1fc73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc73c_0x1fc73c");
#endif

    switch (ctx->pc) {
        case 0x1fc764u: goto label_1fc764;
        default: break;
    }

    ctx->pc = 0x1fc73cu;

    // 0x1fc73c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc740: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc748: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc750: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc754: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc758: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc75c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC75Cu;
    SET_GPR_U32(ctx, 31, 0x1FC764u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC75Cu, 0x1FC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC764u;
label_1fc764:
    // 0x1fc764: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc768: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc76c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC76Cu;
    {
        const bool branch_taken_0x1fc76c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc76c) {
            ctx->pc = 0x1FC788u;
            return;
        }
    }
    ctx->pc = 0x1FC774u;
    // 0x1fc774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc778: 0x0  nop
    ctx->pc = 0x1fc778u;
    // NOP
    // 0x1fc77c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc780: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC780u;
    {
        const bool branch_taken_0x1fc780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc780) {
            ctx->pc = 0x1FC7A4u;
            return;
        }
    }
    ctx->pc = 0x1FC788u;
}
