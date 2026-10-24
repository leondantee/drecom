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

// Function: entry_00206584
// Address: 0x206584 - 0x2065c0
void entry_00206584_0x206584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206584_0x206584");
#endif

    ctx->pc = 0x206584u;

    // 0x206584: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206588: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20658c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206590: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x206590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x206594: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x206594u;
    {
        const bool branch_taken_0x206594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206594) {
            ctx->pc = 0x206678u;
            return;
        }
    }
    ctx->pc = 0x20659Cu;
    // 0x20659c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2065a0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2065a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2065a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2065a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2065a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2065a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2065ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2065ACu;
    {
        const bool branch_taken_0x2065ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065ac) {
            ctx->pc = 0x2065C0u;
            return;
        }
    }
    ctx->pc = 0x2065B4u;
    // 0x2065b4: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x2065b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2065b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2065B8u;
    {
        const bool branch_taken_0x2065b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2065b8) {
            ctx->pc = 0x2065C4u;
            return;
        }
    }
    ctx->pc = 0x2065C0u;
}
