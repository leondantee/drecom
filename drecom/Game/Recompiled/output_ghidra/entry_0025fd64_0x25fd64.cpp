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

// Function: entry_0025fd64
// Address: 0x25fd64 - 0x25fdac
void entry_0025fd64_0x25fd64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fd64_0x25fd64");
#endif

    switch (ctx->pc) {
        case 0x25fd7cu: goto label_25fd7c;
        default: break;
    }

    ctx->pc = 0x25fd64u;

    // 0x25fd64: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x25fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x25fd68: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25fd68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25fd6c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x25fd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25fd70: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x25fd70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x25fd74: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x25FD74u;
    SET_GPR_U32(ctx, 31, 0x25FD7Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25FD74u, 0x25FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FD7Cu;
label_25fd7c:
    // 0x25fd7c: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x25fd80: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x25fd84: 0x34462400  ori         $a2, $v0, 0x2400
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x25fd88: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25fd88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25fd8c: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x25fd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fd90: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x25fd90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25fd94: 0x0  nop
    ctx->pc = 0x25fd94u;
    // NOP
    // 0x25fd98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25FD98u;
    {
        const bool branch_taken_0x25fd98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25fd98) {
            ctx->pc = 0x25FDACu;
            return;
        }
    }
    ctx->pc = 0x25FDA0u;
    // 0x25fda0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25fda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fda4: 0x0  nop
    ctx->pc = 0x25fda4u;
    // NOP
    // 0x25fda8: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x25fda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    ctx->pc = 0x25fdacu;
}
