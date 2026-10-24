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

// Function: entry_001b7018
// Address: 0x1b7018 - 0x1b7050
void entry_001b7018_0x1b7018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7018_0x1b7018");
#endif

    ctx->pc = 0x1b7018u;

    // 0x1b7018: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x1b7018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x1b701c: 0x3442b333  ori         $v0, $v0, 0xB333
    ctx->pc = 0x1b701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45875);
    // 0x1b7020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7024: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7028: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1b7028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1b702c: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1b702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1b7030: 0x34433334  ori         $v1, $v0, 0x3334
    ctx->pc = 0x1b7030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1b7034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7038: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b703c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1b703cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1b7040: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1b7044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7048: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b704c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1b704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1b7050u;
}
