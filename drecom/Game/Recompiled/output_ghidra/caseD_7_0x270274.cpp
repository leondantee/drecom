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
// Address: 0x270274 - 0x270310
void caseD_7_0x270274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x270274");
#endif

    switch (ctx->pc) {
        case 0x270288u: goto label_270288;
        case 0x27029cu: goto label_27029c;
        case 0x2702b0u: goto label_2702b0;
        case 0x2702bcu: goto label_2702bc;
        default: break;
    }

    ctx->pc = 0x270274u;

    // 0x270274: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270278: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x270278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27027c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x27027cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x270280: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x270280u;
    SET_GPR_U32(ctx, 31, 0x270288u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x270280u, 0x270288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270288u;
label_270288:
    // 0x270288: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27028c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270290: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x270294: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x270294u;
    SET_GPR_U32(ctx, 31, 0x27029Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x270294u, 0x27029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27029Cu;
label_27029c:
    // 0x27029c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27029cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2702a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2702a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2702a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2702a8: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x2702A8u;
    SET_GPR_U32(ctx, 31, 0x2702B0u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2702A8u, 0x2702B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702B0u;
label_2702b0:
    // 0x2702b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2702b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2702b4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x2702B4u;
    SET_GPR_U32(ctx, 31, 0x2702BCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2702B4u, 0x2702BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702BCu;
label_2702bc:
    // 0x2702bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702c0: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2702c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2702c4: 0x14800012  bnez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2702C4u;
    {
        const bool branch_taken_0x2702c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2702c4) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x2702CCu;
    // 0x2702cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2702ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2702d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702d4: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2702d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2702d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2702d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2702dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2702e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2702e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2702e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2702e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2702ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2702f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2702f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702f4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2702f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2702f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2702f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2702fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2702fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x270300: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270304: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x270304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x270308: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270308u;
    {
        const bool branch_taken_0x270308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270308) {
            ctx->pc = 0x270338u;
            return;
        }
    }
    ctx->pc = 0x270310u;
}
