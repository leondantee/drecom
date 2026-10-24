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

// Function: caseD_7
// Address: 0x147da0 - 0x147e5c
void caseD_7_0x147da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x147da0");
#endif

    switch (ctx->pc) {
        case 0x147db0u: goto label_147db0;
        case 0x147dc0u: goto label_147dc0;
        case 0x147dd8u: goto label_147dd8;
        case 0x147de8u: goto label_147de8;
        case 0x147dfcu: goto label_147dfc;
        case 0x147e1cu: goto label_147e1c;
        case 0x147e44u: goto label_147e44;
        default: break;
    }

    ctx->pc = 0x147da0u;

    // 0x147da0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147da4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147da4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147da8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x147DA8u;
    SET_GPR_U32(ctx, 31, 0x147DB0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147DA8u, 0x147DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DB0u;
label_147db0:
    // 0x147db0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147db0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147db4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147db8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x147DB8u;
    SET_GPR_U32(ctx, 31, 0x147DC0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x147DB8u, 0x147DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DC0u;
label_147dc0:
    // 0x147dc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x147dc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147dc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x147dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x147dc8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x147dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147dcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147dccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147dd0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x147DD0u;
    SET_GPR_U32(ctx, 31, 0x147DD8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x147DD0u, 0x147DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DD8u;
label_147dd8:
    // 0x147dd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147dd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147ddc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x147ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147de0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x147DE0u;
    SET_GPR_U32(ctx, 31, 0x147DE8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x147DE0u, 0x147DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DE8u;
label_147de8:
    // 0x147de8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x147de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147dec: 0x24a612c0  addiu       $a2, $a1, 0x12C0
    ctx->pc = 0x147decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
    // 0x147df0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x147df0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x147df4: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x147DF4u;
    SET_GPR_U32(ctx, 31, 0x147DFCu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x147DF4u, 0x147DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DFCu;
label_147dfc:
    // 0x147dfc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x147dfcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147e00: 0x14e000b8  bnez        $a3, . + 4 + (0xB8 << 2)
    ctx->pc = 0x147E00u;
    {
        const bool branch_taken_0x147e00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e00) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147E08u;
    // 0x147e08: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x147e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e0c: 0x250212c0  addiu       $v0, $t0, 0x12C0
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4800));
    // 0x147e10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x147e10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147e14: 0xc057b04  jal         func_15EC10
    ctx->pc = 0x147E14u;
    SET_GPR_U32(ctx, 31, 0x147E1Cu);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x147E14u, 0x147E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E1Cu;
label_147e1c:
    // 0x147e1c: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x147E1Cu;
    {
        const bool branch_taken_0x147e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e1c) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147E24u;
    // 0x147e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e28: 0x906409db  lbu         $a0, 0x9DB($v1)
    ctx->pc = 0x147e28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x147e2c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x147e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x147e30: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x147e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x147e34: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x147E34u;
    {
        const bool branch_taken_0x147e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e34) {
            ctx->pc = 0x147E5Cu;
            return;
        }
    }
    ctx->pc = 0x147E3Cu;
    // 0x147e3c: 0xc0585dc  jal         func_161770
    ctx->pc = 0x147E3Cu;
    SET_GPR_U32(ctx, 31, 0x147E44u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x147E3Cu, 0x147E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E44u;
label_147e44:
    // 0x147e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x147E44u;
    {
        const bool branch_taken_0x147e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e44) {
            ctx->pc = 0x147E5Cu;
            return;
        }
    }
    ctx->pc = 0x147E4Cu;
    // 0x147e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147e50: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x147e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x147e54: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x147E54u;
    {
        const bool branch_taken_0x147e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e54) {
            ctx->pc = 0x1480E4u;
            return;
        }
    }
    ctx->pc = 0x147E5Cu;
}
