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

// Function: entry_00320ce8
// Address: 0x320ce8 - 0x320d48
void entry_00320ce8_0x320ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320ce8_0x320ce8");
#endif

    ctx->pc = 0x320ce8u;

    // 0x320ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320cec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x320cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x320cf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320cf4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320cf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320cf8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320CF8u;
    {
        const bool branch_taken_0x320cf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320cf8) {
            ctx->pc = 0x320CACu;
            return;
        }
    }
    ctx->pc = 0x320D00u;
    // 0x320d00: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x320d00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d04: 0x92030344  lbu         $v1, 0x344($s0)
    ctx->pc = 0x320d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x320d08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x320d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d10: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x320d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x320d14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320d18: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x320d18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x320d1c: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x320D1Cu;
    {
        const bool branch_taken_0x320d1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x320d1c) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320D24u;
    // 0x320d24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x320d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d2c: 0xa0650abc  sb          $a1, 0xABC($v1)
    ctx->pc = 0x320d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 5));
    // 0x320d30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d34: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x320d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x320d38: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x320d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x320d3c: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x320d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x320d40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x320D40u;
    {
        const bool branch_taken_0x320d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320d40) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x320D48u;
}
