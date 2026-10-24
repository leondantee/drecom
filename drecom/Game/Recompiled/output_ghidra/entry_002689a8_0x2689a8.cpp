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

// Function: entry_002689a8
// Address: 0x2689a8 - 0x268a3c
void entry_002689a8_0x2689a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002689a8_0x2689a8");
#endif

    ctx->pc = 0x2689a8u;

    // 0x2689a8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2689a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2689ac: 0x2454a610  addiu       $s4, $v0, -0x59F0
    ctx->pc = 0x2689acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x2689b0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2689b0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2689b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2689b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2689b8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2689b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2689bc: 0x1202001f  beq         $s0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2689BCu;
    {
        const bool branch_taken_0x2689bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2689bc) {
            ctx->pc = 0x268A3Cu;
            return;
        }
    }
    ctx->pc = 0x2689C4u;
    // 0x2689c4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2689c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2689c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689cc: 0x0  nop
    ctx->pc = 0x2689ccu;
    // NOP
    // 0x2689d0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2689d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2689d4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2689d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2689d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689dc: 0x0  nop
    ctx->pc = 0x2689dcu;
    // NOP
    // 0x2689e0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2689e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2689e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2689e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2689e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689ec: 0x0  nop
    ctx->pc = 0x2689ecu;
    // NOP
    // 0x2689f0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2689f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2689f4: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x2689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x2689f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2689f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2689fc: 0x0  nop
    ctx->pc = 0x2689fcu;
    // NOP
    // 0x268a00: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x268a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x268a04: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x268a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x268a08: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x268a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x268a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268a10: 0x0  nop
    ctx->pc = 0x268a10u;
    // NOP
    // 0x268a14: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x268a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x268a18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x268a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x268a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268a20: 0x0  nop
    ctx->pc = 0x268a20u;
    // NOP
    // 0x268a24: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x268a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x268a28: 0x3c024487  lui         $v0, 0x4487
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17543 << 16));
    // 0x268a2c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x268a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x268a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268a34: 0x0  nop
    ctx->pc = 0x268a34u;
    // NOP
    // 0x268a38: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x268a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x268a3cu;
}
