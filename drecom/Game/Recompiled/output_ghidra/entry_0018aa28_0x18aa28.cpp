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

// Function: entry_0018aa28
// Address: 0x18aa28 - 0x18aa58
void entry_0018aa28_0x18aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa28_0x18aa28");
#endif

    ctx->pc = 0x18aa28u;

    // 0x18aa28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa2c: 0x8c231a94  lw          $v1, 0x1A94($at)
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x18aa30: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x18aa34: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AA34u;
    {
        const bool branch_taken_0x18aa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa34) {
            ctx->pc = 0x18AA58u;
            return;
        }
    }
    ctx->pc = 0x18AA3Cu;
    // 0x18aa3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18aa40: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x18aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x18aa44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x18aa44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18aa48: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x18aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18aa4c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18aa50: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18AA50u;
    SET_GPR_U32(ctx, 31, 0x18AA58u);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18AA50u, 0x18AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA58u;
}
