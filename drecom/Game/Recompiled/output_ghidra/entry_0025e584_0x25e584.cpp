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

// Function: entry_0025e584
// Address: 0x25e584 - 0x25e5e4
void entry_0025e584_0x25e584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e584_0x25e584");
#endif

    ctx->pc = 0x25e584u;

    // 0x25e584: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e588: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e58c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e590: 0x0  nop
    ctx->pc = 0x25e590u;
    // NOP
    // 0x25e594: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x25E594u;
    {
        const bool branch_taken_0x25e594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e594) {
            ctx->pc = 0x25E5F4u;
            return;
        }
    }
    ctx->pc = 0x25E59Cu;
    // 0x25e59c: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x25e5a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25e5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e5a8: 0x0  nop
    ctx->pc = 0x25e5a8u;
    // NOP
    // 0x25e5ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25e5acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25e5b0: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e5b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e5b8: 0x0  nop
    ctx->pc = 0x25e5b8u;
    // NOP
    // 0x25e5bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25E5BCu;
    {
        const bool branch_taken_0x25e5bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e5bc) {
            ctx->pc = 0x25E5E4u;
            return;
        }
    }
    ctx->pc = 0x25E5C4u;
    // 0x25e5c4: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25e5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e5d0: 0x0  nop
    ctx->pc = 0x25e5d0u;
    // NOP
    // 0x25e5d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25e5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25e5d8: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    // 0x25e5dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25E5DCu;
    {
        const bool branch_taken_0x25e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5dc) {
            ctx->pc = 0x25E644u;
            return;
        }
    }
    ctx->pc = 0x25E5E4u;
}
