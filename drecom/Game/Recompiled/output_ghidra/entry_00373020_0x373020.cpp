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

// Function: entry_00373020
// Address: 0x373020 - 0x373078
void entry_00373020_0x373020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373020_0x373020");
#endif

    switch (ctx->pc) {
        case 0x373038u: goto label_373038;
        default: break;
    }

    ctx->pc = 0x373020u;

    // 0x373020: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373024: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x373024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x373028: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x373028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x37302c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x37302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x373030: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x373030u;
    SET_GPR_U32(ctx, 31, 0x373038u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x373030u, 0x373038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373038u;
label_373038:
    // 0x373038: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37303c: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x37303cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x373040: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373044: 0xc48102d8  lwc1        $f1, 0x2D8($a0)
    ctx->pc = 0x373044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373048: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x373048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x37304c: 0x34652400  ori         $a1, $v1, 0x2400
    ctx->pc = 0x37304cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x373050: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x373050u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373054: 0x0  nop
    ctx->pc = 0x373054u;
    // NOP
    // 0x373058: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x373058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37305c: 0x0  nop
    ctx->pc = 0x37305cu;
    // NOP
    // 0x373060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x373060u;
    {
        const bool branch_taken_0x373060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x373060) {
            ctx->pc = 0x373078u;
            return;
        }
    }
    ctx->pc = 0x373068u;
    // 0x373068: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37306c: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x37306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373070: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x373070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373074: 0xe4a002d8  swc1        $f0, 0x2D8($a1)
    ctx->pc = 0x373074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 728), bits); }
    ctx->pc = 0x373078u;
}
