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

// Function: Md_parts_lnk
// Address: 0x2571f0 - 0x25724c
void Md_parts_lnk_0x2571f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_lnk_0x2571f0");
#endif

    switch (ctx->pc) {
        case 0x25720cu: goto label_25720c;
        case 0x25721cu: goto label_25721c;
        default: break;
    }

    ctx->pc = 0x2571f0u;

    // 0x2571f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2571f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2571f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2571f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2571f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2571f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2571fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2571fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x257200: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x257200u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x257204: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x257204u;
    {
        const bool branch_taken_0x257204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257204) {
            ctx->pc = 0x257228u;
            goto label_257228;
        }
    }
    ctx->pc = 0x25720Cu;
label_25720c:
    // 0x25720c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x25720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x257210: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x257210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x257214: 0xc095c94  jal         func_257250
    ctx->pc = 0x257214u;
    SET_GPR_U32(ctx, 31, 0x25721Cu);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x257214u, 0x25721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25721Cu;
label_25721c:
    // 0x25721c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x25721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x257220: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x257220u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257224: 0x0  nop
    ctx->pc = 0x257224u;
    // NOP
label_257228:
    // 0x257228: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x257228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x25722c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x25722cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257230: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x257230u;
    {
        const bool branch_taken_0x257230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257230) {
            ctx->pc = 0x25720Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25720c;
        }
    }
    ctx->pc = 0x257238u;
    // 0x257238: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x257238u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25723c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25723cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257240: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257244: 0x3e00008  jr          $ra
    ctx->pc = 0x257244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25724Cu;
}
