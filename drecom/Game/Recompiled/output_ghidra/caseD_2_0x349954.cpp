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

// Function: caseD_2
// Address: 0x349954 - 0x349a0c
void caseD_2_0x349954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x349954");
#endif

    switch (ctx->pc) {
        case 0x349960u: goto label_349960;
        case 0x3499acu: goto label_3499ac;
        case 0x3499b8u: goto label_3499b8;
        default: break;
    }

    ctx->pc = 0x349954u;

    // 0x349954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349958: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349958u;
    SET_GPR_U32(ctx, 31, 0x349960u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349958u, 0x349960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349960u;
label_349960:
    // 0x349960: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349964: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349968: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34996c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349970: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349974: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349978: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34997c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349980: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349984: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349988: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34998c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349990: 0x0  nop
    ctx->pc = 0x349990u;
    // NOP
    // 0x349994: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349998: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34999c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3499a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3499a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3499a4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3499A4u;
    SET_GPR_U32(ctx, 31, 0x3499ACu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3499A4u, 0x3499ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499ACu;
label_3499ac:
    // 0x3499ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3499acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3499b0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3499B0u;
    SET_GPR_U32(ctx, 31, 0x3499B8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3499B0u, 0x3499B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499B8u;
label_3499b8:
    // 0x3499b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3499b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3499bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3499bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3499c0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3499c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3499c4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3499c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3499c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3499cc: 0x0  nop
    ctx->pc = 0x3499ccu;
    // NOP
    // 0x3499d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3499d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3499d4: 0x0  nop
    ctx->pc = 0x3499d4u;
    // NOP
    // 0x3499d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3499D8u;
    {
        const bool branch_taken_0x3499d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3499d8) {
            ctx->pc = 0x349A0Cu;
            return;
        }
    }
    ctx->pc = 0x3499E0u;
    // 0x3499e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3499e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3499e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3499e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3499e8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3499e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3499ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3499ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3499f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3499f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3499f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3499f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3499f8: 0x24060810  addiu       $a2, $zero, 0x810
    ctx->pc = 0x3499f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
    // 0x3499fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3499fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349a00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349a04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x349A04u;
    SET_GPR_U32(ctx, 31, 0x349A0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349A04u, 0x349A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A0Cu;
}
