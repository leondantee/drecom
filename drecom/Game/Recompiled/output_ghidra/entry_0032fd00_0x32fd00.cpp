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

// Function: entry_0032fd00
// Address: 0x32fd00 - 0x32fd2c
void entry_0032fd00_0x32fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032fd00_0x32fd00");
#endif

    switch (ctx->pc) {
        case 0x32fd24u: goto label_32fd24;
        default: break;
    }

    ctx->pc = 0x32fd00u;

    // 0x32fd00: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x32fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x32fd04: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32fd04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fd08: 0x26630520  addiu       $v1, $s3, 0x520
    ctx->pc = 0x32fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1312));
    // 0x32fd0c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32fd0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32fd10: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x32fd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32fd14: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x32fd14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x32fd18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32fd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fd1c: 0xc0a4a6c  jal         func_2929B0
    ctx->pc = 0x32FD1Cu;
    SET_GPR_U32(ctx, 31, 0x32FD24u);
    ctx->pc = 0x2929B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929B0u, 0x32FD1Cu, 0x32FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD24u;
label_32fd24:
    // 0x32fd24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32FD24u;
    {
        const bool branch_taken_0x32fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32fd24) {
            ctx->pc = 0x32FD54u;
            return;
        }
    }
    ctx->pc = 0x32FD2Cu;
}
