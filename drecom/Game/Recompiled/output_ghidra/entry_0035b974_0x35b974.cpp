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

// Function: entry_0035b974
// Address: 0x35b974 - 0x35b990
void entry_0035b974_0x35b974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b974_0x35b974");
#endif

    switch (ctx->pc) {
        case 0x35b984u: goto label_35b984;
        default: break;
    }

    ctx->pc = 0x35b974u;

    // 0x35b974: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b978: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x35b978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35b97c: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x35B97Cu;
    SET_GPR_U32(ctx, 31, 0x35B984u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x35B97Cu, 0x35B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B984u;
label_35b984:
    // 0x35b984: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35b984u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35B988u;
    {
        const bool branch_taken_0x35b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b988) {
            ctx->pc = 0x35B9B8u;
            return;
        }
    }
    ctx->pc = 0x35B990u;
}
