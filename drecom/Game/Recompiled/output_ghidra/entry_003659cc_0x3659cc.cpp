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

// Function: entry_003659cc
// Address: 0x3659cc - 0x365a34
void entry_003659cc_0x3659cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003659cc_0x3659cc");
#endif

    ctx->pc = 0x3659ccu;

    // 0x3659cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3659ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659d0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3659d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3659d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3659d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3659d8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3659d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3659dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3659DCu;
    {
        const bool branch_taken_0x3659dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3659dc) {
            ctx->pc = 0x365A34u;
            return;
        }
    }
    ctx->pc = 0x3659E4u;
    // 0x3659e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3659e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3659e8: 0xa202006e  sb          $v0, 0x6E($s0)
    ctx->pc = 0x3659e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x3659ec: 0xa200006f  sb          $zero, 0x6F($s0)
    ctx->pc = 0x3659ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3659f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3659f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3659f4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3659f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3659f8: 0x245103f0  addiu       $s1, $v0, 0x3F0
    ctx->pc = 0x3659f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3659fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3659fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365a00: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x365a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x365a04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a08: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x365a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x365a0c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x365a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x365a10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x365a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x365a14: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x365a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x365a18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365a1c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x365a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x365a20: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x365a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x365a24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x365a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x365a28: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x365a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x365a2c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x365a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x365a30: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x365a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x365a34u;
}
