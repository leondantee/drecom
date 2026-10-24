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

// Function: entry_002a526c
// Address: 0x2a526c - 0x2a5348
void entry_002a526c_0x2a526c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a526c_0x2a526c");
#endif

    switch (ctx->pc) {
        case 0x2a5280u: goto label_2a5280;
        case 0x2a52acu: goto label_2a52ac;
        case 0x2a52c4u: goto label_2a52c4;
        case 0x2a52d0u: goto label_2a52d0;
        case 0x2a533cu: goto label_2a533c;
        default: break;
    }

    ctx->pc = 0x2a526cu;

    // 0x2a526c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5270: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5274: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a5274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a5278: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5278u;
    SET_GPR_U32(ctx, 31, 0x2A5280u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5278u, 0x2A5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5280u;
label_2a5280:
    // 0x2a5280: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5284: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5288: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a528c: 0x24860120  addiu       $a2, $a0, 0x120
    ctx->pc = 0x2a528cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a5290: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a5290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5294: 0x24670120  addiu       $a3, $v1, 0x120
    ctx->pc = 0x2a5294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a5298: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5298u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a529c: 0x24480180  addiu       $t0, $v0, 0x180
    ctx->pc = 0x2a529cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a52a0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a52a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a52a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A52A4u;
    SET_GPR_U32(ctx, 31, 0x2A52ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A52A4u, 0x2A52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52ACu;
label_2a52ac:
    // 0x2a52ac: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a52acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a52b0: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a52b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52b4: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a52b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a52b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a52b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a52bc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A52BCu;
    SET_GPR_U32(ctx, 31, 0x2A52C4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A52BCu, 0x2A52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52C4u;
label_2a52c4:
    // 0x2a52c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52c8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A52C8u;
    SET_GPR_U32(ctx, 31, 0x2A52D0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A52C8u, 0x2A52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52D0u;
label_2a52d0:
    // 0x2a52d0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52d4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2a52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2a52d8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a52d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a52dc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x2a52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a52e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a52e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a52e4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a52e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a52e8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a52e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52ec: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2a52ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x2a52f0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a52f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a52f4: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a52f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a52f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a52fc: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a52fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a5300: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a5300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5304: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x2a5304u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x2a5308: 0x1100007f  beqz        $t0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2A5308u;
    {
        const bool branch_taken_0x2a5308 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5308) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A5310u;
    // 0x2a5310: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a5310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a5314: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a5314u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5318: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a5318u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a531c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5320: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5324: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a5324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a5328: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2a5328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a532c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a532cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a5330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A5334u;
    SET_GPR_U32(ctx, 31, 0x2A533Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5334u, 0x2A533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A533Cu;
label_2a533c:
    // 0x2a533c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a533cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5340: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2A5340u;
    {
        const bool branch_taken_0x2a5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5340) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A5348u;
}
