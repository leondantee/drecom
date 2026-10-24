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

// Function: entry_00195e3c
// Address: 0x195e3c - 0x195e54
void entry_00195e3c_0x195e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195e3c_0x195e3c");
#endif

    ctx->pc = 0x195e3cu;

    // 0x195e3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195e40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x195e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195e48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e50: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x195e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->pc = 0x195e54u;
}
