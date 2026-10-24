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

// Function: entry_0033fe9c
// Address: 0x33fe9c - 0x33fec0
void entry_0033fe9c_0x33fe9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fe9c_0x33fe9c");
#endif

    ctx->pc = 0x33fe9cu;

    // 0x33fe9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33fea0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x33fea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x33fea4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x33fea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33fea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33feac: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33FEACu;
    {
        const bool branch_taken_0x33feac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33feac) {
            ctx->pc = 0x33FEF8u;
            return;
        }
    }
    ctx->pc = 0x33FEB4u;
    // 0x33feb4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33feb4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33feb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33FEB8u;
    {
        const bool branch_taken_0x33feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33feb8) {
            ctx->pc = 0x33FEE8u;
            return;
        }
    }
    ctx->pc = 0x33FEC0u;
}
