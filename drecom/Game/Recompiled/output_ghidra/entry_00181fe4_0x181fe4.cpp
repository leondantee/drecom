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

// Function: entry_00181fe4
// Address: 0x181fe4 - 0x18202c
void entry_00181fe4_0x181fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181fe4_0x181fe4");
#endif

    ctx->pc = 0x181fe4u;

    // 0x181fe4: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x181fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181fe8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181fec: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x181fecu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181ff0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x181ff0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x181ff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x181ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181ff8: 0x0  nop
    ctx->pc = 0x181ff8u;
    // NOP
    // 0x181ffc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182000: 0x0  nop
    ctx->pc = 0x182000u;
    // NOP
    // 0x182004: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x182004u;
    {
        const bool branch_taken_0x182004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182004) {
            ctx->pc = 0x18202Cu;
            return;
        }
    }
    ctx->pc = 0x18200Cu;
    // 0x18200c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182010: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182014: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x182014u;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182018: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18201c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18201cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x182020: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x182020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x182024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x182024u;
    {
        const bool branch_taken_0x182024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182024) {
            ctx->pc = 0x182040u;
            return;
        }
    }
    ctx->pc = 0x18202Cu;
}
