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

// Function: entry_0022185c
// Address: 0x22185c - 0x2218c0
void entry_0022185c_0x22185c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022185c_0x22185c");
#endif

    switch (ctx->pc) {
        case 0x2218a8u: goto label_2218a8;
        case 0x2218b4u: goto label_2218b4;
        default: break;
    }

    ctx->pc = 0x22185cu;

    // 0x22185c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221860: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x221860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221864: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x221864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x221868: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22186c: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x22186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221870: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x221870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x221874: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x221874u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x221878: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x221878u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22187c: 0x0  nop
    ctx->pc = 0x22187cu;
    // NOP
    // 0x221880: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x221880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x221884: 0x8fb001a8  lw          $s0, 0x1A8($sp)
    ctx->pc = 0x221884u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221888: 0xc6001204  lwc1        $f0, 0x1204($s0)
    ctx->pc = 0x221888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22188c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x22188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x221890: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x221890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x221894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x221894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221898: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x221898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x22189c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22189cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2218a0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2218A0u;
    SET_GPR_U32(ctx, 31, 0x2218A8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2218A0u, 0x2218A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218A8u;
label_2218a8:
    // 0x2218a8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2218a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2218ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2218ACu;
    SET_GPR_U32(ctx, 31, 0x2218B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2218ACu, 0x2218B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2218B4u;
label_2218b4:
    // 0x2218b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2218b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2218b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2218B8u;
    {
        const bool branch_taken_0x2218b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2218b8) {
            ctx->pc = 0x221944u;
            return;
        }
    }
    ctx->pc = 0x2218C0u;
}
