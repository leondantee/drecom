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

// Function: entry_00147fe4
// Address: 0x147fe4 - 0x14806c
void entry_00147fe4_0x147fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147fe4_0x147fe4");
#endif

    switch (ctx->pc) {
        case 0x147ff0u: goto label_147ff0;
        case 0x148014u: goto label_148014;
        default: break;
    }

    ctx->pc = 0x147fe4u;

    // 0x147fe4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147fe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147fe8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147FE8u;
    SET_GPR_U32(ctx, 31, 0x147FF0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147FE8u, 0x147FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FF0u;
label_147ff0:
    // 0x147ff0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147ff4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ff8: 0x906509df  lbu         $a1, 0x9DF($v1)
    ctx->pc = 0x147ff8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x147ffc: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x147ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148000: 0x30c70010  andi        $a3, $a2, 0x10
    ctx->pc = 0x148000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x148004: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x148004u;
    {
        const bool branch_taken_0x148004 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x148004) {
            ctx->pc = 0x14806Cu;
            return;
        }
    }
    ctx->pc = 0x14800Cu;
    // 0x14800c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14800Cu;
    SET_GPR_U32(ctx, 31, 0x148014u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14800Cu, 0x148014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148014u;
label_148014:
    // 0x148014: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x148014u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x148018: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x148018u;
    {
        const bool branch_taken_0x148018 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x148018) {
            ctx->pc = 0x14806Cu;
            return;
        }
    }
    ctx->pc = 0x148020u;
    // 0x148020: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x148020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x148024: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148028: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14802c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x14802cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148030: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x148030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x148034: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x148038: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x148038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14803c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14803cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x148040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148044: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x148044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148048: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x148048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14804c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14804cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148050: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148054: 0xe4801b30  swc1        $f0, 0x1B30($a0)
    ctx->pc = 0x148054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6960), bits); }
    // 0x148058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14805c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x14805cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148060: 0xa0a310a8  sb          $v1, 0x10A8($a1)
    ctx->pc = 0x148060u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x148064: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x148064u;
    {
        const bool branch_taken_0x148064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148064) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x14806Cu;
}
