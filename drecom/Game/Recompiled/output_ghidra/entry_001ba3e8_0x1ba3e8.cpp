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

// Function: entry_001ba3e8
// Address: 0x1ba3e8 - 0x1ba4b8
void entry_001ba3e8_0x1ba3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba3e8_0x1ba3e8");
#endif

    switch (ctx->pc) {
        case 0x1ba40cu: goto label_1ba40c;
        case 0x1ba420u: goto label_1ba420;
        case 0x1ba434u: goto label_1ba434;
        case 0x1ba450u: goto label_1ba450;
        default: break;
    }

    ctx->pc = 0x1ba3e8u;

    // 0x1ba3e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba3ec: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba3f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba3f4: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1ba3f8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1ba3f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ba3fc: 0x26450180  addiu       $a1, $s2, 0x180
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x1ba400: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1ba400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba404: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BA404u;
    SET_GPR_U32(ctx, 31, 0x1BA40Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA40Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA40Cu) { return; }
    ctx->pc = 0x1BA40Cu;
label_1ba40c:
    // 0x1ba40c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba40cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba410: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba414: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ba414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ba418: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BA418u;
    SET_GPR_U32(ctx, 31, 0x1BA420u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BA418u, 0x1BA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA420u;
label_1ba420:
    // 0x1ba420: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ba420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba424: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba428: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ba428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ba42c: 0xc057480  jal         func_15D200
    ctx->pc = 0x1BA42Cu;
    SET_GPR_U32(ctx, 31, 0x1BA434u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1BA42Cu, 0x1BA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA434u;
label_1ba434:
    // 0x1ba434: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba434u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba438: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba43c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba440: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x1ba440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1ba444: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1ba448: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BA448u;
    SET_GPR_U32(ctx, 31, 0x1BA450u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BA448u, 0x1BA450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA450u;
label_1ba450:
    // 0x1ba450: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ba454: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba458: 0xc4c11284  lwc1        $f1, 0x1284($a2)
    ctx->pc = 0x1ba458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba45c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba460: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x1ba460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba468: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1ba468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    // 0x1ba46c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba470: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1ba470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba474: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba478: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1ba478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba47c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba480: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1ba480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1ba484: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba488: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ba488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba48c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba494: 0x0  nop
    ctx->pc = 0x1ba494u;
    // NOP
    // 0x1ba498: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA498u;
    {
        const bool branch_taken_0x1ba498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba498) {
            ctx->pc = 0x1BA4B8u;
            return;
        }
    }
    ctx->pc = 0x1BA4A0u;
    // 0x1ba4a0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ba4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba4a4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba4a8: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1ba4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1ba4ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba4b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba4b4: 0xac651b60  sw          $a1, 0x1B60($v1)
    ctx->pc = 0x1ba4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 5));
    ctx->pc = 0x1ba4b8u;
}
