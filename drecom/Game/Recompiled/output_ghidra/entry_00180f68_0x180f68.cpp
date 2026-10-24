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

// Function: entry_00180f68
// Address: 0x180f68 - 0x18102c
void entry_00180f68_0x180f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180f68_0x180f68");
#endif

    switch (ctx->pc) {
        case 0x180fe0u: goto label_180fe0;
        default: break;
    }

    ctx->pc = 0x180f68u;

    // 0x180f68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f6c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180f70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180f74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180f74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180f78: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180f7c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180f80: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180f80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180f84: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180f88: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180f8c: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x180f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180f90: 0x8c630158  lw          $v1, 0x158($v1)
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x180f94: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x180f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x180f98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x180f9c: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x180F9Cu;
    {
        const bool branch_taken_0x180f9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x180f9c) {
            ctx->pc = 0x18102Cu;
            return;
        }
    }
    ctx->pc = 0x180FA4u;
    // 0x180fa4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180fa8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180fac: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x180facu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180fb0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x180fb0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x180fb4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x180fb8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x180fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x180fbc: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180fc0: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180fc4: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180fc8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180fcc: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x180fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x180fd0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x180fd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x180fd4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x180fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180fd8: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x180FD8u;
    SET_GPR_U32(ctx, 31, 0x180FE0u);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x180FD8u, 0x180FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FE0u;
label_180fe0:
    // 0x180fe0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180fe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180fe8: 0x8426f138  lh          $a2, -0xEC8($at)
    ctx->pc = 0x180fe8u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x47F138u));
    // 0x180fec: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x180fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x180ff0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180ff0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180ff4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ff8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180ffc: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181000: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x181004: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181008: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x181008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18100c: 0x24670090  addiu       $a3, $v1, 0x90
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x181010: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x181010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x181014: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x181014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x181018: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x181018u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x18101c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x181020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181024: 0x0  nop
    ctx->pc = 0x181024u;
    // NOP
    // 0x181028: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x181028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    ctx->pc = 0x18102cu;
}
