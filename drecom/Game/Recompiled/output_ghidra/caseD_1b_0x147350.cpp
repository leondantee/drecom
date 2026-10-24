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

// Function: caseD_1b
// Address: 0x147350 - 0x1473dc
void caseD_1b_0x147350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x147350");
#endif

    switch (ctx->pc) {
        case 0x147364u: goto label_147364;
        case 0x147370u: goto label_147370;
        case 0x14738cu: goto label_14738c;
        case 0x14739cu: goto label_14739c;
        case 0x1473c0u: goto label_1473c0;
        default: break;
    }

    ctx->pc = 0x147350u;

    // 0x147350: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147354: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x147354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x147358: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147358u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14735c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14735Cu;
    SET_GPR_U32(ctx, 31, 0x147364u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14735Cu, 0x147364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147364u;
label_147364:
    // 0x147364: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147368: 0xc05cd10  jal         func_173440
    ctx->pc = 0x147368u;
    SET_GPR_U32(ctx, 31, 0x147370u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x147368u, 0x147370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147370u;
label_147370:
    // 0x147370: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147370u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x147378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14737c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14737cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147380: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x147380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147384: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x147384u;
    SET_GPR_U32(ctx, 31, 0x14738Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x147384u, 0x14738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14738Cu;
label_14738c:
    // 0x14738c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14738cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147390: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147394: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147394u;
    SET_GPR_U32(ctx, 31, 0x14739Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147394u, 0x14739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14739Cu;
label_14739c:
    // 0x14739c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14739cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1473a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1473a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1473a4: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x1473a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1473a8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1473a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1473ac: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1473acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1473b0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1473B0u;
    {
        const bool branch_taken_0x1473b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473b0) {
            ctx->pc = 0x1473DCu;
            return;
        }
    }
    ctx->pc = 0x1473B8u;
    // 0x1473b8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1473B8u;
    SET_GPR_U32(ctx, 31, 0x1473C0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1473B8u, 0x1473C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1473C0u;
label_1473c0:
    // 0x1473c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1473c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1473c4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1473C4u;
    {
        const bool branch_taken_0x1473c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473c4) {
            ctx->pc = 0x1473DCu;
            return;
        }
    }
    ctx->pc = 0x1473CCu;
    // 0x1473cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1473ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1473d0: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1473d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1473d4: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1473D4u;
    {
        const bool branch_taken_0x1473d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473d4) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x1473DCu;
}
