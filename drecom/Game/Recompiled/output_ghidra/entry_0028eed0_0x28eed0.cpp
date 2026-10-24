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

// Function: entry_0028eed0
// Address: 0x28eed0 - 0x28ef10
void entry_0028eed0_0x28eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028eed0_0x28eed0");
#endif

    ctx->pc = 0x28eed0u;

    // 0x28eed0: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28eed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28eed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28eed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28eed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eedc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28EEDCu;
    {
        const bool branch_taken_0x28eedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28eedc) {
            ctx->pc = 0x28EF10u;
            return;
        }
    }
    ctx->pc = 0x28EEE4u;
    // 0x28eee4: 0x96020224  lhu         $v0, 0x224($s0)
    ctx->pc = 0x28eee4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x28eee8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28eee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28eeec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28eeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28eef0: 0x8c242838  lw          $a0, 0x2838($at)
    ctx->pc = 0x28eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622838u));
    // 0x28eef4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28eef4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28eef8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28eefc: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x28eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x28ef00: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x28ef04: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x28ef04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28ef08: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x28EF08u;
    SET_GPR_U32(ctx, 31, 0x28EF10u);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x28EF08u, 0x28EF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF10u;
}
