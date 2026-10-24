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

// Function: entry_003491d4
// Address: 0x3491d4 - 0x3492c0
void entry_003491d4_0x3491d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003491d4_0x3491d4");
#endif

    switch (ctx->pc) {
        case 0x3491e0u: goto label_3491e0;
        default: break;
    }

    ctx->pc = 0x3491d4u;

    // 0x3491d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3491d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3491D8u;
    SET_GPR_U32(ctx, 31, 0x3491E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3491D8u, 0x3491E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491E0u;
label_3491e0:
    // 0x3491e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3491e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3491e8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3491e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3491ec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3491f0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3491f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3491f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3491f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3491f8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3491f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x3491fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3491fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349200: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349204: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349208: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34920c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34920cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349210: 0x0  nop
    ctx->pc = 0x349210u;
    // NOP
    // 0x349214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349218: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34921c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349220: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349224: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x349228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34922c: 0x0  nop
    ctx->pc = 0x34922cu;
    // NOP
    // 0x349230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x349230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349234: 0x0  nop
    ctx->pc = 0x349234u;
    // NOP
    // 0x349238: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x349238u;
    {
        const bool branch_taken_0x349238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349238) {
            ctx->pc = 0x3492C0u;
            return;
        }
    }
    ctx->pc = 0x349240u;
    // 0x349240: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349244: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349248: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x34924c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x34924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x349250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x349250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349254: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x349254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349258: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34925c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349260: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349264: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x349264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x349268: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x349268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34926c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34926cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349270: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x349270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349278: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x349278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34927c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349280: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x349280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x349284: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x349284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x349288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x349288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34928c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34928Cu;
    {
        const bool branch_taken_0x34928c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34928c) {
            ctx->pc = 0x3492C0u;
            return;
        }
    }
    ctx->pc = 0x349294u;
    // 0x349294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349298: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x349298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34929c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x34929cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x3492a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3492a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3492a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3492a8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3492a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3492ac: 0x24063c05  addiu       $a2, $zero, 0x3C05
    ctx->pc = 0x3492acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15365));
    // 0x3492b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3492b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3492b4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3492b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3492b8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3492B8u;
    SET_GPR_U32(ctx, 31, 0x3492C0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3492B8u, 0x3492C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3492C0u;
}
