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

// Function: entry_001af380
// Address: 0x1af380 - 0x1af3b8
void entry_001af380_0x1af380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af380_0x1af380");
#endif

    ctx->pc = 0x1af380u;

    // 0x1af380: 0x3c024386  lui         $v0, 0x4386
    ctx->pc = 0x1af380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17286 << 16));
    // 0x1af384: 0x34426665  ori         $v0, $v0, 0x6665
    ctx->pc = 0x1af384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26213);
    // 0x1af388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af38c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af390: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af390u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1af394: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af398: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x1af398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x1af39c: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x1af39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x1af3a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af3a4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1af3ac: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1af3b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AF3B0u;
    {
        const bool branch_taken_0x1af3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af3b0) {
            ctx->pc = 0x1AF4B8u;
            return;
        }
    }
    ctx->pc = 0x1AF3B8u;
}
