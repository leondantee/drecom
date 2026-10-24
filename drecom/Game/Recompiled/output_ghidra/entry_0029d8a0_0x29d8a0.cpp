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

// Function: entry_0029d8a0
// Address: 0x29d8a0 - 0x29d8c8
void entry_0029d8a0_0x29d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d8a0_0x29d8a0");
#endif

    ctx->pc = 0x29d8a0u;

    // 0x29d8a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d8a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d8a8: 0x94420040  lhu         $v0, 0x40($v0)
    ctx->pc = 0x29d8a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29d8ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D8ACu;
    {
        const bool branch_taken_0x29d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8ac) {
            ctx->pc = 0x29D8C8u;
            return;
        }
    }
    ctx->pc = 0x29D8B4u;
    // 0x29d8b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d8b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d8bc: 0x94620040  lhu         $v0, 0x40($v1)
    ctx->pc = 0x29d8bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x29d8c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d8c4: 0xa4620040  sh          $v0, 0x40($v1)
    ctx->pc = 0x29d8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x29d8c8u;
}
