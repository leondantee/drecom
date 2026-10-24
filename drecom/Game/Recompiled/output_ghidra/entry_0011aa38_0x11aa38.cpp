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

// Function: entry_0011aa38
// Address: 0x11aa38 - 0x11aa78
void entry_0011aa38_0x11aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aa38_0x11aa38");
#endif

    switch (ctx->pc) {
        case 0x11aa58u: goto label_11aa58;
        default: break;
    }

    ctx->pc = 0x11aa38u;

    // 0x11aa38: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x11aa38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11aa3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11aa3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa40: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x11aa44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11aa44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa48: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x11aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x11aa4c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11aa50: 0xc0472cc  jal         func_11CB30
    ctx->pc = 0x11AA50u;
    SET_GPR_U32(ctx, 31, 0x11AA58u);
    ctx->pc = 0x11AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA50u;
    // 0x11aa54: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CB30u, 0x11AA50u, 0x11AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA58u;
label_11aa58:
    // 0x11aa58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11aa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11aa5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11aa60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11aa60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11aa64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11aa64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11aa68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11aa68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aa6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa70: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA70u;
        // 0x11aa74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AA78u;
}
