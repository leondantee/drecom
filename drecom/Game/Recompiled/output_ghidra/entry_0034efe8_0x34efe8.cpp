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

// Function: entry_0034efe8
// Address: 0x34efe8 - 0x34f070
void entry_0034efe8_0x34efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034efe8_0x34efe8");
#endif

    ctx->pc = 0x34efe8u;

    // 0x34efe8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34efec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34eff0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34eff4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34eff8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34effc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f004: 0x0  nop
    ctx->pc = 0x34f004u;
    // NOP
    // 0x34f008: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x34F008u;
    {
        const bool branch_taken_0x34f008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f008) {
            ctx->pc = 0x34F070u;
            return;
        }
    }
    ctx->pc = 0x34F010u;
    // 0x34f010: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f014: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f018: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f01c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34f020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f024: 0x0  nop
    ctx->pc = 0x34f024u;
    // NOP
    // 0x34f028: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34f028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34f02c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f030: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f038: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f03c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f040: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f044: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f048: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f048u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f04c: 0x0  nop
    ctx->pc = 0x34f04cu;
    // NOP
    // 0x34f050: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x34F050u;
    {
        const bool branch_taken_0x34f050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f050) {
            ctx->pc = 0x34F070u;
            return;
        }
    }
    ctx->pc = 0x34F058u;
    // 0x34f058: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f05c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f060: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f064: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f068: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f06c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34f06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34f070u;
}
