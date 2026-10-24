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

// Function: entry_001b8664
// Address: 0x1b8664 - 0x1b869c
void entry_001b8664_0x1b8664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8664_0x1b8664");
#endif

    ctx->pc = 0x1b8664u;

    // 0x1b8664: 0x3c044309  lui         $a0, 0x4309
    ctx->pc = 0x1b8664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17161 << 16));
    // 0x1b8668: 0x3483b333  ori         $v1, $a0, 0xB333
    ctx->pc = 0x1b8668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45875);
    // 0x1b866c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b866cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8670: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8674: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b8674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b8678: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b8678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1b867c: 0x34443334  ori         $a0, $v0, 0x3334
    ctx->pc = 0x1b867cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1b8680: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b8680u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8684: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8688: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b8688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1b868c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1b8690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8694: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8698: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1b8698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    ctx->pc = 0x1b869cu;
}
