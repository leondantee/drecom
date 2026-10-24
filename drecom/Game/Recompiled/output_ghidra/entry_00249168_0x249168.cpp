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

// Function: entry_00249168
// Address: 0x249168 - 0x24918c
void entry_00249168_0x249168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249168_0x249168");
#endif

    ctx->pc = 0x249168u;

    // 0x249168: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x249168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x24916c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x24916cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249170: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x249170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x249174: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x249174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x249178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24917c: 0x0  nop
    ctx->pc = 0x24917cu;
    // NOP
    // 0x249180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249184: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249188: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x249188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x24918cu;
}
