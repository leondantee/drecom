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

// Function: entry_00353404
// Address: 0x353404 - 0x353438
void entry_00353404_0x353404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353404_0x353404");
#endif

    ctx->pc = 0x353404u;

    // 0x353404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353408: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35340c: 0x90650070  lbu         $a1, 0x70($v1)
    ctx->pc = 0x35340cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x353410: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x353410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x353414: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x353414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x353418: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x353418u;
    {
        const bool branch_taken_0x353418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x353418) {
            ctx->pc = 0x353438u;
            return;
        }
    }
    ctx->pc = 0x353420u;
    // 0x353420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353424: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353428: 0x90640070  lbu         $a0, 0x70($v1)
    ctx->pc = 0x353428u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x35342c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x353430: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353434: 0xa0640071  sb          $a0, 0x71($v1)
    ctx->pc = 0x353434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x353438u;
}
