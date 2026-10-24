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

// Function: entry_00191984
// Address: 0x191984 - 0x1919b8
void entry_00191984_0x191984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191984_0x191984");
#endif

    switch (ctx->pc) {
        case 0x191998u: goto label_191998;
        default: break;
    }

    ctx->pc = 0x191984u;

    // 0x191984: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x191988: 0x8c24a600  lw          $a0, -0x5A00($at)
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A600u));
    // 0x19198c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x19198cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x191990: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x191990u;
    SET_GPR_U32(ctx, 31, 0x191998u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x191990u, 0x191998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191998u;
label_191998:
    // 0x191998: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x19199c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x1919a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1919a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1919a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1919a8: 0xac22a600  sw          $v0, -0x5A00($at)
    ctx->pc = 0x1919a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x1919ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1919b0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1919B0u;
    {
        const bool branch_taken_0x1919b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919b0) {
            ctx->pc = 0x191AB8u;
            return;
        }
    }
    ctx->pc = 0x1919B8u;
}
