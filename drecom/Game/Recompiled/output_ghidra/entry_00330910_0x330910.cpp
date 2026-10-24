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

// Function: entry_00330910
// Address: 0x330910 - 0x330998
void entry_00330910_0x330910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330910_0x330910");
#endif

    switch (ctx->pc) {
        case 0x330954u: goto label_330954;
        case 0x33097cu: goto label_33097c;
        default: break;
    }

    ctx->pc = 0x330910u;

    // 0x330910: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x330910u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x330914: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x330914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
    // 0x330918: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x330918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x33091c: 0x826365b0  lb          $v1, 0x65B0($s3)
    ctx->pc = 0x33091cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
    // 0x330920: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x330920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x330924: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x330924u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x330928: 0x144404c7  bne         $v0, $a0, . + 4 + (0x4C7 << 2)
    ctx->pc = 0x330928u;
    {
        const bool branch_taken_0x330928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x330928) {
            ctx->pc = 0x331C48u;
            return;
        }
    }
    ctx->pc = 0x330930u;
    // 0x330930: 0x826565ae  lb          $a1, 0x65AE($s3)
    ctx->pc = 0x330930u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x330934: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x330934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x330938: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x330938u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x33093c: 0x92c40008  lbu         $a0, 0x8($s6)
    ctx->pc = 0x33093cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x330940: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x330940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x330944: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x330944u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330948: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x330948u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33094c: 0xc0cc938  jal         func_3324E0
    ctx->pc = 0x33094Cu;
    SET_GPR_U32(ctx, 31, 0x330954u);
    ctx->pc = 0x3324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324E0u, 0x33094Cu, 0x330954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330954u;
label_330954:
    // 0x330954: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x330954u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330958: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x330958u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x33095c: 0x826265ae  lb          $v0, 0x65AE($s3)
    ctx->pc = 0x33095cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x330960: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x330960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x330964: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x330964u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x330968: 0x92c30009  lbu         $v1, 0x9($s6)
    ctx->pc = 0x330968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 9)));
    // 0x33096c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x33096cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x330970: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x330970u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x330974: 0xc0cc938  jal         func_3324E0
    ctx->pc = 0x330974u;
    SET_GPR_U32(ctx, 31, 0x33097Cu);
    ctx->pc = 0x3324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324E0u, 0x330974u, 0x33097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33097Cu;
label_33097c:
    // 0x33097c: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x33097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x330980: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x330980u;
    {
        const bool branch_taken_0x330980 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x330980) {
            ctx->pc = 0x330998u;
            return;
        }
    }
    ctx->pc = 0x330988u;
    // 0x330988: 0x8fa7028c  lw          $a3, 0x28C($sp)
    ctx->pc = 0x330988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x33098c: 0x10e004ae  beqz        $a3, . + 4 + (0x4AE << 2)
    ctx->pc = 0x33098Cu;
    {
        const bool branch_taken_0x33098c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x33098c) {
            ctx->pc = 0x331C48u;
            return;
        }
    }
    ctx->pc = 0x330994u;
    // 0x330994: 0x0  nop
    ctx->pc = 0x330994u;
    // NOP
    ctx->pc = 0x330998u;
}
