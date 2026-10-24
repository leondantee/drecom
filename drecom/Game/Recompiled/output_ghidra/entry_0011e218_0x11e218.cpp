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

// Function: entry_0011e218
// Address: 0x11e218 - 0x11e254
void entry_0011e218_0x11e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e218_0x11e218");
#endif

    ctx->pc = 0x11e218u;

    // 0x11e218: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e21c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e220: 0x2442e028  addiu       $v0, $v0, -0x1FD8
    ctx->pc = 0x11e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
    // 0x11e224: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11e224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e228: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e22c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e230: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e234: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11e234u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11e238: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E238u;
    {
        const bool branch_taken_0x11e238 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E238u;
        // 0x11e23c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e238) {
            ctx->pc = 0x11E254u;
            return;
        }
    }
    ctx->pc = 0x11E240u;
    // 0x11e240: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11e240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e244: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x11e244u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x11e248: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11e248u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e24c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e24cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e250: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11e250u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    ctx->pc = 0x11e254u;
}
