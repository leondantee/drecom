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

// Function: entry_00328c00
// Address: 0x328c00 - 0x328c24
void entry_00328c00_0x328c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328c00_0x328c00");
#endif

    ctx->pc = 0x328c00u;

    // 0x328c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x328c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328c04: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x328c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x328c08: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328c0c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328c10: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x328C10u;
    {
        const bool branch_taken_0x328c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328c10) {
            ctx->pc = 0x328BD4u;
            return;
        }
    }
    ctx->pc = 0x328C18u;
    // 0x328c18: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x328c18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x328c1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x328C1Cu;
    {
        const bool branch_taken_0x328c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c1c) {
            ctx->pc = 0x328C60u;
            return;
        }
    }
    ctx->pc = 0x328C24u;
}
