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

// Function: entry_00111680
// Address: 0x111680 - 0x1116b0
void entry_00111680_0x111680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111680_0x111680");
#endif

    ctx->pc = 0x111680u;

    // 0x111680: 0x24a5fc01  addiu       $a1, $a1, -0x3FF
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x111684: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111688: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x111688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x11168c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x111690: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x111690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x111694: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111694u;
    {
        const bool branch_taken_0x111694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111694u;
        // 0x111698: 0x443025  or          $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111694) {
            ctx->pc = 0x1116B0u;
            return;
        }
    }
    ctx->pc = 0x11169Cu;
    // 0x11169c: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x11169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x1116a0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1116a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1116a4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1116a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1116a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1116a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1116ac: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x1116b0u;
}
