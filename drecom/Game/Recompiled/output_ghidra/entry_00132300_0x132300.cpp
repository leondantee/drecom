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

// Function: entry_00132300
// Address: 0x132300 - 0x13232c
void entry_00132300_0x132300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132300_0x132300");
#endif

    switch (ctx->pc) {
        case 0x132324u: goto label_132324;
        default: break;
    }

    ctx->pc = 0x132300u;

    // 0x132300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132304: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x132304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132308: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13230c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x13230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132314: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x132318: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13231c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13231Cu;
    SET_GPR_U32(ctx, 31, 0x132324u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13231Cu, 0x132324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132324u;
label_132324:
    // 0x132324: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x132324u;
    {
        const bool branch_taken_0x132324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132324) {
            ctx->pc = 0x132470u;
            return;
        }
    }
    ctx->pc = 0x13232Cu;
}
