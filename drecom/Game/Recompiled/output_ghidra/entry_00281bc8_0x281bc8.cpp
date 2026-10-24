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

// Function: entry_00281bc8
// Address: 0x281bc8 - 0x281c60
void entry_00281bc8_0x281bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281bc8_0x281bc8");
#endif

    ctx->pc = 0x281bc8u;

    // 0x281bc8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x281bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x281bcc: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x281bccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x281bd0: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x281bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x281bd4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x281bd8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x281bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x281bdc: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x281BDCu;
    {
        const bool branch_taken_0x281bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x281bdc) {
            ctx->pc = 0x281C60u;
            return;
        }
    }
    ctx->pc = 0x281BE4u;
    // 0x281be4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x281be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x281be8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281be8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281bec: 0x0  nop
    ctx->pc = 0x281becu;
    // NOP
    // 0x281bf0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x281bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x281bf4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x281bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x281bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281bfc: 0x0  nop
    ctx->pc = 0x281bfcu;
    // NOP
    // 0x281c00: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x281c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x281c04: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x281c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x281c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c0c: 0x0  nop
    ctx->pc = 0x281c0cu;
    // NOP
    // 0x281c10: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x281c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x281c14: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x281c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x281c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c1c: 0x0  nop
    ctx->pc = 0x281c1cu;
    // NOP
    // 0x281c20: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x281c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x281c24: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x281c28: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x281c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x281c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c30: 0x0  nop
    ctx->pc = 0x281c30u;
    // NOP
    // 0x281c34: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x281c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x281c38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281c3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c40: 0x0  nop
    ctx->pc = 0x281c40u;
    // NOP
    // 0x281c44: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x281c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x281c48: 0x3c03442b  lui         $v1, 0x442B
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17451 << 16));
    // 0x281c4c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x281c50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x281c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281c54: 0x0  nop
    ctx->pc = 0x281c54u;
    // NOP
    // 0x281c58: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x281c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x281c5c: 0x0  nop
    ctx->pc = 0x281c5cu;
    // NOP
    ctx->pc = 0x281c60u;
}
