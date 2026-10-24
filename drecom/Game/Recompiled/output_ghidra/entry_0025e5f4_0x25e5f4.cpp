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

// Function: entry_0025e5f4
// Address: 0x25e5f4 - 0x25e63c
void entry_0025e5f4_0x25e5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e5f4_0x25e5f4");
#endif

    ctx->pc = 0x25e5f4u;

    // 0x25e5f4: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5f8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x25e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x25e5fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25e5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e600: 0x0  nop
    ctx->pc = 0x25e600u;
    // NOP
    // 0x25e604: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25e604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25e608: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e60c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25e60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e610: 0x0  nop
    ctx->pc = 0x25e610u;
    // NOP
    // 0x25e614: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x25E614u;
    {
        const bool branch_taken_0x25e614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e614) {
            ctx->pc = 0x25E63Cu;
            return;
        }
    }
    ctx->pc = 0x25E61Cu;
    // 0x25e61c: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e620: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x25e620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x25e624: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25e624u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e628: 0x0  nop
    ctx->pc = 0x25e628u;
    // NOP
    // 0x25e62c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25e62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25e630: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    // 0x25e634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E634u;
    {
        const bool branch_taken_0x25e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e634) {
            ctx->pc = 0x25E644u;
            return;
        }
    }
    ctx->pc = 0x25E63Cu;
}
