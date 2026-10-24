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

// Function: entry_001fb9f8
// Address: 0x1fb9f8 - 0x1fba40
void entry_001fb9f8_0x1fb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb9f8_0x1fb9f8");
#endif

    ctx->pc = 0x1fb9f8u;

    // 0x1fb9f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9fc: 0x90820348  lbu         $v0, 0x348($a0)
    ctx->pc = 0x1fb9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1fba00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fba04: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1fba04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fba08: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FBA08u;
    {
        const bool branch_taken_0x1fba08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fba08) {
            ctx->pc = 0x1FB9BCu;
            return;
        }
    }
    ctx->pc = 0x1FBA10u;
    // 0x1fba10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba14: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fba14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fba18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1fba18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fba1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba20: 0x90420346  lbu         $v0, 0x346($v0)
    ctx->pc = 0x1fba20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 838)));
    // 0x1fba24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fba28: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1fba28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fba2c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBA2Cu;
    {
        const bool branch_taken_0x1fba2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba2c) {
            ctx->pc = 0x1FBA40u;
            return;
        }
    }
    ctx->pc = 0x1FBA34u;
    // 0x1fba34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fba38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fba3c: 0xa0620abc  sb          $v0, 0xABC($v1)
    ctx->pc = 0x1fba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1fba40u;
}
