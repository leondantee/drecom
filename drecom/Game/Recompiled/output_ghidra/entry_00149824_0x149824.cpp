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

// Function: entry_00149824
// Address: 0x149824 - 0x1498b8
void entry_00149824_0x149824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149824_0x149824");
#endif

    switch (ctx->pc) {
        case 0x149838u: goto label_149838;
        case 0x149844u: goto label_149844;
        case 0x149864u: goto label_149864;
        default: break;
    }

    ctx->pc = 0x149824u;

    // 0x149824: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x149824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149828: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14982c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x149830: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x149830u;
    SET_GPR_U32(ctx, 31, 0x149838u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x149830u, 0x149838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149838u;
label_149838:
    // 0x149838: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x149838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14983c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14983Cu;
    SET_GPR_U32(ctx, 31, 0x149844u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14983Cu, 0x149844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149844u;
label_149844:
    // 0x149844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149848: 0x946309ee  lhu         $v1, 0x9EE($v1)
    ctx->pc = 0x149848u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2542)));
    // 0x14984c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14984cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x149850: 0x2861008f  slti        $at, $v1, 0x8F
    ctx->pc = 0x149850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)143) ? 1 : 0);
    // 0x149854: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x149854u;
    {
        const bool branch_taken_0x149854 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x149854) {
            ctx->pc = 0x1498B8u;
            return;
        }
    }
    ctx->pc = 0x14985Cu;
    // 0x14985c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14985Cu;
    SET_GPR_U32(ctx, 31, 0x149864u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14985Cu, 0x149864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149864u;
label_149864:
    // 0x149864: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x149864u;
    {
        const bool branch_taken_0x149864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149864) {
            ctx->pc = 0x1498B8u;
            return;
        }
    }
    ctx->pc = 0x14986Cu;
    // 0x14986c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x149870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149874: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x149874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x149878: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14987c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x149880: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x149884: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x149884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x149888: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x149888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14988c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x149890: 0xc4611b30  lwc1        $f1, 0x1B30($v1)
    ctx->pc = 0x149890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149894: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x149894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14989c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498a0: 0xe4601b30  swc1        $f0, 0x1B30($v1)
    ctx->pc = 0x1498a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6960), bits); }
    // 0x1498a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1498a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1498a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1498a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1498ac: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1498acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1498b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1498B0u;
    {
        const bool branch_taken_0x1498b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1498b0) {
            ctx->pc = 0x149930u;
            return;
        }
    }
    ctx->pc = 0x1498B8u;
}
