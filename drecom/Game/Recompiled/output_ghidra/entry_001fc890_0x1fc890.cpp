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

// Function: entry_001fc890
// Address: 0x1fc890 - 0x1fc8b4
void entry_001fc890_0x1fc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc890_0x1fc890");
#endif

    ctx->pc = 0x1fc890u;

    // 0x1fc890: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc894: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc898: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc89c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc8a0: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FC8A0u;
    {
        const bool branch_taken_0x1fc8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8a0) {
            ctx->pc = 0x1FC7D4u;
            return;
        }
    }
    ctx->pc = 0x1FC8A8u;
    // 0x1fc8a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc8a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc8ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC8ACu;
    {
        const bool branch_taken_0x1fc8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8ac) {
            ctx->pc = 0x1FC8F0u;
            return;
        }
    }
    ctx->pc = 0x1FC8B4u;
}
