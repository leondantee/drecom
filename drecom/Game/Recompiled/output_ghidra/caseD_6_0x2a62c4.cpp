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

// Function: caseD_6
// Address: 0x2a62c4 - 0x2a6340
void caseD_6_0x2a62c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2a62c4");
#endif

    switch (ctx->pc) {
        case 0x2a62d0u: goto label_2a62d0;
        default: break;
    }

    ctx->pc = 0x2a62c4u;

    // 0x2a62c4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a62c8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A62C8u;
    SET_GPR_U32(ctx, 31, 0x2A62D0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A62C8u, 0x2A62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62D0u;
label_2a62d0:
    // 0x2a62d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a62d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a62d4: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a62d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a62d8: 0xc4c101a0  lwc1        $f1, 0x1A0($a2)
    ctx->pc = 0x2a62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a62dc: 0x3c083a94  lui         $t0, 0x3A94
    ctx->pc = 0x2a62dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)14996 << 16));
    // 0x2a62e0: 0x3507f209  ori         $a3, $t0, 0xF209
    ctx->pc = 0x2a62e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)61961);
    // 0x2a62e4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a62e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a62e8: 0x0  nop
    ctx->pc = 0x2a62e8u;
    // NOP
    // 0x2a62ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a62ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a62f0: 0xe4c001a0  swc1        $f0, 0x1A0($a2)
    ctx->pc = 0x2a62f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 416), bits); }
    // 0x2a62f4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a62f8: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2a62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a62fc: 0x3c033a72  lui         $v1, 0x3A72
    ctx->pc = 0x2a62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14962 << 16));
    // 0x2a6300: 0x3463b9d6  ori         $v1, $v1, 0xB9D6
    ctx->pc = 0x2a6300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47574);
    // 0x2a6304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a6304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6308: 0x0  nop
    ctx->pc = 0x2a6308u;
    // NOP
    // 0x2a630c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a630cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6310: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2a6310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x2a6314: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6318: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2a6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a631c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a631cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6320: 0x0  nop
    ctx->pc = 0x2a6320u;
    // NOP
    // 0x2a6324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a6324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6328: 0x0  nop
    ctx->pc = 0x2a6328u;
    // NOP
    // 0x2a632c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A632Cu;
    {
        const bool branch_taken_0x2a632c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a632c) {
            ctx->pc = 0x2A6340u;
            return;
        }
    }
    ctx->pc = 0x2A6334u;
    // 0x2a6334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6338: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a633c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2a633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    ctx->pc = 0x2a6340u;
}
