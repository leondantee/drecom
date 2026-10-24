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

// Function: entry_002656bc
// Address: 0x2656bc - 0x2656e4
void entry_002656bc_0x2656bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002656bc_0x2656bc");
#endif

    switch (ctx->pc) {
        case 0x2656dcu: goto label_2656dc;
        default: break;
    }

    ctx->pc = 0x2656bcu;

    // 0x2656bc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2656bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2656c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2656c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2656c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2656c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2656c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2656C8u;
    {
        const bool branch_taken_0x2656c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656c8) {
            ctx->pc = 0x2656E4u;
            return;
        }
    }
    ctx->pc = 0x2656D0u;
    // 0x2656d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2656d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2656d4: 0xc0771f8  jal         func_1DC7E0
    ctx->pc = 0x2656D4u;
    SET_GPR_U32(ctx, 31, 0x2656DCu);
    ctx->pc = 0x1DC7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC7E0u, 0x2656D4u, 0x2656DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2656DCu;
label_2656dc:
    // 0x2656dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2656DCu;
    {
        const bool branch_taken_0x2656dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2656dc) {
            ctx->pc = 0x265718u;
            return;
        }
    }
    ctx->pc = 0x2656E4u;
}
