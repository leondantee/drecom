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

// Function: entry_0033d4bc
// Address: 0x33d4bc - 0x33d4e4
void entry_0033d4bc_0x33d4bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d4bc_0x33d4bc");
#endif

    ctx->pc = 0x33d4bcu;

    // 0x33d4bc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4c4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33d4c8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4d0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33d4d4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4d8: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x33d4dc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4e0: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    ctx->pc = 0x33d4e4u;
}
