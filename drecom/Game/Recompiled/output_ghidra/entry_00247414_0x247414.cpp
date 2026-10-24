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

// Function: entry_00247414
// Address: 0x247414 - 0x24746c
void entry_00247414_0x247414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247414_0x247414");
#endif

    ctx->pc = 0x247414u;

    // 0x247414: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x247414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247418: 0x24a51330  addiu       $a1, $a1, 0x1330
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x24741c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x24741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247420: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x247424: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x247428: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x247428u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24742c: 0x0  nop
    ctx->pc = 0x24742cu;
    // NOP
    // 0x247430: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x247430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x247434: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x247434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x247438: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24743c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247440: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x247440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247448: 0x0  nop
    ctx->pc = 0x247448u;
    // NOP
    // 0x24744c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24744cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247450: 0x0  nop
    ctx->pc = 0x247450u;
    // NOP
    // 0x247454: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x247454u;
    {
        const bool branch_taken_0x247454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247454) {
            ctx->pc = 0x24746Cu;
            return;
        }
    }
    ctx->pc = 0x24745Cu;
    // 0x24745c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24745cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247460: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247464: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247468: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x247468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x24746cu;
}
