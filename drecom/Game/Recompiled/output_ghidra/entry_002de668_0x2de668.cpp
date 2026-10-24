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

// Function: entry_002de668
// Address: 0x2de668 - 0x2de6b4
void entry_002de668_0x2de668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de668_0x2de668");
#endif

    switch (ctx->pc) {
        case 0x2de68cu: goto label_2de68c;
        default: break;
    }

    ctx->pc = 0x2de668u;

    // 0x2de668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de66c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2de66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2de670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de674: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2de678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2de67c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x2de67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x2de680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de684: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DE684u;
    SET_GPR_U32(ctx, 31, 0x2DE68Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DE684u, 0x2DE68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE68Cu;
label_2de68c:
    // 0x2de68c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2de68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de690: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2de690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2de694: 0x10600118  beqz        $v1, . + 4 + (0x118 << 2)
    ctx->pc = 0x2DE694u;
    {
        const bool branch_taken_0x2de694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de694) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE69Cu;
    // 0x2de69c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2de69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2de6a0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de6a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de6a8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de6a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de6ac: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x2DE6ACu;
    {
        const bool branch_taken_0x2de6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de6ac) {
            ctx->pc = 0x2DEAF8u;
            return;
        }
    }
    ctx->pc = 0x2DE6B4u;
}
