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

// Function: entry_00219188
// Address: 0x219188 - 0x2191f0
void entry_00219188_0x219188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219188_0x219188");
#endif

    ctx->pc = 0x219188u;

    // 0x219188: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21918c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219190: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x219190u;
    {
        const bool branch_taken_0x219190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x219190) {
            ctx->pc = 0x2191F0u;
            return;
        }
    }
    ctx->pc = 0x219198u;
    // 0x219198: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x219198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x21919c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191a0: 0x0  nop
    ctx->pc = 0x2191a0u;
    // NOP
    // 0x2191a4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2191a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2191a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2191a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2191ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2191acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191b0: 0x0  nop
    ctx->pc = 0x2191b0u;
    // NOP
    // 0x2191b4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2191b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2191b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2191b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2191bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2191bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191c0: 0x0  nop
    ctx->pc = 0x2191c0u;
    // NOP
    // 0x2191c4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2191c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2191c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2191c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2191cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2191ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2191d0: 0x0  nop
    ctx->pc = 0x2191d0u;
    // NOP
    // 0x2191d4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2191d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2191d8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2191d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2191dc: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x2191dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x2191e0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2191e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2191e4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2191e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2191e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2191e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2191ec: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2191ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x2191f0u;
}
