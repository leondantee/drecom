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

// Function: entry_001199a0
// Address: 0x1199a0 - 0x1199cc
void entry_001199a0_0x1199a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001199a0_0x1199a0");
#endif

    ctx->pc = 0x1199a0u;

    // 0x1199a0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1199a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1199a4: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x1199a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x1199a8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1199a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1199ac: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x1199acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x1199b0: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x1199b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1199b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1199b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1199b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1199bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1199bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1199c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1199c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1199c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1199C4u;
    {
        const bool branch_taken_0x1199c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199C4u;
        // 0x1199c8: 0x2248824  and         $s1, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199c4) {
            ctx->pc = 0x119A44u;
            return;
        }
    }
    ctx->pc = 0x1199CCu;
}
