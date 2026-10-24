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

// Function: entry_00218b48
// Address: 0x218b48 - 0x218ba8
void entry_00218b48_0x218b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218b48_0x218b48");
#endif

    ctx->pc = 0x218b48u;

    // 0x218b48: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x218b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218b4c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218b50: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x218B50u;
    {
        const bool branch_taken_0x218b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x218b50) {
            ctx->pc = 0x218BA8u;
            return;
        }
    }
    ctx->pc = 0x218B58u;
    // 0x218b58: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x218b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x218b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b60: 0x0  nop
    ctx->pc = 0x218b60u;
    // NOP
    // 0x218b64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218b68: 0x3c0342c4  lui         $v1, 0x42C4
    ctx->pc = 0x218b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17092 << 16));
    // 0x218b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b70: 0x0  nop
    ctx->pc = 0x218b70u;
    // NOP
    // 0x218b74: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x218b78: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x218b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x218b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b80: 0x0  nop
    ctx->pc = 0x218b80u;
    // NOP
    // 0x218b84: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x218b88: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x218b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x218b8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b90: 0x0  nop
    ctx->pc = 0x218b90u;
    // NOP
    // 0x218b94: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x218b98: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x218b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218b9c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x218b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218ba0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x218ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x218ba4: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x218ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x218ba8u;
}
