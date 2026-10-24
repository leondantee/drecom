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

// Function: entry_001cab0c
// Address: 0x1cab0c - 0x1caba8
void entry_001cab0c_0x1cab0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cab0c_0x1cab0c");
#endif

    switch (ctx->pc) {
        case 0x1cab18u: goto label_1cab18;
        case 0x1cab28u: goto label_1cab28;
        case 0x1cab38u: goto label_1cab38;
        case 0x1cab44u: goto label_1cab44;
        case 0x1cab58u: goto label_1cab58;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab70u: goto label_1cab70;
        case 0x1cab90u: goto label_1cab90;
        default: break;
    }

    ctx->pc = 0x1cab0cu;

    // 0x1cab0c: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1cab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1cab10: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x1CAB10u;
    SET_GPR_U32(ctx, 31, 0x1CAB18u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x1CAB10u, 0x1CAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB18u;
label_1cab18:
    // 0x1cab18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cab1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CAB20u;
    SET_GPR_U32(ctx, 31, 0x1CAB28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CAB20u, 0x1CAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB28u;
label_1cab28:
    // 0x1cab28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab2c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1cab30: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CAB30u;
    SET_GPR_U32(ctx, 31, 0x1CAB38u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CAB30u, 0x1CAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB38u;
label_1cab38:
    // 0x1cab38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CAB3Cu, 0x1CAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB44u;
label_1cab44:
    // 0x1cab44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cab44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cab48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cab4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab50: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CAB50u;
    SET_GPR_U32(ctx, 31, 0x1CAB58u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CAB50u, 0x1CAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB58u;
label_1cab58:
    // 0x1cab58: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cab58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab5c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB64u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CAB5Cu, 0x1CAB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB64u;
label_1cab64:
    // 0x1cab64: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1cab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1cab68: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x1CAB68u;
    SET_GPR_U32(ctx, 31, 0x1CAB70u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x1CAB68u, 0x1CAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB70u;
label_1cab70:
    // 0x1cab70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab74: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1cab74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1cab78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAB78u;
    {
        const bool branch_taken_0x1cab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cab78) {
            ctx->pc = 0x1CABA8u;
            return;
        }
    }
    ctx->pc = 0x1CAB80u;
    // 0x1cab80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab84: 0x8c441b70  lw          $a0, 0x1B70($v0)
    ctx->pc = 0x1cab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x1cab88: 0xc09b960  jal         func_26E580
    ctx->pc = 0x1CAB88u;
    SET_GPR_U32(ctx, 31, 0x1CAB90u);
    ctx->pc = 0x26E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E580u, 0x1CAB88u, 0x1CAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB90u;
label_1cab90:
    // 0x1cab90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab94: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1cab98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cab9c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1cab9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caba0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CABA0u;
    {
        const bool branch_taken_0x1caba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caba0) {
            ctx->pc = 0x1CAC28u;
            return;
        }
    }
    ctx->pc = 0x1CABA8u;
}
