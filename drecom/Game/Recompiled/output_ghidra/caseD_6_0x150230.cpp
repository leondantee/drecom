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

// Function: caseD_6
// Address: 0x150230 - 0x150254
void caseD_6_0x150230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x150230");
#endif

    ctx->pc = 0x150230u;

    // 0x150230: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150234: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x150234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15023c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15023Cu;
    {
        const bool branch_taken_0x15023c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15023c) {
            ctx->pc = 0x15027Cu;
            return;
        }
    }
    ctx->pc = 0x150244u;
    // 0x150244: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x150244u;
    {
        const bool branch_taken_0x150244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150244) {
            ctx->pc = 0x150254u;
            return;
        }
    }
    ctx->pc = 0x15024Cu;
    // 0x15024c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x15024Cu;
    {
        const bool branch_taken_0x15024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15024c) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150254u;
}
