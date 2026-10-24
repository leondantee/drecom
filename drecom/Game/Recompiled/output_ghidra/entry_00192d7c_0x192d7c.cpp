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

// Function: entry_00192d7c
// Address: 0x192d7c - 0x192dac
void entry_00192d7c_0x192d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d7c_0x192d7c");
#endif

    ctx->pc = 0x192d7cu;

    // 0x192d7c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x192d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x192d80: 0x96c30340  lhu         $v1, 0x340($s6)
    ctx->pc = 0x192d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x192d84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x192d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x192d88: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x192d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x192d8c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x192D8Cu;
    {
        const bool branch_taken_0x192d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d8c) {
            ctx->pc = 0x192DACu;
            return;
        }
    }
    ctx->pc = 0x192D94u;
    // 0x192d94: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x192d98: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x192D98u;
    {
        const bool branch_taken_0x192d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192d98) {
            ctx->pc = 0x192DACu;
            return;
        }
    }
    ctx->pc = 0x192DA0u;
    // 0x192da0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x192da0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192da4: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x192DA4u;
    {
        const bool branch_taken_0x192da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192da4) {
            ctx->pc = 0x1931B4u;
            return;
        }
    }
    ctx->pc = 0x192DACu;
}
