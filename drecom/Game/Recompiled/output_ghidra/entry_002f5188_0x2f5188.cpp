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

// Function: entry_002f5188
// Address: 0x2f5188 - 0x2f51f0
void entry_002f5188_0x2f5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5188_0x2f5188");
#endif

    ctx->pc = 0x2f5188u;

    // 0x2f5188: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f518c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f518cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5190: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F5190u;
    {
        const bool branch_taken_0x2f5190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5190) {
            ctx->pc = 0x2F51F0u;
            return;
        }
    }
    ctx->pc = 0x2F5198u;
    // 0x2f5198: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2f5198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f519c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2f519cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f51a0: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2f51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2f51a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51a8: 0x0  nop
    ctx->pc = 0x2f51a8u;
    // NOP
    // 0x2f51ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f51acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f51b0: 0x3c0342c4  lui         $v1, 0x42C4
    ctx->pc = 0x2f51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17092 << 16));
    // 0x2f51b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51b8: 0x0  nop
    ctx->pc = 0x2f51b8u;
    // NOP
    // 0x2f51bc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f51bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f51c0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f51c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51c8: 0x0  nop
    ctx->pc = 0x2f51c8u;
    // NOP
    // 0x2f51cc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f51ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f51d0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f51d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51d8: 0x0  nop
    ctx->pc = 0x2f51d8u;
    // NOP
    // 0x2f51dc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f51dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f51e0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f51e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f51e4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f51e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f51e8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f51ec: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2f51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x2f51f0u;
}
