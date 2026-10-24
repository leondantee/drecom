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

// Function: entry_00290388
// Address: 0x290388 - 0x2903b8
void entry_00290388_0x290388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290388_0x290388");
#endif

    switch (ctx->pc) {
        case 0x290394u: goto label_290394;
        default: break;
    }

    ctx->pc = 0x290388u;

    // 0x290388: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x290388u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29038c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29038Cu;
    SET_GPR_U32(ctx, 31, 0x290394u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29038Cu, 0x290394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290394u;
label_290394:
    // 0x290394: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x290394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x290398: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x290398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x29039c: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x29039cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x2903a0: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x2903a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x2903a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2903a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2903a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2903a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2903ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2903acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2903b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2903b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2903b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2903b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2903b8u;
}
