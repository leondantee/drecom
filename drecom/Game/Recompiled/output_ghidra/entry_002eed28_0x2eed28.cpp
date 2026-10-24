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

// Function: entry_002eed28
// Address: 0x2eed28 - 0x2eed9c
void entry_002eed28_0x2eed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eed28_0x2eed28");
#endif

    ctx->pc = 0x2eed28u;

    // 0x2eed28: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eed28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eed2c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2eed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eed30: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x2eed30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x2eed34: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x2eed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2eed38: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2eed38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eed3c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eed40: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eed44: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EED44u;
    {
        const bool branch_taken_0x2eed44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eed44) {
            ctx->pc = 0x2EED9Cu;
            return;
        }
    }
    ctx->pc = 0x2EED4Cu;
    // 0x2eed4c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2eed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eed50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed54: 0x0  nop
    ctx->pc = 0x2eed54u;
    // NOP
    // 0x2eed58: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eed58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eed5c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eed60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed64: 0x0  nop
    ctx->pc = 0x2eed64u;
    // NOP
    // 0x2eed68: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eed6c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2eed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eed70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed74: 0x0  nop
    ctx->pc = 0x2eed74u;
    // NOP
    // 0x2eed78: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eed78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eed7c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2eed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2eed80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed84: 0x0  nop
    ctx->pc = 0x2eed84u;
    // NOP
    // 0x2eed88: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eed8c: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2eed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2eed90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eed90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eed94: 0x0  nop
    ctx->pc = 0x2eed94u;
    // NOP
    // 0x2eed98: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eed98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x2eed9cu;
}
