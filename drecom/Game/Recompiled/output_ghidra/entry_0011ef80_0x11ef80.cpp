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

// Function: entry_0011ef80
// Address: 0x11ef80 - 0x11efac
void entry_0011ef80_0x11ef80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef80_0x11ef80");
#endif

    ctx->pc = 0x11ef80u;

    // 0x11ef80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11EF80u;
    {
        const bool branch_taken_0x11ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF80u;
        // 0x11ef84: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef80) {
            ctx->pc = 0x11EF68u;
            return;
        }
    }
    ctx->pc = 0x11EF88u;
    // 0x11ef88: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x11ef88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x11ef8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ef90: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EF90u;
    {
        const bool branch_taken_0x11ef90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ef90) {
            ctx->pc = 0x11EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EF90u;
            // 0x11ef94: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EFB4u;
            return;
        }
    }
    ctx->pc = 0x11EF98u;
    // 0x11ef98: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x11ef98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x11ef9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF9Cu;
    {
        const bool branch_taken_0x11ef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF9Cu;
        // 0x11efa0: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef9c) {
            ctx->pc = 0x11EFACu;
            return;
        }
    }
    ctx->pc = 0x11EFA4u;
    // 0x11efa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EFA4u;
    {
        const bool branch_taken_0x11efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFA4u;
        // 0x11efa8: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efa4) {
            ctx->pc = 0x11EFB0u;
            return;
        }
    }
    ctx->pc = 0x11EFACu;
}
