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

// Function: Set_em_meisai
// Address: 0x175000 - 0x175094
void Set_em_meisai_0x175000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_em_meisai_0x175000");
#endif

    switch (ctx->pc) {
        case 0x175054u: goto label_175054;
        case 0x175064u: goto label_175064;
        case 0x175074u: goto label_175074;
        case 0x175084u: goto label_175084;
        default: break;
    }

    ctx->pc = 0x175000u;

    // 0x175000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175004: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x175004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x175008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x175008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17500c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x17500cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x175010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175014: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x175014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x175018: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x175018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x17501c: 0x304200f9  andi        $v0, $v0, 0xF9
    ctx->pc = 0x17501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)249);
    // 0x175020: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x175020u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x175024: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175028: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x17502c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x17502cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x175030: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x175030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x175034: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x175034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x175038: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17503c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175040: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x175040u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x175044: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175048: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17504c: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x17504Cu;
    SET_GPR_U32(ctx, 31, 0x175054u);
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x17504Cu, 0x175054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175054u;
label_175054:
    // 0x175054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175058: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x175058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x17505c: 0xc0960d0  jal         func_258340
    ctx->pc = 0x17505Cu;
    SET_GPR_U32(ctx, 31, 0x175064u);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x17505Cu, 0x175064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175064u;
label_175064:
    // 0x175064: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175068: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x175068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17506c: 0xc096268  jal         func_2589A0
    ctx->pc = 0x17506Cu;
    SET_GPR_U32(ctx, 31, 0x175074u);
    ctx->pc = 0x2589A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589A0u, 0x17506Cu, 0x175074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175074u;
label_175074:
    // 0x175074: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175078: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x175078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17507c: 0xc096290  jal         func_258A40
    ctx->pc = 0x17507Cu;
    SET_GPR_U32(ctx, 31, 0x175084u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x17507Cu, 0x175084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175084u;
label_175084:
    // 0x175084: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x175084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x175088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17508c: 0x3e00008  jr          $ra
    ctx->pc = 0x17508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17508Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175094u;
}
