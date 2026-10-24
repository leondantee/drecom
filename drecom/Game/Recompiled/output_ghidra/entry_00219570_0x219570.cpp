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

// Function: entry_00219570
// Address: 0x219570 - 0x2195e0
void entry_00219570_0x219570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219570_0x219570");
#endif

    ctx->pc = 0x219570u;

    // 0x219570: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x219570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x219574: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x219574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x219578: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x219578u;
    {
        const bool branch_taken_0x219578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x219578) {
            ctx->pc = 0x2195E0u;
            return;
        }
    }
    ctx->pc = 0x219580u;
    // 0x219580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219584: 0x0  nop
    ctx->pc = 0x219584u;
    // NOP
    // 0x219588: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x219588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21958c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21958cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219590: 0x0  nop
    ctx->pc = 0x219590u;
    // NOP
    // 0x219594: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x219594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x219598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21959c: 0x0  nop
    ctx->pc = 0x21959cu;
    // NOP
    // 0x2195a0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2195a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2195a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2195a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195a8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2195a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2195ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2195acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2195b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2195b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195b4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2195b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2195b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2195b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2195bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2195bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195c0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2195c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2195c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2195c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2195c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195cc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2195ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2195d0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2195d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2195d4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2195d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2195d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2195dc: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2195dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x2195e0u;
}
