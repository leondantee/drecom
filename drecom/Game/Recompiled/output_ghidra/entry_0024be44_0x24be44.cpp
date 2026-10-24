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

// Function: entry_0024be44
// Address: 0x24be44 - 0x24be6c
void entry_0024be44_0x24be44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024be44_0x24be44");
#endif

    switch (ctx->pc) {
        case 0x24be60u: goto label_24be60;
        default: break;
    }

    ctx->pc = 0x24be44u;

    // 0x24be44: 0x8e44012c  lw          $a0, 0x12C($s2)
    ctx->pc = 0x24be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x24be48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24be48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24be4c: 0x1483006e  bne         $a0, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x24BE4Cu;
    {
        const bool branch_taken_0x24be4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24be4c) {
            ctx->pc = 0x24C008u;
            return;
        }
    }
    ctx->pc = 0x24BE54u;
    // 0x24be54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24be58: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x24BE58u;
    SET_GPR_U32(ctx, 31, 0x24BE60u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x24BE58u, 0x24BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE60u;
label_24be60:
    // 0x24be60: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x24be60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24be64: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x24BE64u;
    {
        const bool branch_taken_0x24be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be64) {
            ctx->pc = 0x24BFF8u;
            return;
        }
    }
    ctx->pc = 0x24BE6Cu;
}
