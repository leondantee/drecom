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

// Function: entry_0029d878
// Address: 0x29d878 - 0x29d8a0
void entry_0029d878_0x29d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d878_0x29d878");
#endif

    ctx->pc = 0x29d878u;

    // 0x29d878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d87c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d880: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x29d880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29d884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D884u;
    {
        const bool branch_taken_0x29d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d884) {
            ctx->pc = 0x29D8A0u;
            return;
        }
    }
    ctx->pc = 0x29D88Cu;
    // 0x29d88c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d890: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d894: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x29d894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x29d898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d89c: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x29d89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x29d8a0u;
}
