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

// Function: entry_002199cc
// Address: 0x2199cc - 0x219a70
void entry_002199cc_0x2199cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002199cc_0x2199cc");
#endif

    ctx->pc = 0x2199ccu;

    // 0x2199cc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2199d0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2199d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2199d4: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2199D4u;
    {
        const bool branch_taken_0x2199d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2199d4) {
            ctx->pc = 0x219A70u;
            return;
        }
    }
    ctx->pc = 0x2199DCu;
    // 0x2199dc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2199dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2199e0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2199e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2199e4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2199e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2199e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2199e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2199ec: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2199ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2199f0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2199f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2199f4: 0x3c03414c  lui         $v1, 0x414C
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16716 << 16));
    // 0x2199f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2199f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2199fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2199fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a00: 0x0  nop
    ctx->pc = 0x219a00u;
    // NOP
    // 0x219a04: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x219a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x219a08: 0x3c033f8b  lui         $v1, 0x3F8B
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16267 << 16));
    // 0x219a0c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x219a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x219a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a14: 0x0  nop
    ctx->pc = 0x219a14u;
    // NOP
    // 0x219a18: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x219a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x219a1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x219a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x219a20: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x219a20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219a24: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x219a24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x219a28: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x219a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219a2c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x219a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x219a30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x219a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x219a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a38: 0x0  nop
    ctx->pc = 0x219a38u;
    // NOP
    // 0x219a3c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x219a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x219a40: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x219a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x219a44: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x219a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x219a48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a4c: 0x0  nop
    ctx->pc = 0x219a4cu;
    // NOP
    // 0x219a50: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x219a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x219a54: 0x3c033f77  lui         $v1, 0x3F77
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16247 << 16));
    // 0x219a58: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x219a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2621);
    // 0x219a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219a60: 0x0  nop
    ctx->pc = 0x219a60u;
    // NOP
    // 0x219a64: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x219a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x219a68: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x219a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x219a6c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x219a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x219a70u;
}
