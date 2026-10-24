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

// Function: entry_0017c564
// Address: 0x17c564 - 0x17c5c4
void entry_0017c564_0x17c564(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c564_0x17c564");
#endif

    ctx->pc = 0x17c564u;

    // 0x17c564: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17c564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17c568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c56c: 0x0  nop
    ctx->pc = 0x17c56cu;
    // NOP
    // 0x17c570: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x17c570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x17c574: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x17c574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c578: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c57c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c580: 0x0  nop
    ctx->pc = 0x17c580u;
    // NOP
    // 0x17c584: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x17C584u;
    {
        const bool branch_taken_0x17c584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c584) {
            ctx->pc = 0x17C5C4u;
            return;
        }
    }
    ctx->pc = 0x17C58Cu;
    // 0x17c58c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c590: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x17c590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x17c594: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x17c594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c598: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17c598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c59c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c5a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17c5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17c5a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17c5a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c5ac: 0x0  nop
    ctx->pc = 0x17c5acu;
    // NOP
    // 0x17c5b0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x17c5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x17c5b4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5b8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c5c0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x17c5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->pc = 0x17c5c4u;
}
