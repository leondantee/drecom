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

// Function: entry_0035a080
// Address: 0x35a080 - 0x35a0a4
void entry_0035a080_0x35a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a080_0x35a080");
#endif

    ctx->pc = 0x35a080u;

    // 0x35a080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a084: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a088: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a08c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x35a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x35a090: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x35A090u;
    {
        const bool branch_taken_0x35a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a090) {
            ctx->pc = 0x35A178u;
            return;
        }
    }
    ctx->pc = 0x35A098u;
    // 0x35a098: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35a098u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a09c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35A09Cu;
    {
        const bool branch_taken_0x35a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a09c) {
            ctx->pc = 0x35A168u;
            return;
        }
    }
    ctx->pc = 0x35A0A4u;
}
