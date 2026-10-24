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

// Function: entry_002eefe0
// Address: 0x2eefe0 - 0x2ef05c
void entry_002eefe0_0x2eefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eefe0_0x2eefe0");
#endif

    ctx->pc = 0x2eefe0u;

    // 0x2eefe0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eefe4: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2eefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eefe8: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x2eefe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x2eefec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2eefecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2eeff0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2eeff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eeff4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eeff8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eeff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eeffc: 0x12030086  beq         $s0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2EEFFCu;
    {
        const bool branch_taken_0x2eeffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeffc) {
            ctx->pc = 0x2EF218u;
            return;
        }
    }
    ctx->pc = 0x2EF004u;
    // 0x2ef004: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ef004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ef008: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EF008u;
    {
        const bool branch_taken_0x2ef008 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef008) {
            ctx->pc = 0x2EF05Cu;
            return;
        }
    }
    ctx->pc = 0x2EF010u;
    // 0x2ef010: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ef014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef018: 0x0  nop
    ctx->pc = 0x2ef018u;
    // NOP
    // 0x2ef01c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ef01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ef020: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ef020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ef024: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ef024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ef028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef02c: 0x0  nop
    ctx->pc = 0x2ef02cu;
    // NOP
    // 0x2ef030: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ef030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ef034: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2ef038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef03c: 0x0  nop
    ctx->pc = 0x2ef03cu;
    // NOP
    // 0x2ef040: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ef040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ef044: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ef044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ef048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ef048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef04c: 0x0  nop
    ctx->pc = 0x2ef04cu;
    // NOP
    // 0x2ef050: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ef050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ef054: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2EF054u;
    {
        const bool branch_taken_0x2ef054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef054) {
            ctx->pc = 0x2EF0A0u;
            return;
        }
    }
    ctx->pc = 0x2EF05Cu;
}
