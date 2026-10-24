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

// Function: entry_0034778c
// Address: 0x34778c - 0x34784c
void entry_0034778c_0x34778c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034778c_0x34778c");
#endif

    switch (ctx->pc) {
        case 0x34779cu: goto label_34779c;
        case 0x3477a8u: goto label_3477a8;
        case 0x3477b8u: goto label_3477b8;
        case 0x3477c4u: goto label_3477c4;
        case 0x3477e4u: goto label_3477e4;
        default: break;
    }

    ctx->pc = 0x34778cu;

    // 0x34778c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347794: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x347794u;
    SET_GPR_U32(ctx, 31, 0x34779Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x347794u, 0x34779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34779Cu;
label_34779c:
    // 0x34779c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477a0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3477A0u;
    SET_GPR_U32(ctx, 31, 0x3477A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3477A0u, 0x3477A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477A8u;
label_3477a8:
    // 0x3477a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3477a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3477acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3477b0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3477B0u;
    SET_GPR_U32(ctx, 31, 0x3477B8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3477B0u, 0x3477B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477B8u;
label_3477b8:
    // 0x3477b8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3477b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477bc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3477BCu;
    SET_GPR_U32(ctx, 31, 0x3477C4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3477BCu, 0x3477C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477C4u;
label_3477c4:
    // 0x3477c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3477c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477c8: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x3477c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x3477cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3477ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3477d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3477d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3477d4: 0x14830068  bne         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3477D4u;
    {
        const bool branch_taken_0x3477d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3477d4) {
            ctx->pc = 0x347978u;
            return;
        }
    }
    ctx->pc = 0x3477DCu;
    // 0x3477dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3477DCu;
    SET_GPR_U32(ctx, 31, 0x3477E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3477DCu, 0x3477E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477E4u;
label_3477e4:
    // 0x3477e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3477e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3477e8: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x3477e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3477ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3477ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3477f0: 0x14830061  bne         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x3477F0u;
    {
        const bool branch_taken_0x3477f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3477f0) {
            ctx->pc = 0x347978u;
            return;
        }
    }
    ctx->pc = 0x3477F8u;
    // 0x3477f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3477f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3477fc: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x3477fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347800: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x347800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x347804: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x347804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x347808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34780c: 0x0  nop
    ctx->pc = 0x34780cu;
    // NOP
    // 0x347810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347814: 0x0  nop
    ctx->pc = 0x347814u;
    // NOP
    // 0x347818: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x347818u;
    {
        const bool branch_taken_0x347818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347818) {
            ctx->pc = 0x347978u;
            return;
        }
    }
    ctx->pc = 0x347820u;
    // 0x347820: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x347820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x347824: 0x2463a4f0  addiu       $v1, $v1, -0x5B10
    ctx->pc = 0x347824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943984));
    // 0x347828: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x347828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x34782c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x34782cu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3AA4F0u));
    // 0x347830: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x347830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3AA4F2u));
    // 0x347834: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x347834u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x347838: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x347838u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34783c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34783cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347840: 0x2474dbc0  addiu       $s4, $v1, -0x2440
    ctx->pc = 0x347840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x347844: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x347844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x347848: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x347848u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x34784cu;
}
