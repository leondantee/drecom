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

// Function: entry_00156f10
// Address: 0x156f10 - 0x156f68
void entry_00156f10_0x156f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f10_0x156f10");
#endif

    switch (ctx->pc) {
        case 0x156f48u: goto label_156f48;
        default: break;
    }

    ctx->pc = 0x156f10u;

    // 0x156f10: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x156f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x156f14: 0x1440fdc5  bnez        $v0, . + 4 + (-0x23B << 2)
    ctx->pc = 0x156F14u;
    {
        const bool branch_taken_0x156f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f14) {
            ctx->pc = 0x15662Cu;
            return;
        }
    }
    ctx->pc = 0x156F1Cu;
    // 0x156f1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156f20: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x156f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
    // 0x156f24: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156f28: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x156f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x156f2c: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x156f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
    // 0x156f30: 0xfe6000a8  sd          $zero, 0xA8($s3)
    ctx->pc = 0x156f30u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 168), GPR_U64(ctx, 0));
    // 0x156f34: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156f38: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156f3c: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x156f40: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156F40u;
    SET_GPR_U32(ctx, 31, 0x156F48u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156F40u, 0x156F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F48u;
label_156f48:
    // 0x156f48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x156f4c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x156f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x156f50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156F50u;
    {
        const bool branch_taken_0x156f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f50) {
            ctx->pc = 0x156F68u;
            return;
        }
    }
    ctx->pc = 0x156F58u;
    // 0x156f58: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x156f5c: 0x2456ec80  addiu       $s6, $v0, -0x1380
    ctx->pc = 0x156f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x156f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156F60u;
    {
        const bool branch_taken_0x156f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f60) {
            ctx->pc = 0x156F70u;
            return;
        }
    }
    ctx->pc = 0x156F68u;
}
