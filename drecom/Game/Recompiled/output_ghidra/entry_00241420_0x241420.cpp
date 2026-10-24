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

// Function: entry_00241420
// Address: 0x241420 - 0x2414d0
void entry_00241420_0x241420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241420_0x241420");
#endif

    switch (ctx->pc) {
        case 0x241478u: goto label_241478;
        case 0x2414c8u: goto label_2414c8;
        default: break;
    }

    ctx->pc = 0x241420u;

    // 0x241420: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241424: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x241424u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x241428: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x241428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24142c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x241430: 0x2442b2f0  addiu       $v0, $v0, -0x4D10
    ctx->pc = 0x241430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947568));
    // 0x241434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241438: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x241438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24143c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x24143cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x241440: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241444: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x241444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241448: 0x8462005e  lh          $v0, 0x5E($v1)
    ctx->pc = 0x241448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x24144c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x241450: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x241450u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x241454: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24145c: 0x8442005e  lh          $v0, 0x5E($v0)
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
    // 0x241460: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x241460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x241468: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x241468u;
    {
        const bool branch_taken_0x241468 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241468) {
            ctx->pc = 0x2414D0u;
            return;
        }
    }
    ctx->pc = 0x241470u;
    // 0x241470: 0xc067694  jal         func_19DA50
    ctx->pc = 0x241470u;
    SET_GPR_U32(ctx, 31, 0x241478u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x241470u, 0x241478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241478u;
label_241478:
    // 0x241478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x241478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24147c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x24147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x241480: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x241484: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x241484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x241488: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x241488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24148c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x241490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x241494: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x241494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x241498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24149c: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x24149cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2414a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2414a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2414a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2414a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2414a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2414ac: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2414acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2414b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2414b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2414b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2414b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2414b8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2414bc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2414bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2414c0: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2414C0u;
    SET_GPR_U32(ctx, 31, 0x2414C8u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2414C0u, 0x2414C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2414C8u;
label_2414c8:
    // 0x2414c8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2414C8u;
    {
        const bool branch_taken_0x2414c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2414c8) {
            ctx->pc = 0x241688u;
            return;
        }
    }
    ctx->pc = 0x2414D0u;
}
