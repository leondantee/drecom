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

// Function: entry_0021cf90
// Address: 0x21cf90 - 0x21cfe4
void entry_0021cf90_0x21cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cf90_0x21cf90");
#endif

    ctx->pc = 0x21cf90u;

    // 0x21cf90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21cf90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cf94: 0x0  nop
    ctx->pc = 0x21cf94u;
    // NOP
    // 0x21cf98: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x21cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x21cf9c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cfa4: 0x0  nop
    ctx->pc = 0x21cfa4u;
    // NOP
    // 0x21cfa8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x21cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x21cfac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21cfb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cfb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cfb4: 0x0  nop
    ctx->pc = 0x21cfb4u;
    // NOP
    // 0x21cfb8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x21cfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x21cfbc: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x21cfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x21cfc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cfc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cfc4: 0x0  nop
    ctx->pc = 0x21cfc4u;
    // NOP
    // 0x21cfc8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x21cfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x21cfcc: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x21cfd0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x21cfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x21cfd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21cfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21cfd8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x21cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21cfdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21cfe0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x21cfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    ctx->pc = 0x21cfe4u;
}
