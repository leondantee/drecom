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

// Function: entry_001df1a0
// Address: 0x1df1a0 - 0x1df208
void entry_001df1a0_0x1df1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df1a0_0x1df1a0");
#endif

    ctx->pc = 0x1df1a0u;

    // 0x1df1a0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1df1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df1a4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1df1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df1a8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1df1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df1ac: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1df1acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1df1b0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1df1b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1df1b4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1df1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1df1b8: 0x93a300a8  lbu         $v1, 0xA8($sp)
    ctx->pc = 0x1df1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1df1bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1df1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1df1c0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1df1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1df1c4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DF1C4u;
    {
        const bool branch_taken_0x1df1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df1c4) {
            ctx->pc = 0x1DF208u;
            return;
        }
    }
    ctx->pc = 0x1DF1CCu;
    // 0x1df1cc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1df1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1df1d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df1d4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1df1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df1d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df1dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1df1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1df1e0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1df1e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df1e8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1df1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df1ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df1f0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1df1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1df1f4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1df1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1df1f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df1fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1df1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df200: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df204: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1df204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->pc = 0x1df208u;
}
