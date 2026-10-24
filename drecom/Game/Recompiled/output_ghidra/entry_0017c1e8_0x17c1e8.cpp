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

// Function: entry_0017c1e8
// Address: 0x17c1e8 - 0x17c238
void entry_0017c1e8_0x17c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c1e8_0x17c1e8");
#endif

    ctx->pc = 0x17c1e8u;

    // 0x17c1e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c1ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c1f0: 0x0  nop
    ctx->pc = 0x17c1f0u;
    // NOP
    // 0x17c1f4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x17c1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x17c1f8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x17c1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1fc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c204: 0x0  nop
    ctx->pc = 0x17c204u;
    // NOP
    // 0x17c208: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x17C208u;
    {
        const bool branch_taken_0x17c208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c208) {
            ctx->pc = 0x17C238u;
            return;
        }
    }
    ctx->pc = 0x17C210u;
    // 0x17c210: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c214: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17c218: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c21c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c21cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c220: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x17c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c224: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c224u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c228: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c22c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c234: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x17c238u;
}
