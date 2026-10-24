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

// Function: entry_001fd290
// Address: 0x1fd290 - 0x1fd2b4
void entry_001fd290_0x1fd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd290_0x1fd290");
#endif

    ctx->pc = 0x1fd290u;

    // 0x1fd290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd294: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fd294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fd298: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd29c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fd29cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fd2a0: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1FD2A0u;
    {
        const bool branch_taken_0x1fd2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2a0) {
            ctx->pc = 0x1FD1BCu;
            return;
        }
    }
    ctx->pc = 0x1FD2A8u;
    // 0x1fd2a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fd2a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fd2ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD2ACu;
    {
        const bool branch_taken_0x1fd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd2ac) {
            ctx->pc = 0x1FD2F0u;
            return;
        }
    }
    ctx->pc = 0x1FD2B4u;
}
