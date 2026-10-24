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

// Function: entry_0028fcf4
// Address: 0x28fcf4 - 0x28fd24
void entry_0028fcf4_0x28fcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fcf4_0x28fcf4");
#endif

    switch (ctx->pc) {
        case 0x28fd00u: goto label_28fd00;
        default: break;
    }

    ctx->pc = 0x28fcf4u;

    // 0x28fcf4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28fcf4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fcf8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28FCF8u;
    SET_GPR_U32(ctx, 31, 0x28FD00u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FCF8u, 0x28FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD00u;
label_28fd00:
    // 0x28fd00: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x28fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x28fd04: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x28fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x28fd08: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x28fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x28fd0c: 0x2641025  or          $v0, $s3, $a0
    ctx->pc = 0x28fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x28fd10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28fd14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28fd18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28fd1c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28fd20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x28fd24u;
}
