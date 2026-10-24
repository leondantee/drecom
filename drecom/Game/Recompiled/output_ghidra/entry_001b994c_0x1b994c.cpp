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

// Function: entry_001b994c
// Address: 0x1b994c - 0x1b9978
void entry_001b994c_0x1b994c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b994c_0x1b994c");
#endif

    switch (ctx->pc) {
        case 0x1b996cu: goto label_1b996c;
        default: break;
    }

    ctx->pc = 0x1b994cu;

    // 0x1b994c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9950: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9954: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b9954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b9958: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x1b9958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1b995c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b995cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9960: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b9964: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B9964u;
    SET_GPR_U32(ctx, 31, 0x1B996Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9964u, 0x1B996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B996Cu;
label_1b996c:
    // 0x1b996c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b996cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9970: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9974: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1b9974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1b9978u;
}
