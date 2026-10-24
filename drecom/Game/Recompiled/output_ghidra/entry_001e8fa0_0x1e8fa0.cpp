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

// Function: entry_001e8fa0
// Address: 0x1e8fa0 - 0x1e9038
void entry_001e8fa0_0x1e8fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8fa0_0x1e8fa0");
#endif

    switch (ctx->pc) {
        case 0x1e9010u: goto label_1e9010;
        default: break;
    }

    ctx->pc = 0x1e8fa0u;

    // 0x1e8fa0: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8fa4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e8fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e8fa8: 0x946300aa  lhu         $v1, 0xAA($v1)
    ctx->pc = 0x1e8fa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1e8fac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e8facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e8fb0: 0x30860004  andi        $a2, $a0, 0x4
    ctx->pc = 0x1e8fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1e8fb4: 0x10c00062  beqz        $a2, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E8FB4u;
    {
        const bool branch_taken_0x1e8fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fb4) {
            ctx->pc = 0x1E9140u;
            return;
        }
    }
    ctx->pc = 0x1E8FBCu;
    // 0x1e8fbc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8fc0: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x1e8fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8fc4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e8fc8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8fcc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1e8fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8fd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e8fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e8fd4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1e8fd8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1e8fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e8fdc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E8FDCu;
    {
        const bool branch_taken_0x1e8fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8fdc) {
            ctx->pc = 0x1E9140u;
            return;
        }
    }
    ctx->pc = 0x1E8FE4u;
    // 0x1e8fe4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8fe8: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x1e8fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x1e8fec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e8ff0: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8FF0u;
    {
        const bool branch_taken_0x1e8ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ff0) {
            ctx->pc = 0x1E9038u;
            return;
        }
    }
    ctx->pc = 0x1E8FF8u;
    // 0x1e8ff8: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e8ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ffc: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9000: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9000u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e9004: 0x84c611f2  lh          $a2, 0x11F2($a2)
    ctx->pc = 0x1e9004u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4594)));
    // 0x1e9008: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x1E9008u;
    SET_GPR_U32(ctx, 31, 0x1E9010u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9008u, 0x1E9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9010u;
label_1e9010:
    // 0x1e9010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9014: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e9014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9018: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1e9018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1e901c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1e901cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1e9020: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e9020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e9024: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x1e9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x1e9028: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1e9028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1e902c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e902cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9030: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1E9030u;
    SET_GPR_U32(ctx, 31, 0x1E9038u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E9030u, 0x1E9038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9038u;
}
