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

// Function: entry_0021e030
// Address: 0x21e030 - 0x21e0c0
void entry_0021e030_0x21e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e030_0x21e030");
#endif

    ctx->pc = 0x21e030u;

    // 0x21e030: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21e030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21e034: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x21e034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21e038: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x21e038u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21e03c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21e040: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21e044: 0x1203001e  beq         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x21E044u;
    {
        const bool branch_taken_0x21e044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21e044) {
            ctx->pc = 0x21E0C0u;
            return;
        }
    }
    ctx->pc = 0x21E04Cu;
    // 0x21e04c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21e050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e054: 0x0  nop
    ctx->pc = 0x21e054u;
    // NOP
    // 0x21e058: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21e058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21e05c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21e060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e064: 0x0  nop
    ctx->pc = 0x21e064u;
    // NOP
    // 0x21e068: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21e06c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21e070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e074: 0x0  nop
    ctx->pc = 0x21e074u;
    // NOP
    // 0x21e078: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21e078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21e07c: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x21e080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e084: 0x0  nop
    ctx->pc = 0x21e084u;
    // NOP
    // 0x21e088: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21e088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21e08c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x21e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x21e090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e094: 0x0  nop
    ctx->pc = 0x21e094u;
    // NOP
    // 0x21e098: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21e098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21e09c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e0a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e0a4: 0x0  nop
    ctx->pc = 0x21e0a4u;
    // NOP
    // 0x21e0a8: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21e0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x21e0ac: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21e0b0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21e0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21e0b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e0b8: 0x0  nop
    ctx->pc = 0x21e0b8u;
    // NOP
    // 0x21e0bc: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x21e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    ctx->pc = 0x21e0c0u;
}
