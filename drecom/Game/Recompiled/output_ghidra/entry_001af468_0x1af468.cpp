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

// Function: entry_001af468
// Address: 0x1af468 - 0x1af4b8
void entry_001af468_0x1af468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af468_0x1af468");
#endif

    ctx->pc = 0x1af468u;

    // 0x1af468: 0x3c024449  lui         $v0, 0x4449
    ctx->pc = 0x1af468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17481 << 16));
    // 0x1af46c: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x1af46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x1af470: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af474: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1af474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1af478: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1af478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1af47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af480: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af488: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af48c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af490: 0x3c024459  lui         $v0, 0x4459
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17497 << 16));
    // 0x1af494: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x1af494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x1af498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af49c: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x1af4a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1af4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1af4a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af4a8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af4ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af4b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af4b4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->pc = 0x1af4b8u;
}
