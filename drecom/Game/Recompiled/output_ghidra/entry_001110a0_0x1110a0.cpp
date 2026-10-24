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

// Function: entry_001110a0
// Address: 0x1110a0 - 0x1110f0
void entry_001110a0_0x1110a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001110a0_0x1110a0");
#endif

    switch (ctx->pc) {
        case 0x1110ccu: goto label_1110cc;
        default: break;
    }

    ctx->pc = 0x1110a0u;

    // 0x1110a0: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x1110a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x1110a4: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x1110a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x1110a8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1110a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1110ac: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1110ACu;
    {
        const bool branch_taken_0x1110ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110ACu;
        // 0x1110b0: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110ac) {
            ctx->pc = 0x1111CCu;
            return;
        }
    }
    ctx->pc = 0x1110B4u;
    // 0x1110b4: 0x1bc00023  blez        $fp, . + 4 + (0x23 << 2)
    ctx->pc = 0x1110B4u;
    {
        const bool branch_taken_0x1110b4 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x1110b4) {
            ctx->pc = 0x111144u;
            return;
        }
    }
    ctx->pc = 0x1110BCu;
    // 0x1110bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110c0: 0xdc25d240  ld          $a1, -0x2DC0($at)
    ctx->pc = 0x1110c0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD240u));
    // 0x1110c4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1110C4u;
    SET_GPR_U32(ctx, 31, 0x1110CCu);
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1110C4u, 0x1110CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110CCu;
label_1110cc:
    // 0x1110cc: 0x3c033ff9  lui         $v1, 0x3FF9
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16377 << 16));
    // 0x1110d0: 0x346321fb  ori         $v1, $v1, 0x21FB
    ctx->pc = 0x1110d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8699);
    // 0x1110d4: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1110D4u;
    {
        const bool branch_taken_0x1110d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110D4u;
        // 0x1110d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d4) {
            ctx->pc = 0x1110F0u;
            return;
        }
    }
    ctx->pc = 0x1110DCu;
    // 0x1110dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1110e0: 0xdc30d248  ld          $s0, -0x2DB8($at)
    ctx->pc = 0x1110e0u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x3AD248u));
    // 0x1110e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1110e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1110E8u;
    {
        const bool branch_taken_0x1110e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110E8u;
        // 0x1110ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110e8) {
            ctx->pc = 0x111114u;
            return;
        }
    }
    ctx->pc = 0x1110F0u;
}
