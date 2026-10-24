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

// Function: entry_0031f598
// Address: 0x31f598 - 0x31f5bc
void entry_0031f598_0x31f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f598_0x31f598");
#endif

    ctx->pc = 0x31f598u;

    // 0x31f598: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f59c: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x31f59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f5a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31f5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f5a4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31f5a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31f5a8: 0x1020fff3  beqz        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x31F5A8u;
    {
        const bool branch_taken_0x31f5a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5a8) {
            ctx->pc = 0x31F578u;
            return;
        }
    }
    ctx->pc = 0x31F5B0u;
    // 0x31f5b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x31f5b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f5b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31F5B4u;
    {
        const bool branch_taken_0x31f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f5b4) {
            ctx->pc = 0x31F5E8u;
            return;
        }
    }
    ctx->pc = 0x31F5BCu;
}
