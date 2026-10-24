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

// Function: entry_00201204
// Address: 0x201204 - 0x201230
void entry_00201204_0x201204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201204_0x201204");
#endif

    ctx->pc = 0x201204u;

    // 0x201204: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201208: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x201208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x20120c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x201210: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x201210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x201214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201214u;
    {
        const bool branch_taken_0x201214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201214) {
            ctx->pc = 0x201230u;
            return;
        }
    }
    ctx->pc = 0x20121Cu;
    // 0x20121c: 0x93828010  lbu         $v0, -0x7FF0($gp)
    ctx->pc = 0x20121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x201220: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x201220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x201224: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x201224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x201228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20122c: 0xa3828010  sb          $v0, -0x7FF0($gp)
    ctx->pc = 0x20122cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934544), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x201230u;
}
