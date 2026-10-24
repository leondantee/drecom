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

// Function: entry_001af410
// Address: 0x1af410 - 0x1af468
void entry_001af410_0x1af410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af410_0x1af410");
#endif

    ctx->pc = 0x1af410u;

    // 0x1af410: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1af410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1af414: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1af414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1af418: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af41c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1af41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1af420: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1af420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1af424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af428: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af42c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af42cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af430: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af434: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af438: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1af438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1af43c: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1af43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1af440: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af444: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1af444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1af448: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1af448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1af44c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af450: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af454: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af458: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af45c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1af460: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AF460u;
    {
        const bool branch_taken_0x1af460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af460) {
            ctx->pc = 0x1AF4B8u;
            return;
        }
    }
    ctx->pc = 0x1AF468u;
}
