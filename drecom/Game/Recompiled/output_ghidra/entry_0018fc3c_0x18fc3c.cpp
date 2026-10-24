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

// Function: entry_0018fc3c
// Address: 0x18fc3c - 0x18fc64
void entry_0018fc3c_0x18fc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc3c_0x18fc3c");
#endif

    switch (ctx->pc) {
        case 0x18fc48u: goto label_18fc48;
        default: break;
    }

    ctx->pc = 0x18fc3cu;

    // 0x18fc3c: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x18fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fc40: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18FC40u;
    SET_GPR_U32(ctx, 31, 0x18FC48u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18FC40u, 0x18FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC48u;
label_18fc48:
    // 0x18fc48: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18fc48u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18fc4c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x18fc4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc50: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x18fc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x18fc54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC54u;
    {
        const bool branch_taken_0x18fc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc54) {
            ctx->pc = 0x18FC64u;
            return;
        }
    }
    ctx->pc = 0x18FC5Cu;
    // 0x18fc5c: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x18fc5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc60: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x18fc60u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18fc64u;
}
