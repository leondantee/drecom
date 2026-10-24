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

// Function: entry_0015afe0
// Address: 0x15afe0 - 0x15b000
void entry_0015afe0_0x15afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015afe0_0x15afe0");
#endif

    ctx->pc = 0x15afe0u;

    // 0x15afe0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x15afe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15afe4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15afe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15afe8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x15afec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AFECu;
    {
        const bool branch_taken_0x15afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afec) {
            ctx->pc = 0x15B000u;
            return;
        }
    }
    ctx->pc = 0x15AFF4u;
    // 0x15aff4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15aff4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15aff8: 0xc056c90  jal         func_15B240
    ctx->pc = 0x15AFF8u;
    SET_GPR_U32(ctx, 31, 0x15B000u);
    ctx->pc = 0x15B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B240u, 0x15AFF8u, 0x15B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B000u;
}
