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

// Function: entry_001ad290
// Address: 0x1ad290 - 0x1ad2e8
void entry_001ad290_0x1ad290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad290_0x1ad290");
#endif

    ctx->pc = 0x1ad290u;

    // 0x1ad290: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad294: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad298: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad29c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad2a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad2a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad2a8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad2ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad2b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad2b4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad2b8: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad2bc: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad2c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad2c4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad2c8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad2cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad2d0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad2d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad2d8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad2dc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad2e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AD2E0u;
    {
        const bool branch_taken_0x1ad2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad2e0) {
            ctx->pc = 0x1AD390u;
            return;
        }
    }
    ctx->pc = 0x1AD2E8u;
}
