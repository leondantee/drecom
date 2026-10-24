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

// Function: entry_001bc48c
// Address: 0x1bc48c - 0x1bc4c8
void entry_001bc48c_0x1bc48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc48c_0x1bc48c");
#endif

    switch (ctx->pc) {
        case 0x1bc49cu: goto label_1bc49c;
        default: break;
    }

    ctx->pc = 0x1bc48cu;

    // 0x1bc48c: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x1bc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1bc490: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc494: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BC494u;
    SET_GPR_U32(ctx, 31, 0x1BC49Cu);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC494u, 0x1BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC49Cu;
label_1bc49c:
    // 0x1bc49c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1bc49cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc4a0: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BC4A0u;
    {
        const bool branch_taken_0x1bc4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4a0) {
            ctx->pc = 0x1BC54Cu;
            return;
        }
    }
    ctx->pc = 0x1BC4A8u;
    // 0x1bc4a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1bc4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc4ac: 0x16050006  bne         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC4ACu;
    {
        const bool branch_taken_0x1bc4ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bc4ac) {
            ctx->pc = 0x1BC4C8u;
            return;
        }
    }
    ctx->pc = 0x1BC4B4u;
    // 0x1bc4b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bc4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc4b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc4bc: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1bc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
    // 0x1bc4c0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BC4C0u;
    {
        const bool branch_taken_0x1bc4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4c0) {
            ctx->pc = 0x1BC54Cu;
            return;
        }
    }
    ctx->pc = 0x1BC4C8u;
}
