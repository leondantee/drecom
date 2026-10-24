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

// Function: entry_001f66a4
// Address: 0x1f66a4 - 0x1f66c4
void entry_001f66a4_0x1f66a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f66a4_0x1f66a4");
#endif

    ctx->pc = 0x1f66a4u;

    // 0x1f66a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f66a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f66ac: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f66acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f66b0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f66b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f66b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f66b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f66b8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f66b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f66bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f66bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f66c0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f66c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x1f66c4u;
}
