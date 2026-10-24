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

// Function: entry_0032c53c
// Address: 0x32c53c - 0x32c624
void entry_0032c53c_0x32c53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c53c_0x32c53c");
#endif

    switch (ctx->pc) {
        case 0x32c560u: goto label_32c560;
        case 0x32c590u: goto label_32c590;
        case 0x32c59cu: goto label_32c59c;
        case 0x32c5d4u: goto label_32c5d4;
        case 0x32c5fcu: goto label_32c5fc;
        default: break;
    }

    ctx->pc = 0x32c53cu;

    // 0x32c53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32c53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32c540: 0x8c221a3c  lw          $v0, 0x1A3C($at)
    ctx->pc = 0x32c540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32c544: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32c544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32c548: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32c548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32c54c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x32C54Cu;
    {
        const bool branch_taken_0x32c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c54c) {
            ctx->pc = 0x32C624u;
            return;
        }
    }
    ctx->pc = 0x32C554u;
    // 0x32c554: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c558: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32C558u;
    SET_GPR_U32(ctx, 31, 0x32C560u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32C558u, 0x32C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C560u;
label_32c560:
    // 0x32c560: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32c564: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32c564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32c568: 0x3c031d00  lui         $v1, 0x1D00
    ctx->pc = 0x32c568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7424 << 16));
    // 0x32c56c: 0x34660403  ori         $a2, $v1, 0x403
    ctx->pc = 0x32c56cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1027);
    // 0x32c570: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x32c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32c574: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32c574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32c578: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32c578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32c57c: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x32c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x32c580: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32c580u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32c584: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32c584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c588: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32C588u;
    SET_GPR_U32(ctx, 31, 0x32C590u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32C588u, 0x32C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C590u;
label_32c590:
    // 0x32c590: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c594: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C594u;
    SET_GPR_U32(ctx, 31, 0x32C59Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C594u, 0x32C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C59Cu;
label_32c59c:
    // 0x32c59c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32c5a0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32c5a0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c5a4: 0x24040808  addiu       $a0, $zero, 0x808
    ctx->pc = 0x32c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32c5a8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x32c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x32c5ac: 0x3c111d00  lui         $s1, 0x1D00
    ctx->pc = 0x32c5acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)7424 << 16));
    // 0x32c5b0: 0x36230404  ori         $v1, $s1, 0x404
    ctx->pc = 0x32c5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1028);
    // 0x32c5b4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x32c5b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c5b8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x32c5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32c5bc: 0x3c15003b  lui         $s5, 0x3B
    ctx->pc = 0x32c5bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
    // 0x32c5c0: 0x26a21ee0  addiu       $v0, $s5, 0x1EE0
    ctx->pc = 0x32c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7904));
    // 0x32c5c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32c5c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c5c8: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x32c5c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32c5cc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32C5CCu;
    SET_GPR_U32(ctx, 31, 0x32C5D4u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32C5CCu, 0x32C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5D4u;
label_32c5d4:
    // 0x32c5d4: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32c5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c5dc: 0x0  nop
    ctx->pc = 0x32c5dcu;
    // NOP
    // 0x32c5e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c5e4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32c5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c5e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32c5e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32c5ec: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x32c5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x32c5f0: 0xc7ac0144  lwc1        $f12, 0x144($sp)
    ctx->pc = 0x32c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c5f4: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32C5F4u;
    SET_GPR_U32(ctx, 31, 0x32C5FCu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32C5F4u, 0x32C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5FCu;
label_32c5fc:
    // 0x32c5fc: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32c600: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x32c600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32c604: 0x3c041d00  lui         $a0, 0x1D00
    ctx->pc = 0x32c604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7424 << 16));
    // 0x32c608: 0x34830405  ori         $v1, $a0, 0x405
    ctx->pc = 0x32c608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1029);
    // 0x32c60c: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x32c60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x32c610: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32c610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32c614: 0x24651ed8  addiu       $a1, $v1, 0x1ED8
    ctx->pc = 0x32c614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x32c618: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32c618u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32c61c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32C61Cu;
    SET_GPR_U32(ctx, 31, 0x32C624u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32C61Cu, 0x32C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C624u;
}
