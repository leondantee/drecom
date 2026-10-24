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

// Function: entry_0028f7dc
// Address: 0x28f7dc - 0x28f818
void entry_0028f7dc_0x28f7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f7dc_0x28f7dc");
#endif

    switch (ctx->pc) {
        case 0x28f814u: goto label_28f814;
        default: break;
    }

    ctx->pc = 0x28f7dcu;

    // 0x28f7dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28f7e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28f7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f7e4: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f7e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28f7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f7ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28f7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28f7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f7f4: 0x0  nop
    ctx->pc = 0x28f7f4u;
    // NOP
    // 0x28f7f8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28f7f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f7fc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x28f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x28f800: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f804: 0x0  nop
    ctx->pc = 0x28f804u;
    // NOP
    // 0x28f808: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f80c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28F80Cu;
    SET_GPR_U32(ctx, 31, 0x28F814u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F80Cu, 0x28F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F814u;
label_28f814:
    // 0x28f814: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f814u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28f818u;
}
