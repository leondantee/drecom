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

// Function: entry_0011bc60
// Address: 0x11bc60 - 0x11bc90
void entry_0011bc60_0x11bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc60_0x11bc60");
#endif

    ctx->pc = 0x11bc60u;

    // 0x11bc60: 0xafb50210  sw          $s5, 0x210($sp)
    ctx->pc = 0x11bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
    // 0x11bc64: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x11bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x11bc68: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x11bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x11bc6c: 0x2a4102a  slt         $v0, $s5, $a0
    ctx->pc = 0x11bc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11bc70: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11bc74: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x11bc74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x11bc78: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x11bc78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x11bc7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC7Cu;
    {
        const bool branch_taken_0x11bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC7Cu;
        // 0x11bc80: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc7c) {
            ctx->pc = 0x11BC90u;
            return;
        }
    }
    ctx->pc = 0x11BC84u;
    // 0x11bc84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11bc88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BC88u;
    {
        const bool branch_taken_0x11bc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC88u;
        // 0x11bc8c: 0xafa50210  sw          $a1, 0x210($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc88) {
            ctx->pc = 0x11BCA0u;
            return;
        }
    }
    ctx->pc = 0x11BC90u;
}
