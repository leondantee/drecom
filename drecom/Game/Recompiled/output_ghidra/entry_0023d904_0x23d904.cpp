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

// Function: entry_0023d904
// Address: 0x23d904 - 0x23d9a0
void entry_0023d904_0x23d904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d904_0x23d904");
#endif

    ctx->pc = 0x23d904u;

    // 0x23d904: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d908: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d90c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x23d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d910: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d914: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d918: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23d918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d91c: 0x0  nop
    ctx->pc = 0x23d91cu;
    // NOP
    // 0x23d920: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x23D920u;
    {
        const bool branch_taken_0x23d920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d920) {
            ctx->pc = 0x23DA24u;
            return;
        }
    }
    ctx->pc = 0x23D928u;
    // 0x23d928: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d92c: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x23d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x23d930: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x23d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d934: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d938: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x23d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d93c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d940: 0x0  nop
    ctx->pc = 0x23d940u;
    // NOP
    // 0x23d944: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x23D944u;
    {
        const bool branch_taken_0x23d944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d944) {
            ctx->pc = 0x23D9A0u;
            return;
        }
    }
    ctx->pc = 0x23D94Cu;
    // 0x23d94c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x23d94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d950: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x23d950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x23d954: 0xc5010024  lwc1        $f1, 0x24($t0)
    ctx->pc = 0x23d954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d958: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d95c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d960: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23d960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d964: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x23d968: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d96c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d970: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x23d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23d974: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d978: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x23d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d97c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23d980: 0x0  nop
    ctx->pc = 0x23d980u;
    // NOP
    // 0x23d984: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23D984u;
    {
        const bool branch_taken_0x23d984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d984) {
            ctx->pc = 0x23D9A0u;
            return;
        }
    }
    ctx->pc = 0x23D98Cu;
    // 0x23d98c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23d994: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x23d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d998: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d99c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x23d99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x23d9a0u;
}
