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

// Function: Md_parts_env_al_set0_all
// Address: 0x258620 - 0x2586b8
void Md_parts_env_al_set0_all_0x258620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_parts_env_al_set0_all_0x258620");
#endif

    switch (ctx->pc) {
        case 0x25864cu: goto label_25864c;
        case 0x258658u: goto label_258658;
        case 0x25866cu: goto label_25866c;
        default: break;
    }

    ctx->pc = 0x258620u;

    // 0x258620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258624: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x258624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x258628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x258628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25862c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25862cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x258630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258634: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x258634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x258638: 0xa7a50048  sh          $a1, 0x48($sp)
    ctx->pc = 0x258638u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 5));
    // 0x25863c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25863cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258640: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x258640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258644: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x258644u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x258648: 0x0  nop
    ctx->pc = 0x258648u;
    // NOP
label_25864c:
    // 0x25864c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x25864cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x258650: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258650u;
    {
        const bool branch_taken_0x258650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258650) {
            ctx->pc = 0x258670u;
            goto label_258670;
        }
    }
    ctx->pc = 0x258658u;
label_258658:
    // 0x258658: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x258658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25865c: 0x97a50048  lhu         $a1, 0x48($sp)
    ctx->pc = 0x25865cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x258660: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258664: 0xc0961d0  jal         func_258740
    ctx->pc = 0x258664u;
    SET_GPR_U32(ctx, 31, 0x25866Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x258664u, 0x25866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25866Cu;
label_25866c:
    // 0x25866c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25866cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258670:
    // 0x258670: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x258670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x258674: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x258674u;
    {
        const bool branch_taken_0x258674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258674) {
            ctx->pc = 0x258658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258658;
        }
    }
    ctx->pc = 0x25867Cu;
    // 0x25867c: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x25867cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x258680: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x258680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x258684: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x258684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258688: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x25868c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25868cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x258690: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x258690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258694: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x258694u;
    {
        const bool branch_taken_0x258694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258694) {
            ctx->pc = 0x25864Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25864c;
        }
    }
    ctx->pc = 0x25869Cu;
    // 0x25869c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x25869cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2586a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2586a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2586a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2586a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2586a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2586a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2586ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2586acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2586b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2586B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2586B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2586B8u;
}
