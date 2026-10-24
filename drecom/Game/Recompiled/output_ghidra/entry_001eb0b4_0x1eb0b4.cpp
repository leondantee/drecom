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

// Function: entry_001eb0b4
// Address: 0x1eb0b4 - 0x1eb160
void entry_001eb0b4_0x1eb0b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb0b4_0x1eb0b4");
#endif

    switch (ctx->pc) {
        case 0x1eb0e0u: goto label_1eb0e0;
        case 0x1eb0fcu: goto label_1eb0fc;
        case 0x1eb110u: goto label_1eb110;
        case 0x1eb120u: goto label_1eb120;
        default: break;
    }

    ctx->pc = 0x1eb0b4u;

    // 0x1eb0b4: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0b8: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x1eb0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1eb0bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1eb0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1eb0c0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1eb0c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EB0C4u;
    {
        const bool branch_taken_0x1eb0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0c4) {
            ctx->pc = 0x1EB160u;
            return;
        }
    }
    ctx->pc = 0x1EB0CCu;
    // 0x1eb0cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1eb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1eb0d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eb0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb0d4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0d8: 0xc05d400  jal         func_175000
    ctx->pc = 0x1EB0D8u;
    SET_GPR_U32(ctx, 31, 0x1EB0E0u);
    ctx->pc = 0x175000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175000u, 0x1EB0D8u, 0x1EB0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0E0u;
label_1eb0e0:
    // 0x1eb0e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb0e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0e8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1eb0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eb0ec: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb0f0: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x1eb0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1eb0f4: 0xc0960d0  jal         func_258340
    ctx->pc = 0x1EB0F4u;
    SET_GPR_U32(ctx, 31, 0x1EB0FCu);
    ctx->pc = 0x258340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258340u, 0x1EB0F4u, 0x1EB0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0FCu;
label_1eb0fc:
    // 0x1eb0fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb100: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1eb100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb104: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1eb104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eb108: 0xc096188  jal         func_258620
    ctx->pc = 0x1EB108u;
    SET_GPR_U32(ctx, 31, 0x1EB110u);
    ctx->pc = 0x258620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258620u, 0x1EB108u, 0x1EB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB110u;
label_1eb110:
    // 0x1eb110: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb114: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eb118: 0xc09620c  jal         func_258830
    ctx->pc = 0x1EB118u;
    SET_GPR_U32(ctx, 31, 0x1EB120u);
    ctx->pc = 0x258830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258830u, 0x1EB118u, 0x1EB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB120u;
label_1eb120:
    // 0x1eb120: 0x8fb50138  lw          $s5, 0x138($sp)
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb124: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x1eb128: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1eb128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1eb12c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1eb12cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eb130: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eb130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb134: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eb134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb138: 0x8ca40058  lw          $a0, 0x58($a1)
    ctx->pc = 0x1eb138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eb13c: 0x24830510  addiu       $v1, $a0, 0x510
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x1eb140: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1eb140u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eb144: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eb144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb148: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb14c: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1eb150: 0x24b005a0  addiu       $s0, $a1, 0x5A0
    ctx->pc = 0x1eb150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
    // 0x1eb154: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eb154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb158: 0x100002b1  b           . + 4 + (0x2B1 << 2)
    ctx->pc = 0x1EB158u;
    {
        const bool branch_taken_0x1eb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb158) {
            ctx->pc = 0x1EBC20u;
            return;
        }
    }
    ctx->pc = 0x1EB160u;
}
