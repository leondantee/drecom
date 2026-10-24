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

// Function: entry_0022bf14
// Address: 0x22bf14 - 0x22bf54
void entry_0022bf14_0x22bf14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bf14_0x22bf14");
#endif

    ctx->pc = 0x22bf14u;

    // 0x22bf14: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf18: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22bf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22bf1c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x22BF1Cu;
    {
        const bool branch_taken_0x22bf1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf1c) {
            ctx->pc = 0x22BF54u;
            return;
        }
    }
    ctx->pc = 0x22BF24u;
    // 0x22bf24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bf28: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22bf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22bf30: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x22bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x22bf34: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf38: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22bf38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x22bf3c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x22bf40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bf44: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22bf48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bf4c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22bf50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x22bf54u;
}
