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

// Function: entry_001ad0c8
// Address: 0x1ad0c8 - 0x1ad120
void entry_001ad0c8_0x1ad0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad0c8_0x1ad0c8");
#endif

    ctx->pc = 0x1ad0c8u;

    // 0x1ad0c8: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad0cc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad0d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad0d4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad0d8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad0e0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad0e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad0e8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad0ec: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad0f0: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad0f4: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad0f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad0fc: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1ad0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1ad100: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1ad100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1ad104: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad108: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad10c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad110: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad114: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad118: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AD118u;
    {
        const bool branch_taken_0x1ad118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad118) {
            ctx->pc = 0x1AD1C8u;
            return;
        }
    }
    ctx->pc = 0x1AD120u;
}
