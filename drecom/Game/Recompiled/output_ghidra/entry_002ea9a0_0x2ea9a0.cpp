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

// Function: entry_002ea9a0
// Address: 0x2ea9a0 - 0x2ea9e8
void entry_002ea9a0_0x2ea9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea9a0_0x2ea9a0");
#endif

    ctx->pc = 0x2ea9a0u;

    // 0x2ea9a0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9a8: 0x0  nop
    ctx->pc = 0x2ea9a8u;
    // NOP
    // 0x2ea9ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ea9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ea9b0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea9b4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ea9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ea9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9bc: 0x0  nop
    ctx->pc = 0x2ea9bcu;
    // NOP
    // 0x2ea9c0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ea9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ea9c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9cc: 0x0  nop
    ctx->pc = 0x2ea9ccu;
    // NOP
    // 0x2ea9d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ea9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ea9d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ea9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ea9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea9dc: 0x0  nop
    ctx->pc = 0x2ea9dcu;
    // NOP
    // 0x2ea9e0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ea9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ea9e4: 0x0  nop
    ctx->pc = 0x2ea9e4u;
    // NOP
    ctx->pc = 0x2ea9e8u;
}
