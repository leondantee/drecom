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

// Function: caseD_1d
// Address: 0x1474b0 - 0x147584
void caseD_1d_0x1474b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1d_0x1474b0");
#endif

    switch (ctx->pc) {
        case 0x1474c4u: goto label_1474c4;
        case 0x1474d8u: goto label_1474d8;
        case 0x1474f0u: goto label_1474f0;
        case 0x147500u: goto label_147500;
        case 0x147524u: goto label_147524;
        default: break;
    }

    ctx->pc = 0x1474b0u;

    // 0x1474b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1474b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1474b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1474b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1474b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1474bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1474BCu;
    SET_GPR_U32(ctx, 31, 0x1474C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1474BCu, 0x1474C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474C4u;
label_1474c4:
    // 0x1474c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1474c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1474c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1474c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1474cc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1474ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1474d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1474D0u;
    SET_GPR_U32(ctx, 31, 0x1474D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1474D0u, 0x1474D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474D8u;
label_1474d8:
    // 0x1474d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1474d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1474dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1474dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1474e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1474e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1474e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1474e8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1474E8u;
    SET_GPR_U32(ctx, 31, 0x1474F0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1474E8u, 0x1474F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474F0u;
label_1474f0:
    // 0x1474f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1474f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1474f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1474f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1474f8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1474F8u;
    SET_GPR_U32(ctx, 31, 0x147500u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1474F8u, 0x147500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147500u;
label_147500:
    // 0x147500: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x147500u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x147504: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147508: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x147508u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x14750c: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x14750cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x147510: 0x31040010  andi        $a0, $t0, 0x10
    ctx->pc = 0x147510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x147514: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147514u;
    {
        const bool branch_taken_0x147514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147514) {
            ctx->pc = 0x147584u;
            return;
        }
    }
    ctx->pc = 0x14751Cu;
    // 0x14751c: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x14751Cu;
    SET_GPR_U32(ctx, 31, 0x147524u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x14751Cu, 0x147524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147524u;
label_147524:
    // 0x147524: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x147524u;
    {
        const bool branch_taken_0x147524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147524) {
            ctx->pc = 0x147584u;
            return;
        }
    }
    ctx->pc = 0x14752Cu;
    // 0x14752c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x147530: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147534: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x147534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x147538: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14753c: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x14753cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x147540: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x147544: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x147544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x147548: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x147548u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x14754c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x14754cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147550: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x147550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147554: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x147558: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x147558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x14755c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14755cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147560: 0x0  nop
    ctx->pc = 0x147560u;
    // NOP
    // 0x147564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x147564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x147568: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14756c: 0xe4a01b30  swc1        $f0, 0x1B30($a1)
    ctx->pc = 0x14756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6960), bits); }
    // 0x147570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x147570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x147574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147578: 0xa06610a8  sb          $a2, 0x10A8($v1)
    ctx->pc = 0x147578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 6));
    // 0x14757c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14757Cu;
    {
        const bool branch_taken_0x14757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14757c) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x147584u;
}
