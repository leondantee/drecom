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

// Function: entry_00181438
// Address: 0x181438 - 0x1814fc
void entry_00181438_0x181438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181438_0x181438");
#endif

    switch (ctx->pc) {
        case 0x1814b0u: goto label_1814b0;
        default: break;
    }

    ctx->pc = 0x181438u;

    // 0x181438: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18143c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x18143cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181440: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181444: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181444u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181448: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18144c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181450: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x181454: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181458: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18145c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181460: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x181460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x181464: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x181464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x181468: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x181468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18146c: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18146Cu;
    {
        const bool branch_taken_0x18146c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18146c) {
            ctx->pc = 0x1814FCu;
            return;
        }
    }
    ctx->pc = 0x181474u;
    // 0x181474: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181478: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x181478u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x18147c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x18147cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181480: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181484: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x181484u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181488: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x181488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18148c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18148cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181490: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x181494: 0x24e31380  addiu       $v1, $a3, 0x1380
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x181498: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18149c: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x18149cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1814a0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1814a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1814a4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1814a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1814a8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x1814A8u;
    SET_GPR_U32(ctx, 31, 0x1814B0u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x1814A8u, 0x1814B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1814B0u;
label_1814b0:
    // 0x1814b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1814b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1814b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1814b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1814b8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1814bc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1814c0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1814c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1814c4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1814c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1814c8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1814c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1814cc: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1814ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1814d0: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x1814d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x1814d4: 0x24e61380  addiu       $a2, $a3, 0x1380
    ctx->pc = 0x1814d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4992));
    // 0x1814d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1814d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1814dc: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x1814dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1814e0: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1814e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1814e4: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x1814e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1814e8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x1814e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x1814ec: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1814ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1814f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1814f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1814f4: 0x0  nop
    ctx->pc = 0x1814f4u;
    // NOP
    // 0x1814f8: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x1814f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    ctx->pc = 0x1814fcu;
}
