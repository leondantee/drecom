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

// Function: entry_00243788
// Address: 0x243788 - 0x243838
void entry_00243788_0x243788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243788_0x243788");
#endif

    ctx->pc = 0x243788u;

    // 0x243788: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24378c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243790: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x243790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243794: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24379c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x24379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2437a0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2437a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2437a4: 0x0  nop
    ctx->pc = 0x2437a4u;
    // NOP
    // 0x2437a8: 0x45010045  bc1t        . + 4 + (0x45 << 2)
    ctx->pc = 0x2437A8u;
    {
        const bool branch_taken_0x2437a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437a8) {
            ctx->pc = 0x2438C0u;
            return;
        }
    }
    ctx->pc = 0x2437B0u;
    // 0x2437b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2437b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2437b8: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2437b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2437bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2437c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2437c4: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2437c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2437c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2437c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2437cc: 0x0  nop
    ctx->pc = 0x2437ccu;
    // NOP
    // 0x2437d0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2437D0u;
    {
        const bool branch_taken_0x2437d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437d0) {
            ctx->pc = 0x243838u;
            return;
        }
    }
    ctx->pc = 0x2437D8u;
    // 0x2437d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2437dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2437e0: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x2437e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2437e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2437e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2437ec: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2437ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2437f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2437f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2437f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2437f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2437f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2437f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2437fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243800: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x243800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243804: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243808: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24380c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x24380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243814: 0x0  nop
    ctx->pc = 0x243814u;
    // NOP
    // 0x243818: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x243818u;
    {
        const bool branch_taken_0x243818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243818) {
            ctx->pc = 0x243838u;
            return;
        }
    }
    ctx->pc = 0x243820u;
    // 0x243820: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243824: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243828: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x243828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24382c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243834: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x243834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x243838u;
}
