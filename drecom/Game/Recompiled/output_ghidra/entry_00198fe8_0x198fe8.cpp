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

// Function: entry_00198fe8
// Address: 0x198fe8 - 0x199004
void entry_00198fe8_0x198fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fe8_0x198fe8");
#endif

    ctx->pc = 0x198fe8u;

    // 0x198fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198fec: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x198fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198ff0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x198ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x198ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198ff8: 0x0  nop
    ctx->pc = 0x198ff8u;
    // NOP
    // 0x198ffc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x198ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x199000: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x199000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x199004u;
}
