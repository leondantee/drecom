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

// Function: entry_00360df0
// Address: 0x360df0 - 0x360e14
void entry_00360df0_0x360df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360df0_0x360df0");
#endif

    ctx->pc = 0x360df0u;

    // 0x360df0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360df4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x360df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x360df8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360dfc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x360dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x360e00: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x360E00u;
    {
        const bool branch_taken_0x360e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360e00) {
            ctx->pc = 0x360EF8u;
            return;
        }
    }
    ctx->pc = 0x360E08u;
    // 0x360e08: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x360e08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360e0c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x360E0Cu;
    {
        const bool branch_taken_0x360e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360e0c) {
            ctx->pc = 0x360EE8u;
            return;
        }
    }
    ctx->pc = 0x360E14u;
}
