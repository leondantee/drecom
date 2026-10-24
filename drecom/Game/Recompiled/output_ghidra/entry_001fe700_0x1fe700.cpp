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

// Function: entry_001fe700
// Address: 0x1fe700 - 0x1fe750
void entry_001fe700_0x1fe700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe700_0x1fe700");
#endif

    ctx->pc = 0x1fe700u;

    // 0x1fe700: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe704: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x1fe704u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fe708: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1fe708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fe70c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fe70cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fe710: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FE710u;
    {
        const bool branch_taken_0x1fe710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe710) {
            ctx->pc = 0x1FE6C4u;
            return;
        }
    }
    ctx->pc = 0x1FE718u;
    // 0x1fe718: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe71c: 0x90650344  lbu         $a1, 0x344($v1)
    ctx->pc = 0x1fe71cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe720: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1fe720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe724: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe728: 0x90650346  lbu         $a1, 0x346($v1)
    ctx->pc = 0x1fe728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe72c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fe72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fe730: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fe730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe734: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FE734u;
    {
        const bool branch_taken_0x1fe734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe734) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE73Cu;
    // 0x1fe73c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe740: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe744: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe748: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1FE748u;
    {
        const bool branch_taken_0x1fe748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe748) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE750u;
}
