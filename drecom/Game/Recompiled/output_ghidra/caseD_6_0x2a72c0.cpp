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
// Address: 0x2a72c0 - 0x2a733c
void caseD_6_0x2a72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2a72c0");
#endif

    switch (ctx->pc) {
        case 0x2a72d0u: goto label_2a72d0;
        default: break;
    }

    ctx->pc = 0x2a72c0u;

    // 0x2a72c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a72c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a72c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a72c8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A72C8u;
    SET_GPR_U32(ctx, 31, 0x2A72D0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A72C8u, 0x2A72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72D0u;
label_2a72d0:
    // 0x2a72d0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a72d4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x2a72d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72d8: 0x3c073a94  lui         $a3, 0x3A94
    ctx->pc = 0x2a72d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)14996 << 16));
    // 0x2a72dc: 0x34e2f209  ori         $v0, $a3, 0xF209
    ctx->pc = 0x2a72dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61961);
    // 0x2a72e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a72e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a72e4: 0x0  nop
    ctx->pc = 0x2a72e4u;
    // NOP
    // 0x2a72e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a72e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a72ec: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2a72ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x2a72f0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a72f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a72f4: 0xc4c101a4  lwc1        $f1, 0x1A4($a2)
    ctx->pc = 0x2a72f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72f8: 0x3c023a72  lui         $v0, 0x3A72
    ctx->pc = 0x2a72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14962 << 16));
    // 0x2a72fc: 0x3443b9d6  ori         $v1, $v0, 0xB9D6
    ctx->pc = 0x2a72fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47574);
    // 0x2a7300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a7300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7304: 0x0  nop
    ctx->pc = 0x2a7304u;
    // NOP
    // 0x2a7308: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a7308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a730c: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x2a730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
    // 0x2a7310: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a7310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7314: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x2a7314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a731c: 0x0  nop
    ctx->pc = 0x2a731cu;
    // NOP
    // 0x2a7320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7324: 0x0  nop
    ctx->pc = 0x2a7324u;
    // NOP
    // 0x2a7328: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7328u;
    {
        const bool branch_taken_0x2a7328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7328) {
            ctx->pc = 0x2A733Cu;
            return;
        }
    }
    ctx->pc = 0x2A7330u;
    // 0x2a7330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7334: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a7334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7338: 0xe4c001a4  swc1        $f0, 0x1A4($a2)
    ctx->pc = 0x2a7338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 420), bits); }
    ctx->pc = 0x2a733cu;
}
