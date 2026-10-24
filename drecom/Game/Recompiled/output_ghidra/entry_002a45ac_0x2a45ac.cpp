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

// Function: entry_002a45ac
// Address: 0x2a45ac - 0x2a46a0
void entry_002a45ac_0x2a45ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a45ac_0x2a45ac");
#endif

    switch (ctx->pc) {
        case 0x2a45ccu: goto label_2a45cc;
        case 0x2a45e4u: goto label_2a45e4;
        case 0x2a45f0u: goto label_2a45f0;
        case 0x2a4638u: goto label_2a4638;
        default: break;
    }

    ctx->pc = 0x2a45acu;

    // 0x2a45ac: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a45acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45b0: 0xa0e010a8  sb          $zero, 0x10A8($a3)
    ctx->pc = 0x2a45b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a45b4: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a45b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45b8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a45b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a45bc: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a45c0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a45c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a45c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A45C4u;
    SET_GPR_U32(ctx, 31, 0x2A45CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A45C4u, 0x2A45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45CCu;
label_2a45cc:
    // 0x2a45cc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a45ccu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a45d0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a45d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a45d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a45d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a45dc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A45DCu;
    SET_GPR_U32(ctx, 31, 0x2A45E4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A45DCu, 0x2A45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45E4u;
label_2a45e4:
    // 0x2a45e4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45e8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A45E8u;
    SET_GPR_U32(ctx, 31, 0x2A45F0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A45E8u, 0x2A45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45F0u;
label_2a45f0:
    // 0x2a45f0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a45f4: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2a45f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2a45f8: 0x10a0005d  beqz        $a1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2A45F8u;
    {
        const bool branch_taken_0x2a45f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a45f8) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4600u;
    // 0x2a4600: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4604: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4608: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a4608u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a460c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a460cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4610: 0x8fa90108  lw          $t1, 0x108($sp)
    ctx->pc = 0x2a4610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4614: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a4614u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a4618: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a461c: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a461cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4620: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4624: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a4624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4628: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a462c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a462cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a4630: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A4630u;
    SET_GPR_U32(ctx, 31, 0x2A4638u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A4630u, 0x2A4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4638u;
label_2a4638:
    // 0x2a4638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a463c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x2a463cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a4640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a4640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4644: 0x14850016  bne         $a0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A4644u;
    {
        const bool branch_taken_0x2a4644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a4644) {
            ctx->pc = 0x2A46A0u;
            return;
        }
    }
    ctx->pc = 0x2A464Cu;
    // 0x2a464c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a464cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4650: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x2a4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4654: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x2a4654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
    // 0x2a4658: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a4658u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a465c: 0x0  nop
    ctx->pc = 0x2a465cu;
    // NOP
    // 0x2a4660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4664: 0x0  nop
    ctx->pc = 0x2a4664u;
    // NOP
    // 0x2a4668: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A4668u;
    {
        const bool branch_taken_0x2a4668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4668) {
            ctx->pc = 0x2A46A0u;
            return;
        }
    }
    ctx->pc = 0x2A4670u;
    // 0x2a4670: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a4670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4674: 0x8fa90108  lw          $t1, 0x108($sp)
    ctx->pc = 0x2a4674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4678: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x2a4678u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a467c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2a467cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a4680: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4684: 0xa04a0001  sb          $t2, 0x1($v0)
    ctx->pc = 0x2a4684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 10));
    // 0x2a4688: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a468c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a468cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4690: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4694: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a4694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4698: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a469c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a469cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a46a0u;
}
