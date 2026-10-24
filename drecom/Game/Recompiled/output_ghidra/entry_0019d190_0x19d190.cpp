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

// Function: entry_0019d190
// Address: 0x19d190 - 0x19d1b0
void entry_0019d190_0x19d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d190_0x19d190");
#endif

    ctx->pc = 0x19d190u;

    // 0x19d190: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x19d190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d194: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19d194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d198: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x19d198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x19d19c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D19Cu;
    {
        const bool branch_taken_0x19d19c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19d19c) {
            ctx->pc = 0x19D1B0u;
            return;
        }
    }
    ctx->pc = 0x19D1A4u;
    // 0x19d1a4: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x19d1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19d1a8: 0xc0674b0  jal         func_19D2C0
    ctx->pc = 0x19D1A8u;
    SET_GPR_U32(ctx, 31, 0x19D1B0u);
    ctx->pc = 0x19D2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D2C0u, 0x19D1A8u, 0x19D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D1B0u;
}
