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

// Function: entry_0025b714
// Address: 0x25b714 - 0x25b76c
void entry_0025b714_0x25b714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b714_0x25b714");
#endif

    switch (ctx->pc) {
        case 0x25b72cu: goto label_25b72c;
        default: break;
    }

    ctx->pc = 0x25b714u;

    // 0x25b714: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b718: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x25b718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x25b71c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x25b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x25b720: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x25b720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25b724: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x25B724u;
    SET_GPR_U32(ctx, 31, 0x25B72Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25B724u, 0x25B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B72Cu;
label_25b72c:
    // 0x25b72c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b730: 0xe4a002d8  swc1        $f0, 0x2D8($a1)
    ctx->pc = 0x25b730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 728), bits); }
    // 0x25b734: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b738: 0xc46102d8  lwc1        $f1, 0x2D8($v1)
    ctx->pc = 0x25b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25b73c: 0x3c05c974  lui         $a1, 0xC974
    ctx->pc = 0x25b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51572 << 16));
    // 0x25b740: 0x34a42400  ori         $a0, $a1, 0x2400
    ctx->pc = 0x25b740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9216);
    // 0x25b744: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25b744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b748: 0x0  nop
    ctx->pc = 0x25b748u;
    // NOP
    // 0x25b74c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25b74cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b750: 0x0  nop
    ctx->pc = 0x25b750u;
    // NOP
    // 0x25b754: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25B754u;
    {
        const bool branch_taken_0x25b754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b754) {
            ctx->pc = 0x25B76Cu;
            return;
        }
    }
    ctx->pc = 0x25B75Cu;
    // 0x25b75c: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b760: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x25b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b764: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b768: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x25b768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    ctx->pc = 0x25b76cu;
}
