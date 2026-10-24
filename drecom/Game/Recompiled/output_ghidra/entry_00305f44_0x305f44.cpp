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

// Function: entry_00305f44
// Address: 0x305f44 - 0x305f68
void entry_00305f44_0x305f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305f44_0x305f44");
#endif

    ctx->pc = 0x305f44u;

    // 0x305f44: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x305f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x305f48: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x305f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x305f4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x305f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x305f50: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x305f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x305f54: 0x10800172  beqz        $a0, . + 4 + (0x172 << 2)
    ctx->pc = 0x305F54u;
    {
        const bool branch_taken_0x305f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f54) {
            ctx->pc = 0x306520u;
            return;
        }
    }
    ctx->pc = 0x305F5Cu;
    // 0x305f5c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x305f5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305f60: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x305F60u;
    {
        const bool branch_taken_0x305f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305f60) {
            ctx->pc = 0x306280u;
            return;
        }
    }
    ctx->pc = 0x305F68u;
}
