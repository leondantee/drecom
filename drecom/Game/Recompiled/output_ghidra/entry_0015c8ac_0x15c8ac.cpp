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

// Function: entry_0015c8ac
// Address: 0x15c8ac - 0x15c8dc
void entry_0015c8ac_0x15c8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8ac_0x15c8ac");
#endif

    ctx->pc = 0x15c8acu;

    // 0x15c8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8b0: 0x0  nop
    ctx->pc = 0x15c8b0u;
    // NOP
    // 0x15c8b4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x15c8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15c8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8bc: 0x0  nop
    ctx->pc = 0x15c8bcu;
    // NOP
    // 0x15c8c0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x15c8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x15c8c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8c8: 0x0  nop
    ctx->pc = 0x15c8c8u;
    // NOP
    // 0x15c8cc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15c8d0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c8d4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x15c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c8d8: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x15c8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    ctx->pc = 0x15c8dcu;
}
