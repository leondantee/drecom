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

// Function: entry_002a05f0
// Address: 0x2a05f0 - 0x2a0734
void entry_002a05f0_0x2a05f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a05f0_0x2a05f0");
#endif

    switch (ctx->pc) {
        case 0x2a0624u: goto label_2a0624;
        case 0x2a0640u: goto label_2a0640;
        case 0x2a0658u: goto label_2a0658;
        case 0x2a066cu: goto label_2a066c;
        case 0x2a0684u: goto label_2a0684;
        case 0x2a0698u: goto label_2a0698;
        case 0x2a06a4u: goto label_2a06a4;
        case 0x2a06f4u: goto label_2a06f4;
        default: break;
    }

    ctx->pc = 0x2a05f0u;

    // 0x2a05f0: 0x3c063e8e  lui         $a2, 0x3E8E
    ctx->pc = 0x2a05f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16014 << 16));
    // 0x2a05f4: 0x34c5fa35  ori         $a1, $a2, 0xFA35
    ctx->pc = 0x2a05f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64053);
    // 0x2a05f8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a05f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a05fc: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a05fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0600: 0x8fa80168  lw          $t0, 0x168($sp)
    ctx->pc = 0x2a0600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0604: 0x24e90120  addiu       $t1, $a3, 0x120
    ctx->pc = 0x2a0604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x2a0608: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a0608u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a060c: 0xc50c00d4  lwc1        $f12, 0xD4($t0)
    ctx->pc = 0x2a060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0610: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x2a0610u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x2a0614: 0x2542dce0  addiu       $v0, $t2, -0x2320
    ctx->pc = 0x2a0614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958304));
    // 0x2a0618: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a0618u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a061c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A061Cu;
    SET_GPR_U32(ctx, 31, 0x2A0624u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A061Cu, 0x2A0624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0624u;
label_2a0624:
    // 0x2a0624: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a0624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2a0628: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a062c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0630: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x2a0630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0634: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a0634u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0638: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A0638u;
    SET_GPR_U32(ctx, 31, 0x2A0640u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A0638u, 0x2A0640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0640u;
label_2a0640:
    // 0x2a0640: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0644: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a0648: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a064c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0650: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A0650u;
    SET_GPR_U32(ctx, 31, 0x2A0658u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A0650u, 0x2A0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0658u;
label_2a0658:
    // 0x2a0658: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a0658u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a065c: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a065cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0660: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a0660u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a0664: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A0664u;
    SET_GPR_U32(ctx, 31, 0x2A066Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A0664u, 0x2A066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A066Cu;
label_2a066c:
    // 0x2a066c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a066cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0670: 0x8fa80168  lw          $t0, 0x168($sp)
    ctx->pc = 0x2a0670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0674: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0674u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0678: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a0678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a067c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A067Cu;
    SET_GPR_U32(ctx, 31, 0x2A0684u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A067Cu, 0x2A0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0684u;
label_2a0684:
    // 0x2a0684: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a0684u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0688: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0688u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a068c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a068cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0690: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A0690u;
    SET_GPR_U32(ctx, 31, 0x2A0698u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A0690u, 0x2A0698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0698u;
label_2a0698:
    // 0x2a0698: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a069c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A069Cu;
    SET_GPR_U32(ctx, 31, 0x2A06A4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A069Cu, 0x2A06A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06A4u;
label_2a06a4:
    // 0x2a06a4: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06a8: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x2a06a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2a06ac: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x2a06acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a06b0: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x2a06b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a06b4: 0x1480009f  bnez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2A06B4u;
    {
        const bool branch_taken_0x2a06b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a06b4) {
            ctx->pc = 0x2A0934u;
            return;
        }
    }
    ctx->pc = 0x2A06BCu;
    // 0x2a06bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a06bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a06c0: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a06c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06c4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a06c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a06c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a06c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a06cc: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a06ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06d0: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a06d0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a06d4: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a06d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06d8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a06d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a06dc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a06e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a06e4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a06e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a06e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a06ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A06ECu;
    SET_GPR_U32(ctx, 31, 0x2A06F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A06ECu, 0x2A06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06F4u;
label_2a06f4:
    // 0x2a06f4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a06f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a06f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a06f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a06fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A06FCu;
    {
        const bool branch_taken_0x2a06fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a06fc) {
            ctx->pc = 0x2A0734u;
            return;
        }
    }
    ctx->pc = 0x2A0704u;
    // 0x2a0704: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a0704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0708: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a070c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a070cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a0710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0714: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0718: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a0718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a071c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0720: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a0720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0724: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0728: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a0728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a072c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0730: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a0730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a0734u;
}
