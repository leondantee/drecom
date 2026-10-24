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

// Function: entry_003386cc
// Address: 0x3386cc - 0x338708
void entry_003386cc_0x3386cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003386cc_0x3386cc");
#endif

    ctx->pc = 0x3386ccu;

    // 0x3386cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3386ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3386d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3386d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3386d4: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3386d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x3386d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3386d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3386dc: 0x84426640  lh          $v0, 0x6640($v0)
    ctx->pc = 0x3386dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26176)));
    // 0x3386e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3386e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3386e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3386e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3386e8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3386E8u;
    {
        const bool branch_taken_0x3386e8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3386e8) {
            ctx->pc = 0x338708u;
            return;
        }
    }
    ctx->pc = 0x3386F0u;
    // 0x3386f0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3386f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3386f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3386f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3386f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3386fc: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x3386fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x338700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x338700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x338704: 0xa044663e  sb          $a0, 0x663E($v0)
    ctx->pc = 0x338704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26174), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x338708u;
}
