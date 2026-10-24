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

// Function: entry_00252220
// Address: 0x252220 - 0x252268
void entry_00252220_0x252220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252220_0x252220");
#endif

    ctx->pc = 0x252220u;

    // 0x252220: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x252220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252224: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x252224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x252228: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x252228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25222c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x25222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252230: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x252230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x252234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252238: 0x0  nop
    ctx->pc = 0x252238u;
    // NOP
    // 0x25223c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25223cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252240: 0x0  nop
    ctx->pc = 0x252240u;
    // NOP
    // 0x252244: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252244u;
    {
        const bool branch_taken_0x252244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252244) {
            ctx->pc = 0x252268u;
            return;
        }
    }
    ctx->pc = 0x25224Cu;
    // 0x25224c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x25224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252250: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x252250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252254: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x252254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252258: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252258u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25225c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x25225cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x252260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252260u;
    {
        const bool branch_taken_0x252260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252260) {
            ctx->pc = 0x252278u;
            return;
        }
    }
    ctx->pc = 0x252268u;
}
