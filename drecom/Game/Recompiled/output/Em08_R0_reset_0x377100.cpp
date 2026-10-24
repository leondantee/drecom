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

// Function: Em08_R0_reset
// Address: 0x377100 - 0x377150
void Em08_R0_reset_0x377100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R0_reset_0x377100");
#endif

    switch (ctx->pc) {
        case 0x377100u: goto label_377100;
        case 0x377104u: goto label_377104;
        case 0x377108u: goto label_377108;
        case 0x37710cu: goto label_37710c;
        case 0x377110u: goto label_377110;
        case 0x377114u: goto label_377114;
        case 0x377118u: goto label_377118;
        case 0x37711cu: goto label_37711c;
        case 0x377120u: goto label_377120;
        case 0x377124u: goto label_377124;
        case 0x377128u: goto label_377128;
        case 0x37712cu: goto label_37712c;
        case 0x377130u: goto label_377130;
        case 0x377134u: goto label_377134;
        case 0x377138u: goto label_377138;
        case 0x37713cu: goto label_37713c;
        case 0x377140u: goto label_377140;
        case 0x377144u: goto label_377144;
        case 0x377148u: goto label_377148;
        case 0x37714cu: goto label_37714c;
        default: break;
    }

    ctx->pc = 0x377100u;

label_377100:
    // 0x377100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_377104:
    // 0x377104: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x377104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_377108:
    // 0x377108: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x377108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37710c:
    // 0x37710c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_377110:
    // 0x377110: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x377110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_377114:
    // 0x377114: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x377114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
label_377118:
    // 0x377118: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x377118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37711c:
    // 0x37711c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_377120:
    // 0x377120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x377120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_377124:
    // 0x377124: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x377124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_377128:
    // 0x377128: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x377128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37712c:
    // 0x37712c: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x37712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
label_377130:
    // 0x377130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_377134:
    // 0x377134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x377134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_377138:
    // 0x377138: 0x40f809  jalr        $v0
label_37713c:
    if (ctx->pc == 0x37713Cu) {
        ctx->pc = 0x377140u;
        goto label_377140;
    }
    ctx->pc = 0x377138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377140u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377138u, 0x377140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377140u;
label_377140:
    // 0x377140: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x377140u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377144:
    // 0x377144: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x377144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_377148:
    // 0x377148: 0x3e00008  jr          $ra
label_37714c:
    if (ctx->pc == 0x37714Cu) {
        ctx->pc = 0x377150u;
        goto label_fallthrough_0x377148;
    }
    ctx->pc = 0x377148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x377148:
    ctx->pc = 0x377150u;
}
