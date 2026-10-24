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

// Function: entry_0030a084
// Address: 0x30a084 - 0x30a0a8
void entry_0030a084_0x30a084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a084_0x30a084");
#endif

    ctx->pc = 0x30a084u;

    // 0x30a084: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a088: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a08c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a090: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x30a090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x30a094: 0x108000d8  beqz        $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x30A094u;
    {
        const bool branch_taken_0x30a094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a094) {
            ctx->pc = 0x30A3F8u;
            return;
        }
    }
    ctx->pc = 0x30A09Cu;
    // 0x30a09c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30a09cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a0a0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x30A0A0u;
    {
        const bool branch_taken_0x30a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0a0) {
            ctx->pc = 0x30A3E8u;
            return;
        }
    }
    ctx->pc = 0x30A0A8u;
}
