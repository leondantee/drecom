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

// Function: entry_00195ed4
// Address: 0x195ed4 - 0x195eec
void entry_00195ed4_0x195ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ed4_0x195ed4");
#endif

    ctx->pc = 0x195ed4u;

    // 0x195ed4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195ed8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x195ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195edc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195ee0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x195ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195ee8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x195ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->pc = 0x195eecu;
}
