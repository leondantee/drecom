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

// Function: __sseek
// Address: 0x11aa78 - 0x11aae0
void ps2___sseek_0x11aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sseek_0x11aa78");
#endif

    switch (ctx->pc) {
        case 0x11aaa0u: goto label_11aaa0;
        default: break;
    }

    ctx->pc = 0x11aa78u;

    // 0x11aa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11aa7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11aa7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aa84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x11aa84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11aa8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11aa8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11aa90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa94: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x11aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11aa98: 0xc045f58  jal         func_117D60
    ctx->pc = 0x11AA98u;
    SET_GPR_U32(ctx, 31, 0x11AAA0u);
    ctx->pc = 0x11AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA98u;
    // 0x11aa9c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D60u, 0x11AA98u, 0x11AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAA0u;
label_11aaa0:
    // 0x11aaa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11aaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11aaa8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AAA8u;
    {
        const bool branch_taken_0x11aaa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAA8u;
        // 0x11aaac: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaa8) {
            ctx->pc = 0x11AAB8u;
            goto label_11aab8;
        }
    }
    ctx->pc = 0x11AAB0u;
    // 0x11aab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAB0u;
    {
        const bool branch_taken_0x11aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAB0u;
        // 0x11aab4: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aab0) {
            ctx->pc = 0x11AAC8u;
            goto label_11aac8;
        }
    }
    ctx->pc = 0x11AAB8u;
label_11aab8:
    // 0x11aab8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x11aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11aabc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11aabcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11aac0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x11aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x11aac4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x11aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_11aac8:
    // 0x11aac8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x11aac8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x11aacc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11aaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aad0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11aad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aad8: 0x3e00008  jr          $ra
    ctx->pc = 0x11AAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAD8u;
        // 0x11aadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AAE0u;
}
