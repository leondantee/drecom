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

// Function: entry_00339da4
// Address: 0x339da4 - 0x339dd8
void entry_00339da4_0x339da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339da4_0x339da4");
#endif

    ctx->pc = 0x339da4u;

    // 0x339da4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339da8: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x339da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x339dac: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x339dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x339db0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x339db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x339db4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x339db8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x339db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x339dbc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x339dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x339dc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x339dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339dc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339DC4u;
    {
        const bool branch_taken_0x339dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339dc4) {
            ctx->pc = 0x339DD8u;
            return;
        }
    }
    ctx->pc = 0x339DCCu;
    // 0x339dcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x339dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339DD0u;
    {
        const bool branch_taken_0x339dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339dd0) {
            ctx->pc = 0x339DDCu;
            return;
        }
    }
    ctx->pc = 0x339DD8u;
}
