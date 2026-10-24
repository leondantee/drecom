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

// Function: entry_0016e5f0
// Address: 0x16e5f0 - 0x16e64c
void entry_0016e5f0_0x16e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e5f0_0x16e5f0");
#endif

    ctx->pc = 0x16e5f0u;

    // 0x16e5f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e5f4: 0x16230015  bne         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E5F4u;
    {
        const bool branch_taken_0x16e5f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e5f4) {
            ctx->pc = 0x16E64Cu;
            return;
        }
    }
    ctx->pc = 0x16E5FCu;
    // 0x16e5fc: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x16e5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e600: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e604: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e608: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e60c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x16e60cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e610: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x16e614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e618: 0x0  nop
    ctx->pc = 0x16e618u;
    // NOP
    // 0x16e61c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16e61cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16e620: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x16e624: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e628: 0xc421ab10  lwc1        $f1, -0x54F0($at)
    ctx->pc = 0x16e628u;
    { uint32_t bits = FAST_READ32(0x47AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e62c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e634: 0x0  nop
    ctx->pc = 0x16e634u;
    // NOP
    // 0x16e638: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E638u;
    {
        const bool branch_taken_0x16e638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e638) {
            ctx->pc = 0x16E64Cu;
            return;
        }
    }
    ctx->pc = 0x16E640u;
    // 0x16e640: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e644: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e648: 0xe420ab10  swc1        $f0, -0x54F0($at)
    ctx->pc = 0x16e648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB10u, _value); } while (0); }
    ctx->pc = 0x16e64cu;
}
