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

// Function: entry_0034f8a4
// Address: 0x34f8a4 - 0x34f964
void entry_0034f8a4_0x34f8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f8a4_0x34f8a4");
#endif

    switch (ctx->pc) {
        case 0x34f8b0u: goto label_34f8b0;
        case 0x34f8fcu: goto label_34f8fc;
        case 0x34f908u: goto label_34f908;
        case 0x34f95cu: goto label_34f95c;
        default: break;
    }

    ctx->pc = 0x34f8a4u;

    // 0x34f8a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F8A8u;
    SET_GPR_U32(ctx, 31, 0x34F8B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F8A8u, 0x34F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8B0u;
label_34f8b0:
    // 0x34f8b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f8b8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f8c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f8c8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34f8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34f8cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f8d4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f8d8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34f8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f8e0: 0x0  nop
    ctx->pc = 0x34f8e0u;
    // NOP
    // 0x34f8e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f8e8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f8ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f8f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f8f4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F8F4u;
    SET_GPR_U32(ctx, 31, 0x34F8FCu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F8F4u, 0x34F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8FCu;
label_34f8fc:
    // 0x34f8fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f900: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F900u;
    SET_GPR_U32(ctx, 31, 0x34F908u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F900u, 0x34F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F908u;
label_34f908:
    // 0x34f908: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f90c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f910: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f914: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34f914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x34f918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f91c: 0x0  nop
    ctx->pc = 0x34f91cu;
    // NOP
    // 0x34f920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f924: 0x0  nop
    ctx->pc = 0x34f924u;
    // NOP
    // 0x34f928: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x34F928u;
    {
        const bool branch_taken_0x34f928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f928) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34F930u;
    // 0x34f930: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34f934: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f938: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34f938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f93c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f940: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f944: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34f944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34f948: 0x24061035  addiu       $a2, $zero, 0x1035
    ctx->pc = 0x34f948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4149));
    // 0x34f94c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34f94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f950: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34f950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34f954: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34F954u;
    SET_GPR_U32(ctx, 31, 0x34F95Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34F954u, 0x34F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F95Cu;
label_34f95c:
    // 0x34f95c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x34F95Cu;
    {
        const bool branch_taken_0x34f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f95c) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34F964u;
}
