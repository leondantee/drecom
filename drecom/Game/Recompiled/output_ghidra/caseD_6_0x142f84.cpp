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

// Function: caseD_6
// Address: 0x142f84 - 0x14300c
void caseD_6_0x142f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x142f84");
#endif

    switch (ctx->pc) {
        case 0x142f8cu: goto label_142f8c;
        case 0x142fa4u: goto label_142fa4;
        case 0x142fb0u: goto label_142fb0;
        case 0x142fc8u: goto label_142fc8;
        default: break;
    }

    ctx->pc = 0x142f84u;

    // 0x142f84: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x142F84u;
    SET_GPR_U32(ctx, 31, 0x142F8Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x142F84u, 0x142F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F8Cu;
label_142f8c:
    // 0x142f8c: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x142F8Cu;
    {
        const bool branch_taken_0x142f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142f8c) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142F94u;
    // 0x142f94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142f98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x142f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x142f9c: 0xc067de8  jal         func_19F7A0
    ctx->pc = 0x142F9Cu;
    SET_GPR_U32(ctx, 31, 0x142FA4u);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x142F9Cu, 0x142FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FA4u;
label_142fa4:
    // 0x142fa4: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x142fa8: 0xc05e990  jal         func_17A640
    ctx->pc = 0x142FA8u;
    SET_GPR_U32(ctx, 31, 0x142FB0u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142FA8u, 0x142FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FB0u;
label_142fb0:
    // 0x142fb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142fb4: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x142fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x142fb8: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x142fbc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x142fbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x142fc0: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x142FC0u;
    SET_GPR_U32(ctx, 31, 0x142FC8u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x142FC0u, 0x142FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FC8u;
label_142fc8:
    // 0x142fc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142fcc: 0x9024ccbc  lbu         $a0, -0x3344($at)
    ctx->pc = 0x142fccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x47CCBCu));
    // 0x142fd0: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x142fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x142fd4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x142fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142fd8: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x142fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x142fdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x142fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x142fe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x142fe4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x142fe8: 0xa022ccbc  sb          $v0, -0x3344($at)
    ctx->pc = 0x142fe8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CCBCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CCBCu, _value); } while (0);
    // 0x142fec: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x142fecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x142ff0: 0xae400250  sw          $zero, 0x250($s2)
    ctx->pc = 0x142ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
    // 0x142ff4: 0x24140924  addiu       $s4, $zero, 0x924
    ctx->pc = 0x142ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
    // 0x142ff8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x143000: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x143000u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x143004: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x143004u;
    {
        const bool branch_taken_0x143004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143004) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x14300Cu;
}
