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

// Function: entry_0029c4d8
// Address: 0x29c4d8 - 0x29c4fc
void entry_0029c4d8_0x29c4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c4d8_0x29c4d8");
#endif

    ctx->pc = 0x29c4d8u;

    // 0x29c4d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c4dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c4e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c4e4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x29c4e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c4e8: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29C4E8u;
    {
        const bool branch_taken_0x29c4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c4e8) {
            ctx->pc = 0x29C3D4u;
            return;
        }
    }
    ctx->pc = 0x29C4F0u;
    // 0x29c4f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x29c4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c4f4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x29C4F4u;
    {
        const bool branch_taken_0x29c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c4f4) {
            ctx->pc = 0x29C628u;
            return;
        }
    }
    ctx->pc = 0x29C4FCu;
}
