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

// Function: entry_00227a3c
// Address: 0x227a3c - 0x227a78
void entry_00227a3c_0x227a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227a3c_0x227a3c");
#endif

    ctx->pc = 0x227a3cu;

    // 0x227a3c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a40: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227a44: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x227a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227a48: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x227a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x227a4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x227a4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a50: 0x0  nop
    ctx->pc = 0x227a50u;
    // NOP
    // 0x227a54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a58: 0x0  nop
    ctx->pc = 0x227a58u;
    // NOP
    // 0x227a5c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x227A5Cu;
    {
        const bool branch_taken_0x227a5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a5c) {
            ctx->pc = 0x227A78u;
            return;
        }
    }
    ctx->pc = 0x227A64u;
    // 0x227a64: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x227a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x227a68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a6c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x227a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a70: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x227a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x227a74: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x227a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x227a78u;
}
