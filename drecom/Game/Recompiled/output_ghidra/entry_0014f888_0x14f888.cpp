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

// Function: entry_0014f888
// Address: 0x14f888 - 0x14f8a4
void entry_0014f888_0x14f888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f888_0x14f888");
#endif

    ctx->pc = 0x14f888u;

    // 0x14f888: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14f88c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f890: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14f894: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14f898: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14F898u;
    {
        const bool branch_taken_0x14f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f898) {
            ctx->pc = 0x14F8A4u;
            return;
        }
    }
    ctx->pc = 0x14F8A0u;
    // 0x14f8a0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x14f8a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14f8a4u;
}
