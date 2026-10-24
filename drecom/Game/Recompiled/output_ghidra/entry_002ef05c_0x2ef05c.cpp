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

// Function: entry_002ef05c
// Address: 0x2ef05c - 0x2ef0a0
void entry_002ef05c_0x2ef05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef05c_0x2ef05c");
#endif

    ctx->pc = 0x2ef05cu;

    // 0x2ef05c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ef05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ef060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef064: 0x0  nop
    ctx->pc = 0x2ef064u;
    // NOP
    // 0x2ef068: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef06c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ef06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ef070: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ef070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ef074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef078: 0x0  nop
    ctx->pc = 0x2ef078u;
    // NOP
    // 0x2ef07c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef080: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ef080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ef084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef088: 0x0  nop
    ctx->pc = 0x2ef088u;
    // NOP
    // 0x2ef08c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef090: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ef090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef098: 0x0  nop
    ctx->pc = 0x2ef098u;
    // NOP
    // 0x2ef09c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ef09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x2ef0a0u;
}
