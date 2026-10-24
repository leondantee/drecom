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

// Function: entry_00121f18
// Address: 0x121f18 - 0x121f4c
void entry_00121f18_0x121f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f18_0x121f18");
#endif

    switch (ctx->pc) {
        case 0x121f38u: goto label_121f38;
        default: break;
    }

    ctx->pc = 0x121f18u;

    // 0x121f18: 0x32650020  andi        $a1, $s3, 0x20
    ctx->pc = 0x121f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x121f1c: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x121F1Cu;
    {
        const bool branch_taken_0x121f1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x121f1c) {
            ctx->pc = 0x121F4Cu;
            return;
        }
    }
    ctx->pc = 0x121F24u;
    // 0x121f24: 0x32640010  andi        $a0, $s3, 0x10
    ctx->pc = 0x121f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x121f28: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x121F28u;
    {
        const bool branch_taken_0x121f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f28) {
            ctx->pc = 0x121F68u;
            return;
        }
    }
    ctx->pc = 0x121F30u;
    // 0x121f30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x121F30u;
    SET_GPR_U32(ctx, 31, 0x121F38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x121F30u, 0x121F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F38u;
label_121f38:
    // 0x121f38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121f38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121f3c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x121f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x121f40: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x121f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x121f44: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x121F44u;
    {
        const bool branch_taken_0x121f44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x121f44) {
            ctx->pc = 0x121F68u;
            return;
        }
    }
    ctx->pc = 0x121F4Cu;
}
