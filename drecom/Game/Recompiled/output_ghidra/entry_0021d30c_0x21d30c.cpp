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

// Function: entry_0021d30c
// Address: 0x21d30c - 0x21d370
void entry_0021d30c_0x21d30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d30c_0x21d30c");
#endif

    ctx->pc = 0x21d30cu;

    // 0x21d30c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21d310: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21d310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21d314: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21D314u;
    {
        const bool branch_taken_0x21d314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21d314) {
            ctx->pc = 0x21D370u;
            return;
        }
    }
    ctx->pc = 0x21D31Cu;
    // 0x21d31c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x21d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d320: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21d320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21d324: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x21d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d328: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21d328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21d32c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x21d32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d330: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21d330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21d334: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d338: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21d338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21d33c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d340: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d344: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x21d344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x21d348: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d34c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d350: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x21d350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x21d354: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21d358: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d35c: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x21d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x21d360: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x21d360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d364: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21d364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21d368: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x21d36c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x21d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x21d370u;
}
