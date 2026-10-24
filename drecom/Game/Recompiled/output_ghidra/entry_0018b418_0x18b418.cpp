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

// Function: entry_0018b418
// Address: 0x18b418 - 0x18b43c
void entry_0018b418_0x18b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b418_0x18b418");
#endif

    ctx->pc = 0x18b418u;

    // 0x18b418: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b41c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b420: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b424: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x18b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18b428: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B428u;
    {
        const bool branch_taken_0x18b428 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b428) {
            ctx->pc = 0x18B43Cu;
            return;
        }
    }
    ctx->pc = 0x18B430u;
    // 0x18b430: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B430u;
    {
        const bool branch_taken_0x18b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b430) {
            ctx->pc = 0x18B43Cu;
            return;
        }
    }
    ctx->pc = 0x18B438u;
    // 0x18b438: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x18b43cu;
}
