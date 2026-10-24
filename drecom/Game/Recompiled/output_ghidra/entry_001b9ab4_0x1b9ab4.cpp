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

// Function: entry_001b9ab4
// Address: 0x1b9ab4 - 0x1b9aec
void entry_001b9ab4_0x1b9ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ab4_0x1b9ab4");
#endif

    ctx->pc = 0x1b9ab4u;

    // 0x1b9ab4: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x1b9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x1b9ab8: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x1b9ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
    // 0x1b9abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ac0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ac4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1b9ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1b9ac8: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b9ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1b9acc: 0x34423334  ori         $v0, $v0, 0x3334
    ctx->pc = 0x1b9accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1b9ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ad8: 0xe4801280  swc1        $f0, 0x1280($a0)
    ctx->pc = 0x1b9ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4736), bits); }
    // 0x1b9adc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1b9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1b9ae0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9ae0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ae4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ae8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1b9ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1b9aecu;
}
