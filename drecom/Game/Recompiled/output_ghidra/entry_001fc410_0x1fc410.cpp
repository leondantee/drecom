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

// Function: entry_001fc410
// Address: 0x1fc410 - 0x1fc434
void entry_001fc410_0x1fc410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc410_0x1fc410");
#endif

    ctx->pc = 0x1fc410u;

    // 0x1fc410: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc414: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fc414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fc418: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fc41c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fc41cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fc420: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1FC420u;
    {
        const bool branch_taken_0x1fc420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc420) {
            ctx->pc = 0x1FC354u;
            return;
        }
    }
    ctx->pc = 0x1FC428u;
    // 0x1fc428: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fc428u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc42c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FC42Cu;
    {
        const bool branch_taken_0x1fc42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc42c) {
            ctx->pc = 0x1FC470u;
            return;
        }
    }
    ctx->pc = 0x1FC434u;
}
