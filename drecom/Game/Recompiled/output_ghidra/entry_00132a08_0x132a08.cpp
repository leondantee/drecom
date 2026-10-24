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

// Function: entry_00132a08
// Address: 0x132a08 - 0x132a34
void entry_00132a08_0x132a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a08_0x132a08");
#endif

    switch (ctx->pc) {
        case 0x132a2cu: goto label_132a2c;
        default: break;
    }

    ctx->pc = 0x132a08u;

    // 0x132a08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a0c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x132a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a14: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132a1c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x132a20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132a24: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132A24u;
    SET_GPR_U32(ctx, 31, 0x132A2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132A24u, 0x132A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A2Cu;
label_132a2c:
    // 0x132a2c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x132A2Cu;
    {
        const bool branch_taken_0x132a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132a2c) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132A34u;
}
