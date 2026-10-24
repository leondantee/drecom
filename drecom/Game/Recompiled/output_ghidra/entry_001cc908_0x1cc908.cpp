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

// Function: entry_001cc908
// Address: 0x1cc908 - 0x1cc98c
void entry_001cc908_0x1cc908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc908_0x1cc908");
#endif

    switch (ctx->pc) {
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc974u: goto label_1cc974;
        default: break;
    }

    ctx->pc = 0x1cc908u;

    // 0x1cc908: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc90c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc90cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc910: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CC910u;
    SET_GPR_U32(ctx, 31, 0x1CC918u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CC910u, 0x1CC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC918u;
label_1cc918:
    // 0x1cc918: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc91c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CC91Cu;
    SET_GPR_U32(ctx, 31, 0x1CC924u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CC91Cu, 0x1CC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC924u;
label_1cc924:
    // 0x1cc924: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc928: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc92c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cc92cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc930: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc934: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CC934u;
    SET_GPR_U32(ctx, 31, 0x1CC93Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CC934u, 0x1CC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC93Cu;
label_1cc93c:
    // 0x1cc93c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc93cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc940: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CC940u;
    SET_GPR_U32(ctx, 31, 0x1CC948u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CC940u, 0x1CC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC948u;
label_1cc948:
    // 0x1cc948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc94c: 0x84671278  lh          $a3, 0x1278($v1)
    ctx->pc = 0x1cc94cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1cc950: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC950u;
    {
        const bool branch_taken_0x1cc950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc950) {
            ctx->pc = 0x1CC98Cu;
            return;
        }
    }
    ctx->pc = 0x1CC958u;
    // 0x1cc958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc960: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cc964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc96c: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1CC96Cu;
    SET_GPR_U32(ctx, 31, 0x1CC974u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1CC96Cu, 0x1CC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC974u;
label_1cc974:
    // 0x1cc974: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cc974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc978: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x1cc978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cc97c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1cc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cc980: 0xa4a41278  sh          $a0, 0x1278($a1)
    ctx->pc = 0x1cc980u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cc984: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1CC984u;
    {
        const bool branch_taken_0x1cc984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc984) {
            ctx->pc = 0x1CCB5Cu;
            return;
        }
    }
    ctx->pc = 0x1CC98Cu;
}
