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

// Function: entry_0026f450
// Address: 0x26f450 - 0x26f4bc
void entry_0026f450_0x26f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f450_0x26f450");
#endif

    ctx->pc = 0x26f450u;

    // 0x26f450: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f454: 0xc4811b54  lwc1        $f1, 0x1B54($a0)
    ctx->pc = 0x26f454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f458: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26f458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26f45c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f45cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f460: 0x0  nop
    ctx->pc = 0x26f460u;
    // NOP
    // 0x26f464: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f468: 0xe4801b54  swc1        $f0, 0x1B54($a0)
    ctx->pc = 0x26f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6996), bits); }
    // 0x26f46c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f470: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f474: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x26f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x26f478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f47c: 0x0  nop
    ctx->pc = 0x26f47cu;
    // NOP
    // 0x26f480: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f484: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x26f484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
    // 0x26f488: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f48c: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f490: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26f490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26f494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f498: 0x0  nop
    ctx->pc = 0x26f498u;
    // NOP
    // 0x26f49c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f49cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f4a0: 0x0  nop
    ctx->pc = 0x26f4a0u;
    // NOP
    // 0x26f4a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26F4A4u;
    {
        const bool branch_taken_0x26f4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f4a4) {
            ctx->pc = 0x26F4BCu;
            return;
        }
    }
    ctx->pc = 0x26F4ACu;
    // 0x26f4ac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26f4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f4b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f4b8: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    ctx->pc = 0x26f4bcu;
}
