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

// Function: entry_001a47dc
// Address: 0x1a47dc - 0x1a4810
void entry_001a47dc_0x1a47dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47dc_0x1a47dc");
#endif

    ctx->pc = 0x1a47dcu;

    // 0x1a47dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a47dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a47e0: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a47e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a47e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a47e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a47e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a47e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a47ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A47ECu;
    {
        const bool branch_taken_0x1a47ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47ec) {
            ctx->pc = 0x1A4810u;
            return;
        }
    }
    ctx->pc = 0x1A47F4u;
    // 0x1a47f4: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1a47f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47f8: 0x92030318  lbu         $v1, 0x318($s0)
    ctx->pc = 0x1a47f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1a47fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a47fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4800: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a4800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a4804: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1a4804u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4808: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a480c: 0xa0900318  sb          $s0, 0x318($a0)
    ctx->pc = 0x1a480cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 792), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1a4810u;
}
