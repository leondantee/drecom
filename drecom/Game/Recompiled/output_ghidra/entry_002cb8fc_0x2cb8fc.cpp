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

// Function: entry_002cb8fc
// Address: 0x2cb8fc - 0x2cba00
void entry_002cb8fc_0x2cb8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb8fc_0x2cb8fc");
#endif

    switch (ctx->pc) {
        case 0x2cb90cu: goto label_2cb90c;
        case 0x2cb92cu: goto label_2cb92c;
        case 0x2cb93cu: goto label_2cb93c;
        case 0x2cb948u: goto label_2cb948;
        case 0x2cb9d4u: goto label_2cb9d4;
        default: break;
    }

    ctx->pc = 0x2cb8fcu;

    // 0x2cb8fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb900: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb904: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB904u;
    SET_GPR_U32(ctx, 31, 0x2CB90Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB904u, 0x2CB90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB90Cu;
label_2cb90c:
    // 0x2cb90c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb910: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb918: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb91c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb920: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb924: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB924u;
    SET_GPR_U32(ctx, 31, 0x2CB92Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB924u, 0x2CB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB92Cu;
label_2cb92c:
    // 0x2cb92c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb934: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB934u;
    SET_GPR_U32(ctx, 31, 0x2CB93Cu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB934u, 0x2CB93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB93Cu;
label_2cb93c:
    // 0x2cb93c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb940: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB940u;
    SET_GPR_U32(ctx, 31, 0x2CB948u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB940u, 0x2CB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB948u;
label_2cb948:
    // 0x2cb948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb94c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb950: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cb950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb954: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb958: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb95c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb95cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb960: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb964: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb968: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb96c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb970: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb974: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb978: 0x0  nop
    ctx->pc = 0x2cb978u;
    // NOP
    // 0x2cb97c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb97cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb980: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb984: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb988: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb98c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2cb98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb990: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb994: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cb994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb998: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb99c: 0x0  nop
    ctx->pc = 0x2cb99cu;
    // NOP
    // 0x2cb9a0: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x2CB9A0u;
    {
        const bool branch_taken_0x2cb9a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb9a0) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CB9A8u;
    // 0x2cb9a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb9ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9b0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb9b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb9c0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2cb9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2cb9c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb9c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb9cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB9CCu;
    SET_GPR_U32(ctx, 31, 0x2CB9D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB9CCu, 0x2CB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB9D4u;
label_2cb9d4:
    // 0x2cb9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb9d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9dc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cb9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cb9e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb9e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9e8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb9ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb9f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb9f4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2cb9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2cb9f8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2CB9F8u;
    {
        const bool branch_taken_0x2cb9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb9f8) {
            ctx->pc = 0x2CBC24u;
            return;
        }
    }
    ctx->pc = 0x2CBA00u;
}
