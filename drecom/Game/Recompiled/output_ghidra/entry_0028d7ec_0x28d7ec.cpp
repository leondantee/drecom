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

// Function: entry_0028d7ec
// Address: 0x28d7ec - 0x28d80c
void entry_0028d7ec_0x28d7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d7ec_0x28d7ec");
#endif

    ctx->pc = 0x28d7ecu;

    // 0x28d7ec: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d7ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d7f0: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x28d7f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d7f4: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7F4u;
    {
        const bool branch_taken_0x28d7f4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d7f4) {
            ctx->pc = 0x28D80Cu;
            return;
        }
    }
    ctx->pc = 0x28D7FCu;
    // 0x28d7fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d800: 0xa2065e04  sb          $a2, 0x5E04($s0)
    ctx->pc = 0x28d800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 6));
    // 0x28d804: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28D804u;
    {
        const bool branch_taken_0x28d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d804) {
            ctx->pc = 0x28D828u;
            return;
        }
    }
    ctx->pc = 0x28D80Cu;
}
