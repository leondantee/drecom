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

// Function: entry_00180c94
// Address: 0x180c94 - 0x180d58
void entry_00180c94_0x180c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180c94_0x180c94");
#endif

    switch (ctx->pc) {
        case 0x180d0cu: goto label_180d0c;
        default: break;
    }

    ctx->pc = 0x180c94u;

    // 0x180c94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180c98: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180c98u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180c9c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x180c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180ca0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x180ca0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x180ca4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x180ca8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x180cac: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180cb0: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180cb4: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180cb8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180cbc: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x180cc0: 0x306607ff  andi        $a2, $v1, 0x7FF
    ctx->pc = 0x180cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x180cc4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x180cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x180cc8: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x180CC8u;
    {
        const bool branch_taken_0x180cc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x180cc8) {
            ctx->pc = 0x180D58u;
            return;
        }
    }
    ctx->pc = 0x180CD0u;
    // 0x180cd0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180cd4: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180cd8: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180cd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180cdc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180cdcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180ce0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x180ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180ce4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180ce8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x180ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180cec: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x180cf0: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x180cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x180cf4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x180cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180cf8: 0x260301a0  addiu       $v1, $s0, 0x1A0
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x180cfc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x180cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x180d00: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x180d00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x180d04: 0xc05ec8c  jal         func_17B230
    ctx->pc = 0x180D04u;
    SET_GPR_U32(ctx, 31, 0x180D0Cu);
    ctx->pc = 0x17B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B230u, 0x180D04u, 0x180D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D0Cu;
label_180d0c:
    // 0x180d0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x180d0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x180d10: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180d14: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180d14u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180d18: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180d1c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180d1cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180d20: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180d24: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x180d28: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x180d28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180d2c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180d30: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180d34: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180d38: 0x24c30090  addiu       $v1, $a2, 0x90
    ctx->pc = 0x180d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x180d3c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x180d3cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180d40: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x180d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x180d44: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x180d44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x180d48: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x180d48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x180d4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x180d4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180d50: 0x0  nop
    ctx->pc = 0x180d50u;
    // NOP
    // 0x180d54: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x180d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    ctx->pc = 0x180d58u;
}
