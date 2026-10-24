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

// Function: entry_001b292c
// Address: 0x1b292c - 0x1b2988
void entry_001b292c_0x1b292c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b292c_0x1b292c");
#endif

    ctx->pc = 0x1b292cu;

    // 0x1b292c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1b292cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b2930: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b2930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2934: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2938: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b293c: 0x0  nop
    ctx->pc = 0x1b293cu;
    // NOP
    // 0x1b2940: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B2940u;
    {
        const bool branch_taken_0x1b2940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2940) {
            ctx->pc = 0x1B2988u;
            return;
        }
    }
    ctx->pc = 0x1B2948u;
    // 0x1b2948: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b294c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1b294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2950: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2954: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b2954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b2958: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b295c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b2960: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b2960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2964: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1b2964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x1b2968: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b296c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b296cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1b2970: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b2974: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1b2974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1b2978: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1b2978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b297c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b2980: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b2980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b2984: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x1b2984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x1b2988u;
}
