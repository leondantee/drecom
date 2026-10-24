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

// Function: entry_00164d64
// Address: 0x164d64 - 0x164d84
void entry_00164d64_0x164d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d64_0x164d64");
#endif

    ctx->pc = 0x164d64u;

    // 0x164d64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164d68: 0x8c225458  lw          $v0, 0x5458($at)
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5458u));
    // 0x164d6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x164d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x164d70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164D70u;
    {
        const bool branch_taken_0x164d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164d70) {
            ctx->pc = 0x164D84u;
            return;
        }
    }
    ctx->pc = 0x164D78u;
    // 0x164d78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x164d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164d7c: 0xc0674fc  jal         func_19D3F0
    ctx->pc = 0x164D7Cu;
    SET_GPR_U32(ctx, 31, 0x164D84u);
    ctx->pc = 0x19D3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3F0u, 0x164D7Cu, 0x164D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D84u;
}
