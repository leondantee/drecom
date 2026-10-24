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

// Function: entry_0020ca00
// Address: 0x20ca00 - 0x20caa8
void entry_0020ca00_0x20ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ca00_0x20ca00");
#endif

    switch (ctx->pc) {
        case 0x20ca10u: goto label_20ca10;
        default: break;
    }

    ctx->pc = 0x20ca00u;

    // 0x20ca00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ca04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ca04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ca08: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20CA08u;
    SET_GPR_U32(ctx, 31, 0x20CA10u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20CA08u, 0x20CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA10u;
label_20ca10:
    // 0x20ca10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ca14: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20ca14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20ca18: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x20CA18u;
    {
        const bool branch_taken_0x20ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca18) {
            ctx->pc = 0x20CBB0u;
            return;
        }
    }
    ctx->pc = 0x20CA20u;
    // 0x20ca20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ca24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20ca24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20ca28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20ca2c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20ca2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20ca30: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20CA30u;
    {
        const bool branch_taken_0x20ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca30) {
            ctx->pc = 0x20CAA8u;
            return;
        }
    }
    ctx->pc = 0x20CA38u;
    // 0x20ca38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ca38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca3c: 0x0  nop
    ctx->pc = 0x20ca3cu;
    // NOP
    // 0x20ca40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x20ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20ca44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ca44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca48: 0x0  nop
    ctx->pc = 0x20ca48u;
    // NOP
    // 0x20ca4c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x20ca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x20ca50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ca50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca54: 0x0  nop
    ctx->pc = 0x20ca54u;
    // NOP
    // 0x20ca58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x20ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x20ca5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ca60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ca60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ca64: 0x0  nop
    ctx->pc = 0x20ca64u;
    // NOP
    // 0x20ca68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20ca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x20ca6c: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x20ca6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x20ca70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x20ca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x20ca74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20ca74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20ca78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x20ca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x20ca7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20ca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20ca80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20ca80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20ca84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20ca84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20ca88: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x20ca88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x20ca8c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20ca90: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x20ca90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20ca94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20ca94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ca98: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x20ca98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x20ca9c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20ca9cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20caa0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x20CAA0u;
    SET_GPR_U32(ctx, 31, 0x20CAA8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x20CAA0u, 0x20CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAA8u;
}
