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

// Function: entry_00229944
// Address: 0x229944 - 0x229990
void entry_00229944_0x229944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229944_0x229944");
#endif

    ctx->pc = 0x229944u;

    // 0x229944: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229948: 0x3c02beb2  lui         $v0, 0xBEB2
    ctx->pc = 0x229948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48818 << 16));
    // 0x22994c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x22994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x229950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229954: 0x0  nop
    ctx->pc = 0x229954u;
    // NOP
    // 0x229958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22995c: 0x0  nop
    ctx->pc = 0x22995cu;
    // NOP
    // 0x229960: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x229960u;
    {
        const bool branch_taken_0x229960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229960) {
            ctx->pc = 0x229990u;
            return;
        }
    }
    ctx->pc = 0x229968u;
    // 0x229968: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22996c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229970: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x229970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229974: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x229974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x229978: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x229978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22997c: 0x0  nop
    ctx->pc = 0x22997cu;
    // NOP
    // 0x229980: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229984: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x229984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229988: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x229988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x22998c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22998cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x229990u;
}
