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

// Function: Plw01_move
// Address: 0x1b50f0 - 0x1b5170
void Plw01_move_0x1b50f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move_0x1b50f0");
#endif

    switch (ctx->pc) {
        case 0x1b50f0u: goto label_1b50f0;
        case 0x1b50f4u: goto label_1b50f4;
        case 0x1b50f8u: goto label_1b50f8;
        case 0x1b50fcu: goto label_1b50fc;
        case 0x1b5100u: goto label_1b5100;
        case 0x1b5104u: goto label_1b5104;
        case 0x1b5108u: goto label_1b5108;
        case 0x1b510cu: goto label_1b510c;
        case 0x1b5110u: goto label_1b5110;
        case 0x1b5114u: goto label_1b5114;
        case 0x1b5118u: goto label_1b5118;
        case 0x1b511cu: goto label_1b511c;
        case 0x1b5120u: goto label_1b5120;
        case 0x1b5124u: goto label_1b5124;
        case 0x1b5128u: goto label_1b5128;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b5130u: goto label_1b5130;
        case 0x1b5134u: goto label_1b5134;
        case 0x1b5138u: goto label_1b5138;
        case 0x1b513cu: goto label_1b513c;
        case 0x1b5140u: goto label_1b5140;
        case 0x1b5144u: goto label_1b5144;
        case 0x1b5148u: goto label_1b5148;
        case 0x1b514cu: goto label_1b514c;
        case 0x1b5150u: goto label_1b5150;
        case 0x1b5154u: goto label_1b5154;
        case 0x1b5158u: goto label_1b5158;
        case 0x1b515cu: goto label_1b515c;
        case 0x1b5160u: goto label_1b5160;
        case 0x1b5164u: goto label_1b5164;
        case 0x1b5168u: goto label_1b5168;
        case 0x1b516cu: goto label_1b516c;
        default: break;
    }

    ctx->pc = 0x1b50f0u;

label_1b50f0:
    // 0x1b50f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b50f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b50f4:
    // 0x1b50f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b50f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1b50f8:
    // 0x1b50f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b50f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b50fc:
    // 0x1b50fc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1b5100:
    // 0x1b5100: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1b5104:
    // 0x1b5104: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b5104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1b5108:
    // 0x1b5108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b510c:
    // 0x1b510c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1b510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1b5110:
    // 0x1b5110: 0x946202d0  lhu         $v0, 0x2D0($v1)
    ctx->pc = 0x1b5110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 720)));
label_1b5114:
    // 0x1b5114: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1b5114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1b5118:
    // 0x1b5118: 0xa46202d0  sh          $v0, 0x2D0($v1)
    ctx->pc = 0x1b5118u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 720), (uint16_t)GPR_U32(ctx, 2));
label_1b511c:
    // 0x1b511c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5120:
    // 0x1b5120: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_1b5124:
    // 0x1b5124: 0x94620460  lhu         $v0, 0x460($v1)
    ctx->pc = 0x1b5124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1120)));
label_1b5128:
    // 0x1b5128: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1b5128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_1b512c:
    // 0x1b512c: 0xa4620460  sh          $v0, 0x460($v1)
    ctx->pc = 0x1b512cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1120), (uint16_t)GPR_U32(ctx, 2));
label_1b5130:
    // 0x1b5130: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5134:
    // 0x1b5134: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5138:
    // 0x1b5138: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b5138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1b513c:
    // 0x1b513c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5140:
    // 0x1b5140: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b5140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b5144:
    // 0x1b5144: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b5144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b5148:
    // 0x1b5148: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x1b5148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
label_1b514c:
    // 0x1b514c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5150:
    // 0x1b5150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b5150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5154:
    // 0x1b5154: 0x40f809  jalr        $v0
label_1b5158:
    if (ctx->pc == 0x1B5158u) {
        ctx->pc = 0x1B515Cu;
        goto label_1b515c;
    }
    ctx->pc = 0x1B5154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B515Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5154u, 0x1B515Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B515Cu;
label_1b515c:
    // 0x1b515c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b515cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5160:
    // 0x1b5160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5164:
    // 0x1b5164: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5168:
    // 0x1b5168: 0x3e00008  jr          $ra
label_1b516c:
    if (ctx->pc == 0x1B516Cu) {
        ctx->pc = 0x1B5170u;
        goto label_fallthrough_0x1b5168;
    }
    ctx->pc = 0x1B5168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5168:
    ctx->pc = 0x1B5170u;
}
