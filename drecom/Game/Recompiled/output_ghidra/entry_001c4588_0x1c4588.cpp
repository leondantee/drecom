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

// Function: entry_001c4588
// Address: 0x1c4588 - 0x1c45d4
void entry_001c4588_0x1c4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4588_0x1c4588");
#endif

    ctx->pc = 0x1c4588u;

    // 0x1c4588: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c458c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4590: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1c4590u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c4594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4598: 0xa050156c  sb          $s0, 0x156C($v0)
    ctx->pc = 0x1c4598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c459c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c45a0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1c45a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c45a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c45a8: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1c45ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C45ACu;
    {
        const bool branch_taken_0x1c45ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45ac) {
            ctx->pc = 0x1C45D4u;
            return;
        }
    }
    ctx->pc = 0x1C45B4u;
    // 0x1c45b4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1c45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1c45b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c45b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c45bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C45BCu;
    {
        const bool branch_taken_0x1c45bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45bc) {
            ctx->pc = 0x1C45D4u;
            return;
        }
    }
    ctx->pc = 0x1C45C4u;
    // 0x1c45c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c45c8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c45c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c45cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C45CCu;
    {
        const bool branch_taken_0x1c45cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45cc) {
            ctx->pc = 0x1C45E0u;
            return;
        }
    }
    ctx->pc = 0x1C45D4u;
}
