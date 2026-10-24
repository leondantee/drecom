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

// Function: entry_0021cfe4
// Address: 0x21cfe4 - 0x21d040
void entry_0021cfe4_0x21cfe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cfe4_0x21cfe4");
#endif

    ctx->pc = 0x21cfe4u;

    // 0x21cfe4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfe8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x21cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x21cfec: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cff0: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x21cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x21cff4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cff8: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x21cff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x21cffc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d000: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x21d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d004: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x21d004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x21d008: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d00c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x21d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d010: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x21d010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x21d014: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21d018: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x21d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d01c: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x21d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x21d020: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x21d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d024: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x21d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x21d028: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21d028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21d02c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x21d02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d030: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x21d030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21d034: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x21d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x21d038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D038u;
    {
        const bool branch_taken_0x21d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d038) {
            ctx->pc = 0x21D048u;
            return;
        }
    }
    ctx->pc = 0x21D040u;
}
