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

// Function: Em20_R0_move
// Address: 0x359910 - 0x359984
void Em20_R0_move_0x359910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em20_R0_move_0x359910");
#endif

    switch (ctx->pc) {
        case 0x359910u: goto label_359910;
        case 0x359914u: goto label_359914;
        case 0x359918u: goto label_359918;
        case 0x35991cu: goto label_35991c;
        case 0x359920u: goto label_359920;
        case 0x359924u: goto label_359924;
        case 0x359928u: goto label_359928;
        case 0x35992cu: goto label_35992c;
        case 0x359930u: goto label_359930;
        case 0x359934u: goto label_359934;
        case 0x359938u: goto label_359938;
        case 0x35993cu: goto label_35993c;
        case 0x359940u: goto label_359940;
        case 0x359944u: goto label_359944;
        case 0x359948u: goto label_359948;
        case 0x35994cu: goto label_35994c;
        case 0x359950u: goto label_359950;
        case 0x359954u: goto label_359954;
        case 0x359958u: goto label_359958;
        case 0x35995cu: goto label_35995c;
        case 0x359960u: goto label_359960;
        case 0x359964u: goto label_359964;
        case 0x359968u: goto label_359968;
        case 0x35996cu: goto label_35996c;
        case 0x359970u: goto label_359970;
        case 0x359974u: goto label_359974;
        case 0x359978u: goto label_359978;
        case 0x35997cu: goto label_35997c;
        case 0x359980u: goto label_359980;
        default: break;
    }

    ctx->pc = 0x359910u;

label_359910:
    // 0x359910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359914:
    // 0x359914: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x359914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_359918:
    // 0x359918: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_35991c:
    // 0x35991c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359920:
    // 0x359920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359924:
    // 0x359924: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x359924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_359928:
    // 0x359928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35992c:
    // 0x35992c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35992cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_359930:
    // 0x359930: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x359930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359934:
    // 0x359934: 0x2442a838  addiu       $v0, $v0, -0x57C8
    ctx->pc = 0x359934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944824));
label_359938:
    // 0x359938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35993c:
    // 0x35993c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359940:
    // 0x359940: 0x40f809  jalr        $v0
label_359944:
    if (ctx->pc == 0x359944u) {
        ctx->pc = 0x359948u;
        goto label_359948;
    }
    ctx->pc = 0x359940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359948u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359940u, 0x359948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359948u;
label_359948:
    // 0x359948: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_35994c:
    // 0x35994c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_359950:
    // 0x359950: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x359950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_359954:
    // 0x359954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_359958:
    // 0x359958: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x359958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35995c:
    // 0x35995c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_359960:
    // 0x359960: 0x2442a840  addiu       $v0, $v0, -0x57C0
    ctx->pc = 0x359960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944832));
label_359964:
    // 0x359964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359968:
    // 0x359968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x359968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35996c:
    // 0x35996c: 0x40f809  jalr        $v0
label_359970:
    if (ctx->pc == 0x359970u) {
        ctx->pc = 0x359974u;
        goto label_359974;
    }
    ctx->pc = 0x35996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359974u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35996Cu, 0x359974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359974u;
label_359974:
    // 0x359974: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x359974u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359978:
    // 0x359978: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x359978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35997c:
    // 0x35997c: 0x3e00008  jr          $ra
label_359980:
    if (ctx->pc == 0x359980u) {
        ctx->pc = 0x359984u;
        goto label_fallthrough_0x35997c;
    }
    ctx->pc = 0x35997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35997c:
    ctx->pc = 0x359984u;
}
