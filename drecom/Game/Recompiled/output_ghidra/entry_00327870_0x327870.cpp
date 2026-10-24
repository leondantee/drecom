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

// Function: entry_00327870
// Address: 0x327870 - 0x327898
void entry_00327870_0x327870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327870_0x327870");
#endif

    ctx->pc = 0x327870u;

    // 0x327870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x327870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x327874: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x327874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x327878: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x327878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32787c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x32787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x327880: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x327880u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x327884: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x327884u;
    {
        const bool branch_taken_0x327884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327884) {
            ctx->pc = 0x327820u;
            return;
        }
    }
    ctx->pc = 0x32788Cu;
    // 0x32788c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32788cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327890: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x327890u;
    {
        const bool branch_taken_0x327890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327890) {
            ctx->pc = 0x3278D0u;
            return;
        }
    }
    ctx->pc = 0x327898u;
}
