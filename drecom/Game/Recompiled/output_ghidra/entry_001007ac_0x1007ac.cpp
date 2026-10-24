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

// Function: entry_001007ac
// Address: 0x1007ac - 0x1007d0
void entry_001007ac_0x1007ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007ac_0x1007ac");
#endif

    ctx->pc = 0x1007acu;

    // 0x1007ac: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x1007acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x1007b0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1007b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1007b4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1007B4u;
    {
        const bool branch_taken_0x1007b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007B4u;
        // 0x1007b8: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007b4) {
            ctx->pc = 0x1007D0u;
            return;
        }
    }
    ctx->pc = 0x1007BCu;
    // 0x1007bc: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x1007bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
    // 0x1007c0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1007c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1007c4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1007c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1007c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1007C8u;
    {
        const bool branch_taken_0x1007c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007C8u;
        // 0x1007cc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007c8) {
            ctx->pc = 0x1007D4u;
            return;
        }
    }
    ctx->pc = 0x1007D0u;
}
