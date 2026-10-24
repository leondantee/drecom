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

// Function: entry_0014ab20
// Address: 0x14ab20 - 0x14ab44
void entry_0014ab20_0x14ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab20_0x14ab20");
#endif

    ctx->pc = 0x14ab20u;

    // 0x14ab20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ab24: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x14ab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ab28: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ab2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14ab2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14ab30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ab34: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x14ab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x14ab38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x14ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ab3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ab40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x14ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x14ab44u;
}
