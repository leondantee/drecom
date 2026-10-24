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

// Function: entry_00252b34
// Address: 0x252b34 - 0x252b7c
void entry_00252b34_0x252b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252b34_0x252b34");
#endif

    ctx->pc = 0x252b34u;

    // 0x252b34: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b38: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x252b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x252b3c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b40: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252b44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252b4c: 0x0  nop
    ctx->pc = 0x252b4cu;
    // NOP
    // 0x252b50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252b54: 0x0  nop
    ctx->pc = 0x252b54u;
    // NOP
    // 0x252b58: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252B58u;
    {
        const bool branch_taken_0x252b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252b58) {
            ctx->pc = 0x252B7Cu;
            return;
        }
    }
    ctx->pc = 0x252B60u;
    // 0x252b60: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x252b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252b64: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x252b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252b6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252b6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252b70: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x252b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x252b74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252B74u;
    {
        const bool branch_taken_0x252b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252b74) {
            ctx->pc = 0x252B8Cu;
            return;
        }
    }
    ctx->pc = 0x252B7Cu;
}
