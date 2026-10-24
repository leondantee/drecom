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
// Address: 0x2a6f48 - 0x2a7038
void caseD_3_0x2a6f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2a6f48");
#endif

    switch (ctx->pc) {
        case 0x2a6f58u: goto label_2a6f58;
        case 0x2a6f84u: goto label_2a6f84;
        case 0x2a6f94u: goto label_2a6f94;
        case 0x2a6fa8u: goto label_2a6fa8;
        case 0x2a702cu: goto label_2a702c;
        default: break;
    }

    ctx->pc = 0x2a6f48u;

    // 0x2a6f48: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f4c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a6f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a6f50: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A6F50u;
    SET_GPR_U32(ctx, 31, 0x2A6F58u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A6F50u, 0x2A6F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F58u;
label_2a6f58:
    // 0x2a6f58: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6f58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6f5c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f60: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x2a6f60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f64: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6f64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f68: 0x24ea0120  addiu       $t2, $a3, 0x120
    ctx->pc = 0x2a6f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2a6f6c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a6f6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a6f70: 0x25020120  addiu       $v0, $t0, 0x120
    ctx->pc = 0x2a6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x2a6f74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a6f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6f78: 0x25260180  addiu       $a2, $t1, 0x180
    ctx->pc = 0x2a6f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 384));
    // 0x2a6f7c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F84u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A6F7Cu, 0x2A6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F84u;
label_2a6f84:
    // 0x2a6f84: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6f8c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A6F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6F94u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A6F8Cu, 0x2A6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F94u;
label_2a6f94:
    // 0x2a6f94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6f98: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f9c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6f9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a6fa0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A6FA0u;
    SET_GPR_U32(ctx, 31, 0x2A6FA8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6FA0u, 0x2A6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6FA8u;
label_2a6fa8:
    // 0x2a6fa8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6fa8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6fac: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a6facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6fb0: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x2a6fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x2a6fb4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2a6fb4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6fb8: 0xc4e00180  lwc1        $f0, 0x180($a3)
    ctx->pc = 0x2a6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6fc0: 0xe4e00180  swc1        $f0, 0x180($a3)
    ctx->pc = 0x2a6fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 384), bits); }
    // 0x2a6fc4: 0x8fa90138  lw          $t1, 0x138($sp)
    ctx->pc = 0x2a6fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6fc8: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x2a6fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x2a6fcc: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2a6fccu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6fd0: 0xc5200188  lwc1        $f0, 0x188($t1)
    ctx->pc = 0x2a6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a6fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a6fd8: 0xe5200188  swc1        $f0, 0x188($t1)
    ctx->pc = 0x2a6fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 392), bits); }
    // 0x2a6fdc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6fe0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a6fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a6fe4: 0x10600120  beqz        $v1, . + 4 + (0x120 << 2)
    ctx->pc = 0x2A6FE4u;
    {
        const bool branch_taken_0x2a6fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6fe4) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A6FECu;
    // 0x2a6fec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a6ff0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ff4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a6ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a6ff8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ffc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a7000: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a7000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a7004: 0x8c460368  lw          $a2, 0x368($v0)
    ctx->pc = 0x2a7004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a7008: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a7008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a700c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2a700cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a7010: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a7010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a7014: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a7014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7018: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a7018u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a701c: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2a701cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7020: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2a7020u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a7024: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7024u;
    SET_GPR_U32(ctx, 31, 0x2A702Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7024u, 0x2A702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A702Cu;
label_2a702c:
    // 0x2a702c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a702cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7030: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2A7030u;
    {
        const bool branch_taken_0x2a7030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7030) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A7038u;
}
