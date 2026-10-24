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

// Function: entry_001f89b8
// Address: 0x1f89b8 - 0x1f89d8
void entry_001f89b8_0x1f89b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f89b8_0x1f89b8");
#endif

    ctx->pc = 0x1f89b8u;

    // 0x1f89b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f89bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f89c0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1f89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x1f89c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f89c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f89c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f89cc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f89d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f89d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f89d4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    ctx->pc = 0x1f89d8u;
}
