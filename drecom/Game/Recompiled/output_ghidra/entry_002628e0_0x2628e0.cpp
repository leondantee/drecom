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

// Function: entry_002628e0
// Address: 0x2628e0 - 0x262918
void entry_002628e0_0x2628e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002628e0_0x2628e0");
#endif

    ctx->pc = 0x2628e0u;

    // 0x2628e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628e4: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x2628e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x2628e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2628E8u;
    {
        const bool branch_taken_0x2628e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628e8) {
            ctx->pc = 0x262918u;
            return;
        }
    }
    ctx->pc = 0x2628F0u;
    // 0x2628f0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2628f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2628f4: 0x946309e0  lhu         $v1, 0x9E0($v1)
    ctx->pc = 0x2628f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2528)));
    // 0x2628f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2628f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2628fc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2628fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x262900: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262900u;
    {
        const bool branch_taken_0x262900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262900) {
            ctx->pc = 0x262918u;
            return;
        }
    }
    ctx->pc = 0x262908u;
    // 0x262908: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x262908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26290c: 0x90831084  lbu         $v1, 0x1084($a0)
    ctx->pc = 0x26290cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4228)));
    // 0x262910: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x262910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262914: 0xa0831084  sb          $v1, 0x1084($a0)
    ctx->pc = 0x262914u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4228), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x262918u;
}
