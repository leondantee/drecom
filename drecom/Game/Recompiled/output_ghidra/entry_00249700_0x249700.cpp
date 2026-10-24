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

// Function: entry_00249700
// Address: 0x249700 - 0x249770
void entry_00249700_0x249700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249700_0x249700");
#endif

    switch (ctx->pc) {
        case 0x249714u: goto label_249714;
        default: break;
    }

    ctx->pc = 0x249700u;

    // 0x249700: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x249700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x249704: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x249704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x249708: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x249708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24970c: 0xc067594  jal         func_19D650
    ctx->pc = 0x24970Cu;
    SET_GPR_U32(ctx, 31, 0x249714u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x24970Cu, 0x249714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249714u;
label_249714:
    // 0x249714: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x249714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x249718: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x249718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24971c: 0x3c044496  lui         $a0, 0x4496
    ctx->pc = 0x24971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17558 << 16));
    // 0x249720: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249720u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249724: 0x0  nop
    ctx->pc = 0x249724u;
    // NOP
    // 0x249728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x249728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24972c: 0x0  nop
    ctx->pc = 0x24972cu;
    // NOP
    // 0x249730: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x249730u;
    {
        const bool branch_taken_0x249730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x249730) {
            ctx->pc = 0x249770u;
            return;
        }
    }
    ctx->pc = 0x249738u;
    // 0x249738: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24973c: 0x84a2002c  lh          $v0, 0x2C($a1)
    ctx->pc = 0x24973cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x249740: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249740u;
    {
        const bool branch_taken_0x249740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249740) {
            ctx->pc = 0x249770u;
            return;
        }
    }
    ctx->pc = 0x249748u;
    // 0x249748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24974c: 0x0  nop
    ctx->pc = 0x24974cu;
    // NOP
    // 0x249750: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x249754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249758: 0x0  nop
    ctx->pc = 0x249758u;
    // NOP
    // 0x24975c: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x24975cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x249760: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x249760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x249764: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x249764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249768: 0xa4c5002c  sh          $a1, 0x2C($a2)
    ctx->pc = 0x249768u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x24976c: 0x0  nop
    ctx->pc = 0x24976cu;
    // NOP
    ctx->pc = 0x249770u;
}
