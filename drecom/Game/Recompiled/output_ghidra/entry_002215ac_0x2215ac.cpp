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

// Function: entry_002215ac
// Address: 0x2215ac - 0x221740
void entry_002215ac_0x2215ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002215ac_0x2215ac");
#endif

    switch (ctx->pc) {
        case 0x2215c4u: goto label_2215c4;
        case 0x2215fcu: goto label_2215fc;
        case 0x221624u: goto label_221624;
        case 0x221678u: goto label_221678;
        case 0x2216acu: goto label_2216ac;
        case 0x2216c8u: goto label_2216c8;
        case 0x2216e4u: goto label_2216e4;
        case 0x221700u: goto label_221700;
        case 0x221718u: goto label_221718;
        case 0x22173cu: goto label_22173c;
        default: break;
    }

    ctx->pc = 0x2215acu;

    // 0x2215ac: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2215b0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2215b4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2215b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2215b8: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2215b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x2215bc: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2215BCu;
    SET_GPR_U32(ctx, 31, 0x2215C4u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2215BCu, 0x2215C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215C4u;
label_2215c4:
    // 0x2215c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2215c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2215c8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2215c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2215cc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2215d0: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2215d4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x2215d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x2215d8: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2215d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2215dc: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x2215DCu;
    {
        const bool branch_taken_0x2215dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2215dc) {
            ctx->pc = 0x22185Cu;
            return;
        }
    }
    ctx->pc = 0x2215E4u;
    // 0x2215e4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2215e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2215e8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2215e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2215ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2215ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2215f0: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x2215f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x2215f4: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2215F4u;
    SET_GPR_U32(ctx, 31, 0x2215FCu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2215F4u, 0x2215FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215FCu;
label_2215fc:
    // 0x2215fc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2215fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221600: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221604: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x221604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221608: 0x3c043f86  lui         $a0, 0x3F86
    ctx->pc = 0x221608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16262 << 16));
    // 0x22160c: 0x34830a92  ori         $v1, $a0, 0xA92
    ctx->pc = 0x22160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2706);
    // 0x221610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221614: 0x0  nop
    ctx->pc = 0x221614u;
    // NOP
    // 0x221618: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x221618u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22161c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22161Cu;
    SET_GPR_U32(ctx, 31, 0x221624u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22161Cu, 0x221624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221624u;
label_221624:
    // 0x221624: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221628: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x221628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x22162c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221630: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x221630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221634: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x221634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x221638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22163c: 0x0  nop
    ctx->pc = 0x22163cu;
    // NOP
    // 0x221640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x221640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221644: 0x0  nop
    ctx->pc = 0x221644u;
    // NOP
    // 0x221648: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x221648u;
    {
        const bool branch_taken_0x221648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221648) {
            ctx->pc = 0x221740u;
            return;
        }
    }
    ctx->pc = 0x221650u;
    // 0x221650: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221654: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x221654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221658: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x221658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x22165c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x22165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x221660: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x221660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x221664: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x221664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x221668: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x221668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22166c: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x22166cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x221670: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x221670u;
    SET_GPR_U32(ctx, 31, 0x221678u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x221670u, 0x221678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221678u;
label_221678:
    // 0x221678: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x221678u;
    {
        const bool branch_taken_0x221678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221678) {
            ctx->pc = 0x221740u;
            return;
        }
    }
    ctx->pc = 0x221680u;
    // 0x221680: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x221680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221684: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221688: 0xa4c410a6  sh          $a0, 0x10A6($a2)
    ctx->pc = 0x221688u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x22168c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221690: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x221694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x221698: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x221698u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22169c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22169cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216a4: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2216A4u;
    SET_GPR_U32(ctx, 31, 0x2216ACu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216A4u, 0x2216ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216ACu;
label_2216ac:
    // 0x2216ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2216acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2216b0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2216b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2216b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2216b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2216b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2216b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216c0: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2216C0u;
    SET_GPR_U32(ctx, 31, 0x2216C8u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216C0u, 0x2216C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216C8u;
label_2216c8:
    // 0x2216c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2216c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2216cc: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2216ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2216d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2216d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2216d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2216d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216dc: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2216DCu;
    SET_GPR_U32(ctx, 31, 0x2216E4u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216DCu, 0x2216E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216E4u;
label_2216e4:
    // 0x2216e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2216e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2216e8: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2216e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2216ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2216ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2216f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2216f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2216f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2216f8: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x2216F8u;
    SET_GPR_U32(ctx, 31, 0x221700u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x2216F8u, 0x221700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221700u;
label_221700:
    // 0x221700: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221704: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x221704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221708: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x221708u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22170c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x22170cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221710: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x221710u;
    SET_GPR_U32(ctx, 31, 0x221718u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x221710u, 0x221718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221718u;
label_221718:
    // 0x221718: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x221718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22171c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x22171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221720: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221724: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x221724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x221728: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x221728u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22172c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22172cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221730: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221730u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221734: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x221734u;
    SET_GPR_U32(ctx, 31, 0x22173Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x221734u, 0x22173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22173Cu;
label_22173c:
    // 0x22173c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22173cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x221740u;
}
