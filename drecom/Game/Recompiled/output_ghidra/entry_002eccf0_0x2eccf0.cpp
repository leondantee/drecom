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

// Function: entry_002eccf0
// Address: 0x2eccf0 - 0x2ecd6c
void entry_002eccf0_0x2eccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eccf0_0x2eccf0");
#endif

    ctx->pc = 0x2eccf0u;

    // 0x2eccf0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2eccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2eccf4: 0x2464a610  addiu       $a0, $v1, -0x59F0
    ctx->pc = 0x2eccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2eccf8: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2eccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2eccfc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2eccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ecd00: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecd04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ecd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ecd08: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2ecd08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ecd0c: 0x1204008a  beq         $s0, $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2ECD0Cu;
    {
        const bool branch_taken_0x2ecd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ecd0c) {
            ctx->pc = 0x2ECF38u;
            return;
        }
    }
    ctx->pc = 0x2ECD14u;
    // 0x2ecd14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ecd18: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ECD18u;
    {
        const bool branch_taken_0x2ecd18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ecd18) {
            ctx->pc = 0x2ECD6Cu;
            return;
        }
    }
    ctx->pc = 0x2ECD20u;
    // 0x2ecd20: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ecd24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd28: 0x0  nop
    ctx->pc = 0x2ecd28u;
    // NOP
    // 0x2ecd2c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ecd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ecd30: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
    // 0x2ecd34: 0x34876666  ori         $a3, $a0, 0x6666
    ctx->pc = 0x2ecd34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x2ecd38: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ecd38u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd3c: 0x0  nop
    ctx->pc = 0x2ecd3cu;
    // NOP
    // 0x2ecd40: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ecd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ecd44: 0x3c0642a0  lui         $a2, 0x42A0
    ctx->pc = 0x2ecd44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17056 << 16));
    // 0x2ecd48: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ecd48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd4c: 0x0  nop
    ctx->pc = 0x2ecd4cu;
    // NOP
    // 0x2ecd50: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ecd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ecd54: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ecd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ecd58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecd5c: 0x0  nop
    ctx->pc = 0x2ecd5cu;
    // NOP
    // 0x2ecd60: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ecd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ecd64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ECD64u;
    {
        const bool branch_taken_0x2ecd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd64) {
            ctx->pc = 0x2ECDB0u;
            return;
        }
    }
    ctx->pc = 0x2ECD6Cu;
}
