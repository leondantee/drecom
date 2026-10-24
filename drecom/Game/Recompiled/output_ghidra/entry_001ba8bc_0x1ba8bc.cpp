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

// Function: entry_001ba8bc
// Address: 0x1ba8bc - 0x1ba8f4
void entry_001ba8bc_0x1ba8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba8bc_0x1ba8bc");
#endif

    switch (ctx->pc) {
        case 0x1ba8c8u: goto label_1ba8c8;
        default: break;
    }

    ctx->pc = 0x1ba8bcu;

    // 0x1ba8bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1ba8bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ba8c0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BA8C0u;
    SET_GPR_U32(ctx, 31, 0x1BA8C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BA8C0u, 0x1BA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8C8u;
label_1ba8c8:
    // 0x1ba8c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ba8c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba8cc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba8d0: 0x8ca61b60  lw          $a2, 0x1B60($a1)
    ctx->pc = 0x1ba8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7008)));
    // 0x1ba8d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA8D4u;
    {
        const bool branch_taken_0x1ba8d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8d4) {
            ctx->pc = 0x1BA8F4u;
            return;
        }
    }
    ctx->pc = 0x1BA8DCu;
    // 0x1ba8dc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba8e0: 0x90e80003  lbu         $t0, 0x3($a3)
    ctx->pc = 0x1ba8e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1ba8e4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ba8e8: 0xa0e40003  sb          $a0, 0x3($a3)
    ctx->pc = 0x1ba8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ba8ec: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1BA8ECu;
    {
        const bool branch_taken_0x1ba8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba8ec) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA8F4u;
}
