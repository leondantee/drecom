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

// Function: caseD_3
// Address: 0x2a5f60 - 0x2a6038
void caseD_3_0x2a5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2a5f60");
#endif

    switch (ctx->pc) {
        case 0x2a5f70u: goto label_2a5f70;
        case 0x2a5f9cu: goto label_2a5f9c;
        case 0x2a5fb4u: goto label_2a5fb4;
        case 0x2a5fc0u: goto label_2a5fc0;
        case 0x2a602cu: goto label_2a602c;
        default: break;
    }

    ctx->pc = 0x2a5f60u;

    // 0x2a5f60: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a5f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a5f68: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5F68u;
    SET_GPR_U32(ctx, 31, 0x2A5F70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5F68u, 0x2A5F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F70u;
label_2a5f70:
    // 0x2a5f70: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f74: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a5f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f78: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f7c: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x2a5f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a5f80: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a5f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5f84: 0x24a80120  addiu       $t0, $a1, 0x120
    ctx->pc = 0x2a5f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a5f88: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a5f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5f8c: 0x24c90180  addiu       $t1, $a2, 0x180
    ctx->pc = 0x2a5f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x2a5f90: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a5f90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a5f94: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A5F94u;
    SET_GPR_U32(ctx, 31, 0x2A5F9Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A5F94u, 0x2A5F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F9Cu;
label_2a5f9c:
    // 0x2a5f9c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5f9cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5fa0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5fa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5fa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5fa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5fac: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A5FACu;
    SET_GPR_U32(ctx, 31, 0x2A5FB4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5FACu, 0x2A5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FB4u;
label_2a5fb4:
    // 0x2a5fb4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5fb8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A5FB8u;
    SET_GPR_U32(ctx, 31, 0x2A5FC0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5FB8u, 0x2A5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5FC0u;
label_2a5fc0:
    // 0x2a5fc0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5fc4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2a5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x2a5fc8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a5fc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5fcc: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2a5fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5fd4: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2a5fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2a5fd8: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x2a5fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5fdc: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x2a5fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x2a5fe0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a5fe0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a5fe4: 0xc4c00188  lwc1        $f0, 0x188($a2)
    ctx->pc = 0x2a5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a5fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a5fec: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a5fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a5ff0: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a5ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ff4: 0x910909e7  lbu         $t1, 0x9E7($t0)
    ctx->pc = 0x2a5ff4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x2a5ff8: 0x11200116  beqz        $t1, . + 4 + (0x116 << 2)
    ctx->pc = 0x2A5FF8u;
    {
        const bool branch_taken_0x2a5ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ff8) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A6000u;
    // 0x2a6000: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2a6000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a6004: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6008: 0xa04a0002  sb          $t2, 0x2($v0)
    ctx->pc = 0x2a6008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a600c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6010: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6014: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a6014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a6018: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2a6018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a601c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a601cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6020: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a6024: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A6024u;
    SET_GPR_U32(ctx, 31, 0x2A602Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A6024u, 0x2A602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A602Cu;
label_2a602c:
    // 0x2a602c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a602cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6030: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x2A6030u;
    {
        const bool branch_taken_0x2a6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6030) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A6038u;
}
