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

// Function: entry_002e7e20
// Address: 0x2e7e20 - 0x2e7e3c
void entry_002e7e20_0x2e7e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7e20_0x2e7e20");
#endif

    ctx->pc = 0x2e7e20u;

    // 0x2e7e20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e7e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e7e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e7e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e7e28: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2e7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7e2c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2e7e2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e7e30: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7e34: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x2E7E34u;
    SET_GPR_U32(ctx, 31, 0x2E7E3Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x2E7E34u, 0x2E7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E3Cu;
}
