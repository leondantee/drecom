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

// Function: entry_002868c4
// Address: 0x2868c4 - 0x2868ec
void entry_002868c4_0x2868c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002868c4_0x2868c4");
#endif

    ctx->pc = 0x2868c4u;

    // 0x2868c4: 0x92466624  lbu         $a2, 0x6624($s2)
    ctx->pc = 0x2868c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26148)));
    // 0x2868c8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2868c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2868cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2868ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2868d0: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2868D0u;
    {
        const bool branch_taken_0x2868d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2868d0) {
            ctx->pc = 0x2868ECu;
            return;
        }
    }
    ctx->pc = 0x2868D8u;
    // 0x2868d8: 0x92435e04  lbu         $v1, 0x5E04($s2)
    ctx->pc = 0x2868d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24068)));
    // 0x2868dc: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x2868dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2868e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2868e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2868e4: 0x1507001d  bne         $t0, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2868E4u;
    {
        const bool branch_taken_0x2868e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x2868e4) {
            ctx->pc = 0x28695Cu;
            return;
        }
    }
    ctx->pc = 0x2868ECu;
}
