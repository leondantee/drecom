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

// Function: entry_002ed744
// Address: 0x2ed744 - 0x2ed760
void entry_002ed744_0x2ed744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed744_0x2ed744");
#endif

    ctx->pc = 0x2ed744u;

    // 0x2ed744: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ed748: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ed748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed750: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED750u;
    {
        const bool branch_taken_0x2ed750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed750) {
            ctx->pc = 0x2ED760u;
            return;
        }
    }
    ctx->pc = 0x2ED758u;
    // 0x2ed758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed75c: 0xa20202aa  sb          $v0, 0x2AA($s0)
    ctx->pc = 0x2ed75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 682), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2ed760u;
}
