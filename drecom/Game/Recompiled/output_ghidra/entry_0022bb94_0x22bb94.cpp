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

// Function: entry_0022bb94
// Address: 0x22bb94 - 0x22bbf0
void entry_0022bb94_0x22bb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bb94_0x22bb94");
#endif

    ctx->pc = 0x22bb94u;

    // 0x22bb94: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bb98: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bb9c: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22bba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bba8: 0x0  nop
    ctx->pc = 0x22bba8u;
    // NOP
    // 0x22bbac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22bbacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22bbb0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22bbb4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bbb8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bbbc: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bbc0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22bbc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22bbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bbc8: 0x0  nop
    ctx->pc = 0x22bbc8u;
    // NOP
    // 0x22bbcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22bbccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bbd0: 0x0  nop
    ctx->pc = 0x22bbd0u;
    // NOP
    // 0x22bbd4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22BBD4u;
    {
        const bool branch_taken_0x22bbd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bbd4) {
            ctx->pc = 0x22BBF0u;
            return;
        }
    }
    ctx->pc = 0x22BBDCu;
    // 0x22bbdc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22bbe0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22bbe0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bbe4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22bbe8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22bbec: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22bbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x22bbf0u;
}
