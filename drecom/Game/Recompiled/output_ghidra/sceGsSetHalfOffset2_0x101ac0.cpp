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

// Function: sceGsSetHalfOffset2
// Address: 0x101ac0 - 0x101b48
void sceGsSetHalfOffset2_0x101ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetHalfOffset2_0x101ac0");
#endif

    ctx->pc = 0x101ac0u;

    // 0x101ac0: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x101ac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x101ac4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x101ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x101ac8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x101ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x101acc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x101accu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x101ad0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x101ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x101ad4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x101ad4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x101ad8: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x101ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x101adc: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x101adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x101ae0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x101ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x101ae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x101ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x101ae8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x101ae8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x101aec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x101aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x101af0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x101af0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x101af4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x101af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x101af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101afc: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x101afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x101b00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x101b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x101b04: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x101b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x101b08: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x101b08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x101b0c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x101b0cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x101b10: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x101b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x101b14: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x101b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x101b18: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x101b18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x101b1c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x101b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x101b20: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x101b20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x101b24: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x101B24u;
    {
        const bool branch_taken_0x101b24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B24u;
        // 0x101b28: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b24) {
            ctx->pc = 0x101B38u;
            goto label_101b38;
        }
    }
    ctx->pc = 0x101B2Cu;
    // 0x101b2c: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x101b2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x101b30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x101B30u;
    {
        const bool branch_taken_0x101b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B30u;
        // 0x101b34: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b30) {
            ctx->pc = 0x101B3Cu;
            goto label_101b3c;
        }
    }
    ctx->pc = 0x101B38u;
label_101b38:
    // 0x101b38: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x101b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_101b3c:
    // 0x101b3c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x101b40: 0x3e00008  jr          $ra
    ctx->pc = 0x101B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B40u;
        // 0x101b44: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101B48u;
}
