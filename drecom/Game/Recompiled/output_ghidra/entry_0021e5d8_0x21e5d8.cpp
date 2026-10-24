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

// Function: entry_0021e5d8
// Address: 0x21e5d8 - 0x21e644
void entry_0021e5d8_0x21e5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e5d8_0x21e5d8");
#endif

    ctx->pc = 0x21e5d8u;

    // 0x21e5d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21e5e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e5e4: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x21e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e5ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5f0: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e5f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5f8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x21e5fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e600: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21e604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e608: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e60c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e610: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e614: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e618: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e61c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x21e620: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e624: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21e628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e62c: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e630: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e634: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e638: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e63c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e640: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    ctx->pc = 0x21e644u;
}
