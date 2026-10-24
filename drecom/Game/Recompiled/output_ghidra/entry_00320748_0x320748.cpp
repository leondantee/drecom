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

// Function: entry_00320748
// Address: 0x320748 - 0x32076c
void entry_00320748_0x320748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320748_0x320748");
#endif

    ctx->pc = 0x320748u;

    // 0x320748: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32074c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x32074cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320754: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x320754u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x320758: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x320758u;
    {
        const bool branch_taken_0x320758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320758) {
            ctx->pc = 0x320684u;
            return;
        }
    }
    ctx->pc = 0x320760u;
    // 0x320760: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320764: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x320764u;
    {
        const bool branch_taken_0x320764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320764) {
            ctx->pc = 0x3207A8u;
            return;
        }
    }
    ctx->pc = 0x32076Cu;
}
