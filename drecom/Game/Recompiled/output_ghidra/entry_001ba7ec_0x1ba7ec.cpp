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

// Function: entry_001ba7ec
// Address: 0x1ba7ec - 0x1ba8bc
void entry_001ba7ec_0x1ba7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba7ec_0x1ba7ec");
#endif

    switch (ctx->pc) {
        case 0x1ba80cu: goto label_1ba80c;
        case 0x1ba81cu: goto label_1ba81c;
        case 0x1ba838u: goto label_1ba838;
        case 0x1ba854u: goto label_1ba854;
        default: break;
    }

    ctx->pc = 0x1ba7ecu;

    // 0x1ba7ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba7f0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba7f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba7f8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1ba7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1ba7fc: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x1ba7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x1ba800: 0xc46c1b50  lwc1        $f12, 0x1B50($v1)
    ctx->pc = 0x1ba800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba804: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BA804u;
    SET_GPR_U32(ctx, 31, 0x1BA80Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA80Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA80Cu) { return; }
    ctx->pc = 0x1BA80Cu;
label_1ba80c:
    // 0x1ba80c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba80cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba810: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba814: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BA814u;
    SET_GPR_U32(ctx, 31, 0x1BA81Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BA814u, 0x1BA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA81Cu;
label_1ba81c:
    // 0x1ba81c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba81cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba824: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ba82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ba830: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BA830u;
    SET_GPR_U32(ctx, 31, 0x1BA838u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BA830u, 0x1BA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA838u;
label_1ba838:
    // 0x1ba838: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba83c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba844: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ba848: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1ba84c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BA84Cu;
    SET_GPR_U32(ctx, 31, 0x1BA854u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BA84Cu, 0x1BA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA854u;
label_1ba854:
    // 0x1ba854: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ba858: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba85c: 0xc4a11284  lwc1        $f1, 0x1284($a1)
    ctx->pc = 0x1ba85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba860: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba864: 0xc4c00124  lwc1        $f0, 0x124($a2)
    ctx->pc = 0x1ba864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba86c: 0xe4c00124  swc1        $f0, 0x124($a2)
    ctx->pc = 0x1ba86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    // 0x1ba870: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba870u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba874: 0xc4e11280  lwc1        $f1, 0x1280($a3)
    ctx->pc = 0x1ba874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba878: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba87c: 0xc5001284  lwc1        $f0, 0x1284($t0)
    ctx->pc = 0x1ba87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba884: 0xe5001284  swc1        $f0, 0x1284($t0)
    ctx->pc = 0x1ba884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4740), bits); }
    // 0x1ba888: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba88c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba890: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba898: 0x0  nop
    ctx->pc = 0x1ba898u;
    // NOP
    // 0x1ba89c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA89Cu;
    {
        const bool branch_taken_0x1ba89c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba89c) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA8A4u;
    // 0x1ba8a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba8a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba8ac: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1ba8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1ba8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba8b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba8b8: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1ba8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1ba8bcu;
}
