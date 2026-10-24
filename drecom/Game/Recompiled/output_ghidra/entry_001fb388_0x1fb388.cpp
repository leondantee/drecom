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

// Function: entry_001fb388
// Address: 0x1fb388 - 0x1fb3ac
void entry_001fb388_0x1fb388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb388_0x1fb388");
#endif

    ctx->pc = 0x1fb388u;

    // 0x1fb388: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb38c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x1fb38cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fb390: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fb390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb394: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fb394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fb398: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1FB398u;
    {
        const bool branch_taken_0x1fb398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb398) {
            ctx->pc = 0x1FB2A4u;
            return;
        }
    }
    ctx->pc = 0x1FB3A0u;
    // 0x1fb3a0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb3a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb3a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB3A4u;
    {
        const bool branch_taken_0x1fb3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3a4) {
            ctx->pc = 0x1FB3E8u;
            return;
        }
    }
    ctx->pc = 0x1FB3ACu;
}
