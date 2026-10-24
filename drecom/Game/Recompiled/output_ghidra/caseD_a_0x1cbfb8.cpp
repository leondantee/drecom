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

// Function: caseD_a
// Address: 0x1cbfb8 - 0x1cc050
void caseD_a_0x1cbfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1cbfb8");
#endif

    switch (ctx->pc) {
        case 0x1cbfc0u: goto label_1cbfc0;
        case 0x1cbfd0u: goto label_1cbfd0;
        case 0x1cbfe4u: goto label_1cbfe4;
        case 0x1cbff8u: goto label_1cbff8;
        case 0x1cc00cu: goto label_1cc00c;
        default: break;
    }

    ctx->pc = 0x1cbfb8u;

    // 0x1cbfb8: 0xc072e20  jal         func_1CB880
    ctx->pc = 0x1CBFB8u;
    SET_GPR_U32(ctx, 31, 0x1CBFC0u);
    ctx->pc = 0x1CB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB880u, 0x1CBFB8u, 0x1CBFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFC0u;
label_1cbfc0:
    // 0x1cbfc0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbfc4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cbfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cbfc8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CBFC8u;
    SET_GPR_U32(ctx, 31, 0x1CBFD0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CBFC8u, 0x1CBFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFD0u;
label_1cbfd0:
    // 0x1cbfd0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbfd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbfd8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1cbfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbfdc: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x1CBFDCu;
    SET_GPR_U32(ctx, 31, 0x1CBFE4u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x1CBFDCu, 0x1CBFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFE4u;
label_1cbfe4:
    // 0x1cbfe4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cbfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cbfe8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbfec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cbfecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cbff0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CBFF0u;
    SET_GPR_U32(ctx, 31, 0x1CBFF8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CBFF0u, 0x1CBFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFF8u;
label_1cbff8:
    // 0x1cbff8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbffc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cc000: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cc000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cc004: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CC004u;
    SET_GPR_U32(ctx, 31, 0x1CC00Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CC004u, 0x1CC00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC00Cu;
label_1cc00c:
    // 0x1cc00c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1cc010: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc014: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc018: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc01c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cc01cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc020: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc024: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc028: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc02c: 0x0  nop
    ctx->pc = 0x1cc02cu;
    // NOP
    // 0x1cc030: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC030u;
    {
        const bool branch_taken_0x1cc030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc030) {
            ctx->pc = 0x1CC050u;
            return;
        }
    }
    ctx->pc = 0x1CC038u;
    // 0x1cc038: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cc038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc03c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc040: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cc040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc044: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cc048: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc04c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cc04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1cc050u;
}
