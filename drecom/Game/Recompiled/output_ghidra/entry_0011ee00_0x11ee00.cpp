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

// Function: entry_0011ee00
// Address: 0x11ee00 - 0x11ee20
void entry_0011ee00_0x11ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ee00_0x11ee00");
#endif

    ctx->pc = 0x11ee00u;

    // 0x11ee00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ee04: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EE04u;
    {
        const bool branch_taken_0x11ee04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ee04) {
            ctx->pc = 0x11EE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EE04u;
            // 0x11ee08: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EE28u;
            return;
        }
    }
    ctx->pc = 0x11EE0Cu;
    // 0x11ee0c: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x11ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x11ee10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EE10u;
    {
        const bool branch_taken_0x11ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE10u;
        // 0x11ee14: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee10) {
            ctx->pc = 0x11EE20u;
            return;
        }
    }
    ctx->pc = 0x11EE18u;
    // 0x11ee18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EE18u;
    {
        const bool branch_taken_0x11ee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE18u;
        // 0x11ee1c: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee18) {
            ctx->pc = 0x11EE24u;
            return;
        }
    }
    ctx->pc = 0x11EE20u;
}
