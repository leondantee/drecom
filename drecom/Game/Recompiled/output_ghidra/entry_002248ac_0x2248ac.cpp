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

// Function: entry_002248ac
// Address: 0x2248ac - 0x22495c
void entry_002248ac_0x2248ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002248ac_0x2248ac");
#endif

    ctx->pc = 0x2248acu;

    // 0x2248ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2248b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2248b4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x2248b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2248b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2248bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2248c0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2248c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2248c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2248c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2248c8: 0x0  nop
    ctx->pc = 0x2248c8u;
    // NOP
    // 0x2248cc: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x2248CCu;
    {
        const bool branch_taken_0x2248cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2248cc) {
            ctx->pc = 0x2249E4u;
            return;
        }
    }
    ctx->pc = 0x2248D4u;
    // 0x2248d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2248d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2248dc: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2248dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2248e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2248e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2248e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2248e8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2248e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2248ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2248ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2248f0: 0x0  nop
    ctx->pc = 0x2248f0u;
    // NOP
    // 0x2248f4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2248F4u;
    {
        const bool branch_taken_0x2248f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2248f4) {
            ctx->pc = 0x22495Cu;
            return;
        }
    }
    ctx->pc = 0x2248FCu;
    // 0x2248fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2248fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224900: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224904: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x224904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224908: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22490c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224910: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224918: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x224918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x22491c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224924: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x224924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22492c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224930: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x224930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224938: 0x0  nop
    ctx->pc = 0x224938u;
    // NOP
    // 0x22493c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22493Cu;
    {
        const bool branch_taken_0x22493c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22493c) {
            ctx->pc = 0x22495Cu;
            return;
        }
    }
    ctx->pc = 0x224944u;
    // 0x224944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224948: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22494c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x22494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224954: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224958: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x224958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x22495cu;
}
