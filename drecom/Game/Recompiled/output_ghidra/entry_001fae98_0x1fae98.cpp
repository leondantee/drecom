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

// Function: entry_001fae98
// Address: 0x1fae98 - 0x1faebc
void entry_001fae98_0x1fae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae98_0x1fae98");
#endif

    ctx->pc = 0x1fae98u;

    // 0x1fae98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae9c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fae9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1faea0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1faea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faea4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1faea4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1faea8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FAEA8u;
    {
        const bool branch_taken_0x1faea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faea8) {
            ctx->pc = 0x1FAE5Cu;
            return;
        }
    }
    ctx->pc = 0x1FAEB0u;
    // 0x1faeb0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1faeb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faeb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAEB4u;
    {
        const bool branch_taken_0x1faeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faeb4) {
            ctx->pc = 0x1FAED0u;
            return;
        }
    }
    ctx->pc = 0x1FAEBCu;
}
