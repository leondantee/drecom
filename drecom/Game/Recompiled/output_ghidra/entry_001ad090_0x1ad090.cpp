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

// Function: entry_001ad090
// Address: 0x1ad090 - 0x1ad0c8
void entry_001ad090_0x1ad090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad090_0x1ad090");
#endif

    ctx->pc = 0x1ad090u;

    // 0x1ad090: 0x3c024406  lui         $v0, 0x4406
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17414 << 16));
    // 0x1ad094: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad098: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad09c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad0a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad0a4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad0a8: 0x3c024411  lui         $v0, 0x4411
    ctx->pc = 0x1ad0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17425 << 16));
    // 0x1ad0ac: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad0b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad0b4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad0b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ad0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ad0bc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad0c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1AD0C0u;
    {
        const bool branch_taken_0x1ad0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad0c0) {
            ctx->pc = 0x1AD1C8u;
            return;
        }
    }
    ctx->pc = 0x1AD0C8u;
}
