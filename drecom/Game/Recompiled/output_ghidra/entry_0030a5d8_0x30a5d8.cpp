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

// Function: entry_0030a5d8
// Address: 0x30a5d8 - 0x30a5fc
void entry_0030a5d8_0x30a5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030a5d8_0x30a5d8");
#endif

    ctx->pc = 0x30a5d8u;

    // 0x30a5d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a5dc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a5e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a5e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30a5e8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30A5E8u;
    {
        const bool branch_taken_0x30a5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5e8) {
            ctx->pc = 0x30A690u;
            return;
        }
    }
    ctx->pc = 0x30A5F0u;
    // 0x30a5f0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30a5f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a5f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30A5F4u;
    {
        const bool branch_taken_0x30a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5f4) {
            ctx->pc = 0x30A680u;
            return;
        }
    }
    ctx->pc = 0x30A5FCu;
}
