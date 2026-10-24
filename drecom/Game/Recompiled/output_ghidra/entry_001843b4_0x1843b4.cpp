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

// Function: entry_001843b4
// Address: 0x1843b4 - 0x184444
void entry_001843b4_0x1843b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001843b4_0x1843b4");
#endif

    ctx->pc = 0x1843b4u;

    // 0x1843b4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1843b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1843b8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1843b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1843bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1843c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1843c4: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x1843c4u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1843c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1843cc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1843d0: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x1843d0u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1843d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1843d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1843d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1843dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1843e0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1843e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1843e4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1843e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1843e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1843e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1843ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1843f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1843f4: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x1843f4u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1843f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1843f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1843fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1843fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184400: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184400u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184404: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184404u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184408: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x184408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18440c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18440cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184410: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x184410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x184414: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x184414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184418: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x184418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18441c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18441cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x184420: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184424: 0xc420f248  lwc1        $f0, -0xDB8($at)
    ctx->pc = 0x184424u;
    { uint32_t bits = FAST_READ32(0x47F248u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184428: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18442c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184430: 0xc420f250  lwc1        $f0, -0xDB0($at)
    ctx->pc = 0x184430u;
    { uint32_t bits = FAST_READ32(0x47F250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184434: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x184434u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x184438: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x184438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18443c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18443cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x184440: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x184440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x184444u;
}
