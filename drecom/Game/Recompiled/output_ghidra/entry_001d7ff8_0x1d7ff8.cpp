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

// Function: entry_001d7ff8
// Address: 0x1d7ff8 - 0x1d8030
void entry_001d7ff8_0x1d7ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7ff8_0x1d7ff8");
#endif

    ctx->pc = 0x1d7ff8u;

    // 0x1d7ff8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d7ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ffc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8000: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d8004: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1d8004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1d8008: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d8008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d800c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8014: 0x0  nop
    ctx->pc = 0x1d8014u;
    // NOP
    // 0x1d8018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d8018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d801c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d8020: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1d8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8024: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d8024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d8028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d802c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1d802cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    ctx->pc = 0x1d8030u;
}
