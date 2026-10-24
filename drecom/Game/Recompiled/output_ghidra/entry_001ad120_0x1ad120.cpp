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

// Function: entry_001ad120
// Address: 0x1ad120 - 0x1ad178
void entry_001ad120_0x1ad120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad120_0x1ad120");
#endif

    ctx->pc = 0x1ad120u;

    // 0x1ad120: 0x3c024486  lui         $v0, 0x4486
    ctx->pc = 0x1ad120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17542 << 16));
    // 0x1ad124: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1ad124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1ad128: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad12c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ad12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1ad130: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad138: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad13c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad140: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad144: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ad144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ad148: 0x3c024491  lui         $v0, 0x4491
    ctx->pc = 0x1ad148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17553 << 16));
    // 0x1ad14c: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1ad14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ad150: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ad150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad154: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1ad154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1ad158: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ad158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ad15c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad160: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad168: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ad168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ad16c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1ad16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ad170: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AD170u;
    {
        const bool branch_taken_0x1ad170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad170) {
            ctx->pc = 0x1AD1C8u;
            return;
        }
    }
    ctx->pc = 0x1AD178u;
}
