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

// Function: entry_00262e28
// Address: 0x262e28 - 0x262e60
void entry_00262e28_0x262e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262e28_0x262e28");
#endif

    ctx->pc = 0x262e28u;

    // 0x262e28: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e2c: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x262e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x262e30: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x262E30u;
    {
        const bool branch_taken_0x262e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e30) {
            ctx->pc = 0x262E60u;
            return;
        }
    }
    ctx->pc = 0x262E38u;
    // 0x262e38: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x262e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e3c: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x262e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x262e40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262e44: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x262e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x262e48: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262E48u;
    {
        const bool branch_taken_0x262e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e48) {
            ctx->pc = 0x262E60u;
            return;
        }
    }
    ctx->pc = 0x262E50u;
    // 0x262e50: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x262e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x262e54: 0x90831084  lbu         $v1, 0x1084($a0)
    ctx->pc = 0x262e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4228)));
    // 0x262e58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262e5c: 0xa0831084  sb          $v1, 0x1084($a0)
    ctx->pc = 0x262e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4228), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x262e60u;
}
