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

// Function: SetfromIPUDma
// Address: 0x35de10 - 0x35de70
void SetfromIPUDma_0x35de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetfromIPUDma_0x35de10");
#endif

    ctx->pc = 0x35de10u;

    // 0x35de10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35de14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35de14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35de18: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x35de18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x35de1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35de20: 0x3c038fff  lui         $v1, 0x8FFF
    ctx->pc = 0x35de20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36863 << 16));
    // 0x35de24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35de24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35de28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x35de28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35de2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35de30: 0x3463b010  ori         $v1, $v1, 0xB010
    ctx->pc = 0x35de30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45072);
    // 0x35de34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35de34u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 4)); // MMIO: 0x1000b010
    // 0x35de38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x35de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35de3c: 0x32280  sll         $a0, $v1, 10
    ctx->pc = 0x35de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x35de40: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35de44: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x35de44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x35de48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35de48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35de4c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x35de4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x35de50: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35de50u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x35de54: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x35de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35de58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35de5c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x35de5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x35de60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35de60u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x35de64: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35de64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35de68: 0x3e00008  jr          $ra
    ctx->pc = 0x35DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DE70u;
}
