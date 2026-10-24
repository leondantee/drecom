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
// Address: 0x154344 - 0x1543d8
void caseD_7_0x154344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x154344");
#endif

    switch (ctx->pc) {
        case 0x154360u: goto label_154360;
        case 0x154374u: goto label_154374;
        case 0x154384u: goto label_154384;
        case 0x15439cu: goto label_15439c;
        default: break;
    }

    ctx->pc = 0x154344u;

    // 0x154344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x154344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154348: 0x0  nop
    ctx->pc = 0x154348u;
    // NOP
    // 0x15434c: 0xe60015b8  swc1        $f0, 0x15B8($s0)
    ctx->pc = 0x15434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5560), bits); }
    // 0x154350: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154354: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x154358: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x154358u;
    SET_GPR_U32(ctx, 31, 0x154360u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x154358u, 0x154360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154360u;
label_154360:
    // 0x154360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x154360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154364: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154368: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x154368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15436c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x15436Cu;
    SET_GPR_U32(ctx, 31, 0x154374u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x15436Cu, 0x154374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154374u;
label_154374:
    // 0x154374: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154378: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x154378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15437c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x15437Cu;
    SET_GPR_U32(ctx, 31, 0x154384u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x15437Cu, 0x154384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154384u;
label_154384:
    // 0x154384: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x154384u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x154388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15438c: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x15438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154390: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x154390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154394: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x154394u;
    SET_GPR_U32(ctx, 31, 0x15439Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154394u, 0x15439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15439Cu;
label_15439c:
    // 0x15439c: 0x920413a6  lbu         $a0, 0x13A6($s0)
    ctx->pc = 0x15439cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x1543a0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1543a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1543a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1543a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1543a8: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1543A8u;
    {
        const bool branch_taken_0x1543a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1543a8) {
            ctx->pc = 0x154444u;
            return;
        }
    }
    ctx->pc = 0x1543B0u;
    // 0x1543b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1543b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1543b4: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1543B4u;
    {
        const bool branch_taken_0x1543b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1543b4) {
            ctx->pc = 0x154420u;
            return;
        }
    }
    ctx->pc = 0x1543BCu;
    // 0x1543bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1543c0: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1543C0u;
    {
        const bool branch_taken_0x1543c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1543c0) {
            ctx->pc = 0x1543FCu;
            return;
        }
    }
    ctx->pc = 0x1543C8u;
    // 0x1543c8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1543C8u;
    {
        const bool branch_taken_0x1543c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543c8) {
            ctx->pc = 0x1543D8u;
            return;
        }
    }
    ctx->pc = 0x1543D0u;
    // 0x1543d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1543D0u;
    {
        const bool branch_taken_0x1543d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543d0) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x1543D8u;
}
