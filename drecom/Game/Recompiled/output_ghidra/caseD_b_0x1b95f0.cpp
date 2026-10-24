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

// Function: caseD_b
// Address: 0x1b95f0 - 0x1b96fc
void caseD_b_0x1b95f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1b95f0");
#endif

    switch (ctx->pc) {
        case 0x1b9600u: goto label_1b9600;
        case 0x1b9610u: goto label_1b9610;
        case 0x1b9624u: goto label_1b9624;
        case 0x1b9630u: goto label_1b9630;
        case 0x1b9650u: goto label_1b9650;
        case 0x1b96a0u: goto label_1b96a0;
        case 0x1b96bcu: goto label_1b96bc;
        default: break;
    }

    ctx->pc = 0x1b95f0u;

    // 0x1b95f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b95f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b95f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b95f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b95f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B95F8u;
    SET_GPR_U32(ctx, 31, 0x1B9600u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B95F8u, 0x1B9600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9600u;
label_1b9600:
    // 0x1b9600: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9604: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b9604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9608: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1B9608u;
    SET_GPR_U32(ctx, 31, 0x1B9610u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1B9608u, 0x1B9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9610u;
label_1b9610:
    // 0x1b9610: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b9610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9614: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9618: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b9618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b961c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1B961Cu;
    SET_GPR_U32(ctx, 31, 0x1B9624u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1B961Cu, 0x1B9624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9624u;
label_1b9624:
    // 0x1b9624: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9628: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B9628u;
    SET_GPR_U32(ctx, 31, 0x1B9630u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9628u, 0x1B9630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9630u;
label_1b9630:
    // 0x1b9630: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9630u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9634: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b963c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1b963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1b9640: 0x246212c0  addiu       $v0, $v1, 0x12C0
    ctx->pc = 0x1b9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1b9644: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b9644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9648: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1B9648u;
    SET_GPR_U32(ctx, 31, 0x1B9650u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1B9648u, 0x1B9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9650u;
label_1b9650:
    // 0x1b9650: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b9650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b9654: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9658: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b965c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1b9660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9664: 0x0  nop
    ctx->pc = 0x1b9664u;
    // NOP
    // 0x1b9668: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b9668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b966c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1b966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9674: 0x0  nop
    ctx->pc = 0x1b9674u;
    // NOP
    // 0x1b9678: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1B9678u;
    {
        const bool branch_taken_0x1b9678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9678) {
            ctx->pc = 0x1B96FCu;
            return;
        }
    }
    ctx->pc = 0x1B9680u;
    // 0x1b9680: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b9680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9684: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9688: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b968c: 0x24a41b40  addiu       $a0, $a1, 0x1B40
    ctx->pc = 0x1b968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x1b9690: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1b9694: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1b9698: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B9698u;
    SET_GPR_U32(ctx, 31, 0x1B96A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B9698u, 0x1B96A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96A0u;
label_1b96a0:
    // 0x1b96a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1b96a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b96a4: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96a8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b96a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96ac: 0xc4ec1b40  lwc1        $f12, 0x1B40($a3)
    ctx->pc = 0x1b96acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b96b0: 0xc50d1b48  lwc1        $f13, 0x1B48($t0)
    ctx->pc = 0x1b96b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b96b4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B96B4u;
    SET_GPR_U32(ctx, 31, 0x1B96BCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B96B4u, 0x1B96BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96BCu;
label_1b96bc:
    // 0x1b96bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96c0: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1b96c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1b96c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b96c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b96ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b96d0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1b96d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b96d4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b96d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96d8: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x1b96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b96dc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b96dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96e0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1b96e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b96e4: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b96e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96e8: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x1b96e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b96ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b96f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b96f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B96F4u;
    {
        const bool branch_taken_0x1b96f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b96f4) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B96FCu;
}
