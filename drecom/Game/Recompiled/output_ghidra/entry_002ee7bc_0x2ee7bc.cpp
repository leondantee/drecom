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

// Function: entry_002ee7bc
// Address: 0x2ee7bc - 0x2ee81c
void entry_002ee7bc_0x2ee7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee7bc_0x2ee7bc");
#endif

    ctx->pc = 0x2ee7bcu;

    // 0x2ee7bc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ee7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ee7c0: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2ee7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2ee7c4: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE7C4u;
    {
        const bool branch_taken_0x2ee7c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee7c4) {
            ctx->pc = 0x2EE81Cu;
            return;
        }
    }
    ctx->pc = 0x2EE7CCu;
    // 0x2ee7cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7d4: 0x0  nop
    ctx->pc = 0x2ee7d4u;
    // NOP
    // 0x2ee7d8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ee7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ee7dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7e4: 0x0  nop
    ctx->pc = 0x2ee7e4u;
    // NOP
    // 0x2ee7e8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ee7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ee7ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7f4: 0x0  nop
    ctx->pc = 0x2ee7f4u;
    // NOP
    // 0x2ee7f8: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ee7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ee7fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ee7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ee800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee804: 0x0  nop
    ctx->pc = 0x2ee804u;
    // NOP
    // 0x2ee808: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ee808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ee80c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2ee80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee810: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ee810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ee814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE814u;
    {
        const bool branch_taken_0x2ee814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee814) {
            ctx->pc = 0x2EE828u;
            return;
        }
    }
    ctx->pc = 0x2EE81Cu;
}
