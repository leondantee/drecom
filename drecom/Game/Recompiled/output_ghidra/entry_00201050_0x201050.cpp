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

// Function: entry_00201050
// Address: 0x201050 - 0x2010a4
void entry_00201050_0x201050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201050_0x201050");
#endif

    ctx->pc = 0x201050u;

    // 0x201050: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201054: 0x904200d1  lbu         $v0, 0xD1($v0)
    ctx->pc = 0x201054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 209)));
    // 0x201058: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20105c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20105Cu;
    {
        const bool branch_taken_0x20105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20105c) {
            ctx->pc = 0x2010A4u;
            return;
        }
    }
    ctx->pc = 0x201064u;
    // 0x201064: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201068: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x201068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x20106c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20106Cu;
    {
        const bool branch_taken_0x20106c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20106c) {
            ctx->pc = 0x201100u;
            return;
        }
    }
    ctx->pc = 0x201074u;
    // 0x201074: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201078: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x20107c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x20107cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x201080: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x201080u;
    {
        const bool branch_taken_0x201080 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x201080) {
            ctx->pc = 0x201100u;
            return;
        }
    }
    ctx->pc = 0x201088u;
    // 0x201088: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20108c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201090: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x201090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x201094: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201098: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x201098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x20109c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20109Cu;
    {
        const bool branch_taken_0x20109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20109c) {
            ctx->pc = 0x201100u;
            return;
        }
    }
    ctx->pc = 0x2010A4u;
}
