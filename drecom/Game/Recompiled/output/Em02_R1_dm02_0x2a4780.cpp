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

// Function: Em02_R1_dm02
// Address: 0x2a4780 - 0x2a5518
void Em02_R1_dm02_0x2a4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_dm02_0x2a4780");
#endif

    switch (ctx->pc) {
        case 0x2a4810u: goto label_2a4810;
        case 0x2a4834u: goto label_2a4834;
        case 0x2a486cu: goto label_2a486c;
        case 0x2a4888u: goto label_2a4888;
        case 0x2a48b4u: goto label_2a48b4;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a4974u: goto label_2a4974;
        case 0x2a49a8u: goto label_2a49a8;
        case 0x2a49ecu: goto label_2a49ec;
        case 0x2a49f4u: goto label_2a49f4;
        case 0x2a4a28u: goto label_2a4a28;
        case 0x2a4a78u: goto label_2a4a78;
        case 0x2a4a80u: goto label_2a4a80;
        case 0x2a4ab4u: goto label_2a4ab4;
        case 0x2a4afcu: goto label_2a4afc;
        case 0x2a4b30u: goto label_2a4b30;
        case 0x2a4b3cu: goto label_2a4b3c;
        case 0x2a4b48u: goto label_2a4b48;
        case 0x2a4c08u: goto label_2a4c08;
        case 0x2a4c44u: goto label_2a4c44;
        case 0x2a4c84u: goto label_2a4c84;
        case 0x2a4cbcu: goto label_2a4cbc;
        case 0x2a4cfcu: goto label_2a4cfc;
        case 0x2a4d34u: goto label_2a4d34;
        case 0x2a4d48u: goto label_2a4d48;
        case 0x2a4d60u: goto label_2a4d60;
        case 0x2a4d78u: goto label_2a4d78;
        case 0x2a4d90u: goto label_2a4d90;
        case 0x2a4da8u: goto label_2a4da8;
        case 0x2a4dccu: goto label_2a4dcc;
        case 0x2a4e00u: goto label_2a4e00;
        case 0x2a4e1cu: goto label_2a4e1c;
        case 0x2a4e48u: goto label_2a4e48;
        case 0x2a4e60u: goto label_2a4e60;
        case 0x2a4e84u: goto label_2a4e84;
        case 0x2a4e94u: goto label_2a4e94;
        case 0x2a4ea4u: goto label_2a4ea4;
        case 0x2a4eb4u: goto label_2a4eb4;
        case 0x2a4f30u: goto label_2a4f30;
        case 0x2a4f4cu: goto label_2a4f4c;
        case 0x2a4f70u: goto label_2a4f70;
        case 0x2a4f80u: goto label_2a4f80;
        case 0x2a4f8cu: goto label_2a4f8c;
        case 0x2a5018u: goto label_2a5018;
        case 0x2a5034u: goto label_2a5034;
        case 0x2a5040u: goto label_2a5040;
        case 0x2a5054u: goto label_2a5054;
        case 0x2a5114u: goto label_2a5114;
        case 0x2a514cu: goto label_2a514c;
        case 0x2a5188u: goto label_2a5188;
        case 0x2a51c4u: goto label_2a51c4;
        case 0x2a51d8u: goto label_2a51d8;
        case 0x2a51f0u: goto label_2a51f0;
        case 0x2a521cu: goto label_2a521c;
        case 0x2a5234u: goto label_2a5234;
        case 0x2a5260u: goto label_2a5260;
        case 0x2a5280u: goto label_2a5280;
        case 0x2a52acu: goto label_2a52ac;
        case 0x2a52c4u: goto label_2a52c4;
        case 0x2a52d0u: goto label_2a52d0;
        case 0x2a533cu: goto label_2a533c;
        case 0x2a5368u: goto label_2a5368;
        case 0x2a5380u: goto label_2a5380;
        case 0x2a538cu: goto label_2a538c;
        case 0x2a53d4u: goto label_2a53d4;
        case 0x2a545cu: goto label_2a545c;
        case 0x2a54acu: goto label_2a54ac;
        default: break;
    }

    ctx->pc = 0x2a4780u;

    // 0x2a4780: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2a4784: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a4784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a4788: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x2a4788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
    // 0x2a478c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4790: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4794: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2a4794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a4798: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a479c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2a479cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2a47a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a47a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a47a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a47a8: 0x108302e7  beq         $a0, $v1, . + 4 + (0x2E7 << 2)
    ctx->pc = 0x2A47A8u;
    {
        const bool branch_taken_0x2a47a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a47a8) {
            ctx->pc = 0x2A5348u;
            goto label_2a5348;
        }
    }
    ctx->pc = 0x2A47B0u;
    // 0x2a47b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a47b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a47b4: 0x108502ad  beq         $a0, $a1, . + 4 + (0x2AD << 2)
    ctx->pc = 0x2A47B4u;
    {
        const bool branch_taken_0x2a47b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a47b4) {
            ctx->pc = 0x2A526Cu;
            goto label_2a526c;
        }
    }
    ctx->pc = 0x2A47BCu;
    // 0x2a47bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a47c0: 0x108301dd  beq         $a0, $v1, . + 4 + (0x1DD << 2)
    ctx->pc = 0x2A47C0u;
    {
        const bool branch_taken_0x2a47c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a47c0) {
            ctx->pc = 0x2A4F38u;
            goto label_2a4f38;
        }
    }
    ctx->pc = 0x2A47C8u;
    // 0x2a47c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a47cc: 0x10830176  beq         $a0, $v1, . + 4 + (0x176 << 2)
    ctx->pc = 0x2A47CCu;
    {
        const bool branch_taken_0x2a47cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a47cc) {
            ctx->pc = 0x2A4DA8u;
            goto label_2a4da8;
        }
    }
    ctx->pc = 0x2A47D4u;
    // 0x2a47d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A47D4u;
    {
        const bool branch_taken_0x2a47d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a47d4) {
            ctx->pc = 0x2A47E4u;
            goto label_2a47e4;
        }
    }
    ctx->pc = 0x2A47DCu;
    // 0x2a47dc: 0x1000034a  b           . + 4 + (0x34A << 2)
    ctx->pc = 0x2A47DCu;
    {
        const bool branch_taken_0x2a47dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a47dc) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A47E4u;
label_2a47e4:
    // 0x2a47e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a47e8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a47ec: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a47ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a47f0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a47f4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a47f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a47f8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a47f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a47fc: 0x24060410  addiu       $a2, $zero, 0x410
    ctx->pc = 0x2a47fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    // 0x2a4800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4808u;
    SET_GPR_U32(ctx, 31, 0x2A4810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4808u, 0x2A4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4810u;
label_2a4810:
    // 0x2a4810: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4814: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x2a4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4818: 0x3c074049  lui         $a3, 0x4049
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16457 << 16));
    // 0x2a481c: 0x34e60fdb  ori         $a2, $a3, 0xFDB
    ctx->pc = 0x2a481cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4059);
    // 0x2a4820: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a4820u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4824: 0x0  nop
    ctx->pc = 0x2a4824u;
    // NOP
    // 0x2a4828: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4828u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a482c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A482Cu;
    SET_GPR_U32(ctx, 31, 0x2A4834u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A482Cu, 0x2A4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4834u;
label_2a4834:
    // 0x2a4834: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a4834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4838: 0xe50000d4  swc1        $f0, 0xD4($t0)
    ctx->pc = 0x2a4838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 212), bits); }
    // 0x2a483c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4840: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4844: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x2a4844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
    // 0x2a4848: 0x3465fa35  ori         $a1, $v1, 0xFA35
    ctx->pc = 0x2a4848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a484c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a484cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4850: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a4854: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a4854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4858: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a4858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a485c: 0x2462dce0  addiu       $v0, $v1, -0x2320
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a4860: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4864: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A4864u;
    SET_GPR_U32(ctx, 31, 0x2A486Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A4864u, 0x2A486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A486Cu;
label_2a486c:
    // 0x2a486c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a4870: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4874: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x2a4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4878: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a487c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a487cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4880: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4880u;
    SET_GPR_U32(ctx, 31, 0x2A4888u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4880u, 0x2A4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4888u;
label_2a4888:
    // 0x2a4888: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a488c: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x2a488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x2a4890: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4894: 0xc4c100d4  lwc1        $f1, 0xD4($a2)
    ctx->pc = 0x2a4894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4898: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x2a4898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x2a489c: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x2a489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2a48a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a48a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a48a4: 0x0  nop
    ctx->pc = 0x2a48a4u;
    // NOP
    // 0x2a48a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a48a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a48ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A48ACu;
    SET_GPR_U32(ctx, 31, 0x2A48B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A48ACu, 0x2A48B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48B4u;
label_2a48b4:
    // 0x2a48b4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a48b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a48b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a48bc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a48c0: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a48c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a48c8: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a48c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a48cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a48ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a48d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a48d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a48d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a48d8: 0x0  nop
    ctx->pc = 0x2a48d8u;
    // NOP
    // 0x2a48dc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a48dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a48e0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a48e4: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a48e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a48e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a48e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a48ec: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a48ecu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a48f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a48f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a48f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a48f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a48f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a48fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a48fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4900: 0x0  nop
    ctx->pc = 0x2a4900u;
    // NOP
    // 0x2a4904: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a4904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a4908: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a4908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a490c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4910: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A4910u;
    SET_GPR_U32(ctx, 31, 0x2A4918u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A4918u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A4918u) { return; }
    ctx->pc = 0x2A4918u;
label_2a4918:
    // 0x2a4918: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4918u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a491c: 0x3c04c2f0  lui         $a0, 0xC2F0
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49904 << 16));
    // 0x2a4920: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a4920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4924: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a4924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4928: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a4928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a492c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4930: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a4930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a4934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4938: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a493c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a493cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a4940: 0x3c03c2f0  lui         $v1, 0xC2F0
    ctx->pc = 0x2a4940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49904 << 16));
    // 0x2a4944: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4948: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a4948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a494c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a494cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4950: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4954: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a4954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a4958: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a495c: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x2a495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2a4960: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2a4960u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4964: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a4964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4968: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2a4968u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2a496c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A496Cu;
    SET_GPR_U32(ctx, 31, 0x2A4974u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A496Cu, 0x2A4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4974u;
label_2a4974:
    // 0x2a4974: 0x3c063c8e  lui         $a2, 0x3C8E
    ctx->pc = 0x2a4974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15502 << 16));
    // 0x2a4978: 0x34c5fa35  ori         $a1, $a2, 0xFA35
    ctx->pc = 0x2a4978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64053);
    // 0x2a497c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a497cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4980: 0x0  nop
    ctx->pc = 0x2a4980u;
    // NOP
    // 0x2a4984: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a4984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4988: 0x3c0742b4  lui         $a3, 0x42B4
    ctx->pc = 0x2a4988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17076 << 16));
    // 0x2a498c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a498cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4990: 0x0  nop
    ctx->pc = 0x2a4990u;
    // NOP
    // 0x2a4994: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a4994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4998: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a499c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a499cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a49a0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A49A0u;
    SET_GPR_U32(ctx, 31, 0x2A49A8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A49A0u, 0x2A49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49A8u;
label_2a49a8:
    // 0x2a49a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a49a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a49ac: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a49acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a49b0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2a49b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a49b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a49b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a49b8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a49b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a49bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a49bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a49c0: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2a49c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2a49c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a49c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a49c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a49c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a49cc: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2a49ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2a49d0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a49d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a49d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a49d8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a49d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a49dc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a49dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a49e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a49e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a49e4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A49E4u;
    SET_GPR_U32(ctx, 31, 0x2A49ECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A49E4u, 0x2A49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49ECu;
label_2a49ec:
    // 0x2a49ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A49ECu;
    SET_GPR_U32(ctx, 31, 0x2A49F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A49ECu, 0x2A49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49F4u;
label_2a49f4:
    // 0x2a49f4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a49f8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a49f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a49fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a49fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a00: 0x0  nop
    ctx->pc = 0x2a4a00u;
    // NOP
    // 0x2a4a04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a4a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4a08: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a4a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a10: 0x0  nop
    ctx->pc = 0x2a4a10u;
    // NOP
    // 0x2a4a14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a4a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4a18: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4a1c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4a1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4a20: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4A20u;
    SET_GPR_U32(ctx, 31, 0x2A4A28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4A20u, 0x2A4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A28u;
label_2a4a28:
    // 0x2a4a28: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a4a2c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4a30: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a4a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4a34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a4a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a4a38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a4a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4a3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a4a40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a4a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a4a44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a4a48: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a4a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4a4c: 0x34860008  ori         $a2, $a0, 0x8
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2a4a50: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4a54: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a4a54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4a58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4a5c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2a4a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4a60: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a4a60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a4a64: 0x8ce90130  lw          $t1, 0x130($a3)
    ctx->pc = 0x2a4a64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x2a4a68: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a4a68u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a4a6c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a4a6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4a70: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A4A70u;
    SET_GPR_U32(ctx, 31, 0x2A4A78u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A4A70u, 0x2A4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A78u;
label_2a4a78:
    // 0x2a4a78: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A4A78u;
    SET_GPR_U32(ctx, 31, 0x2A4A80u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A4A78u, 0x2A4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A80u;
label_2a4a80:
    // 0x2a4a80: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a4a84: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a4a88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a4a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4a8c: 0x0  nop
    ctx->pc = 0x2a4a8cu;
    // NOP
    // 0x2a4a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a4a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a4a94: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a4a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4a9c: 0x0  nop
    ctx->pc = 0x2a4a9cu;
    // NOP
    // 0x2a4aa0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a4aa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4aa4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4aa8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4aa8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4aac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4AACu;
    SET_GPR_U32(ctx, 31, 0x2A4AB4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4AACu, 0x2A4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AB4u;
label_2a4ab4:
    // 0x2a4ab4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a4ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a4ab8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4abc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a4abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4ac0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a4ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a4ac4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a4ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4ac8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2a4ac8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2a4acc: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2a4accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a4ad0: 0x874024  and         $t0, $a0, $a3
    ctx->pc = 0x2a4ad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x2a4ad4: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2a4ad4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a4ad8: 0x352a0008  ori         $t2, $t1, 0x8
    ctx->pc = 0x2a4ad8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8);
    // 0x2a4adc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ae0: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a4ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a4ae4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4ae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4ae8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a4ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4aec: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a4aecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a4af0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a4af0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4af4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A4AF4u;
    SET_GPR_U32(ctx, 31, 0x2A4AFCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A4AF4u, 0x2A4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AFCu;
label_2a4afc:
    // 0x2a4afc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2a4b00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a4b00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b04: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4b08: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a4b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a4b0c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2a4b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2a4b10: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4b14: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x2a4b14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2a4b18: 0x15000088  bnez        $t0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2A4B18u;
    {
        const bool branch_taken_0x2a4b18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b18) {
            ctx->pc = 0x2A4D3Cu;
            goto label_2a4d3c;
        }
    }
    ctx->pc = 0x2A4B20u;
    // 0x2a4b20: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a4b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4b24: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a4b24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a4b28: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4B28u;
    SET_GPR_U32(ctx, 31, 0x2A4B30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4B28u, 0x2A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B30u;
label_2a4b30:
    // 0x2a4b30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4b34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4B34u;
    SET_GPR_U32(ctx, 31, 0x2A4B3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4B34u, 0x2A4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B3Cu;
label_2a4b3c:
    // 0x2a4b3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4b40: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4B40u;
    SET_GPR_U32(ctx, 31, 0x2A4B48u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4B40u, 0x2A4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B48u;
label_2a4b48:
    // 0x2a4b48: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x2a4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x2a4b4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a4b4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b50: 0x0  nop
    ctx->pc = 0x2a4b50u;
    // NOP
    // 0x2a4b54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a4b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a4b58: 0x3c0541c0  lui         $a1, 0x41C0
    ctx->pc = 0x2a4b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16832 << 16));
    // 0x2a4b5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a4b5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b60: 0x0  nop
    ctx->pc = 0x2a4b60u;
    // NOP
    // 0x2a4b64: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a4b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a4b68: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x2a4b68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x2a4b6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a4b6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b70: 0x0  nop
    ctx->pc = 0x2a4b70u;
    // NOP
    // 0x2a4b74: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a4b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a4b78: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x2a4b78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x2a4b7c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a4b7cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b80: 0x0  nop
    ctx->pc = 0x2a4b80u;
    // NOP
    // 0x2a4b84: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a4b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a4b88: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2a4b88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4b8c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a4b8cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b90: 0x0  nop
    ctx->pc = 0x2a4b90u;
    // NOP
    // 0x2a4b94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a4b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a4b98: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2a4b98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4b9c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a4b9cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4ba0: 0x0  nop
    ctx->pc = 0x2a4ba0u;
    // NOP
    // 0x2a4ba4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a4ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a4ba8: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x2a4ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4bac: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2a4bacu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4bb0: 0x0  nop
    ctx->pc = 0x2a4bb0u;
    // NOP
    // 0x2a4bb4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a4bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a4bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4bc0: 0x0  nop
    ctx->pc = 0x2a4bc0u;
    // NOP
    // 0x2a4bc4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a4bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a4bc8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4bcc: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4bd0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4bd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4bd4: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4bd8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4bd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4bdc: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4be0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a4be0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4be4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a4be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4be8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a4be8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4bec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4bf0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4bf4: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4bf8: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4bfc: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4c00: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4C00u;
    SET_GPR_U32(ctx, 31, 0x2A4C08u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4C00u, 0x2A4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C08u;
label_2a4c08:
    // 0x2a4c08: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4c0c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4c0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4c10: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a4c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4c14: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a4c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a4c18: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a4c18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4c1c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4c20: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a4c20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4c24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a4c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a4c28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4c2c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4c30: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4c34: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4c38: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4c3c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C44u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4C3Cu, 0x2A4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C44u;
label_2a4c44:
    // 0x2a4c44: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4c48: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x2a4c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4c4c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a4c4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4c50: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4c54: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4c58: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4c5c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a4c5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a4c60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2a4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4c64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4c68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4c6c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4c70: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4c74: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4c78: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4c7c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4C7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4C84u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4C7Cu, 0x2A4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C84u;
label_2a4c84:
    // 0x2a4c84: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4c88: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4c8c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4c8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4c90: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4c94: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a4c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4c98: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4c9c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a4c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a4ca0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4ca4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4ca8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4cac: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4cb0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4cb4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4CB4u;
    SET_GPR_U32(ctx, 31, 0x2A4CBCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4CB4u, 0x2A4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CBCu;
label_2a4cbc:
    // 0x2a4cbc: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4cc0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a4cc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4cc4: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a4cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4cc8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a4cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a4ccc: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a4cccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4cd0: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4cd4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a4cd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4cd8: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a4cdc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a4cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a4ce0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4ce4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4ce8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4cec: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4cf0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4cf4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4CF4u;
    SET_GPR_U32(ctx, 31, 0x2A4CFCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4CF4u, 0x2A4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CFCu;
label_2a4cfc:
    // 0x2a4cfc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a4d00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a4d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4d04: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4d08: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a4d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4d0c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a4d0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4d10: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d14: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4d18: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4d1c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4d20: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4d24: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a4d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4d28: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4d2c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D34u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4D2Cu, 0x2A4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D34u;
label_2a4d34:
    // 0x2a4d34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A4D34u;
    {
        const bool branch_taken_0x2a4d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d34) {
            ctx->pc = 0x2A4DA8u;
            goto label_2a4da8;
        }
    }
    ctx->pc = 0x2A4D3Cu;
label_2a4d3c:
    // 0x2a4d3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d40: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4D40u;
    SET_GPR_U32(ctx, 31, 0x2A4D48u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4D40u, 0x2A4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D48u;
label_2a4d48:
    // 0x2a4d48: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d4c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4d50: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d58: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4D58u;
    SET_GPR_U32(ctx, 31, 0x2A4D60u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4D58u, 0x2A4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D60u;
label_2a4d60:
    // 0x2a4d60: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d64: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a4d68: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d70: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4D70u;
    SET_GPR_U32(ctx, 31, 0x2A4D78u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4D70u, 0x2A4D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D78u;
label_2a4d78:
    // 0x2a4d78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d7c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a4d80: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d88: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4D88u;
    SET_GPR_U32(ctx, 31, 0x2A4D90u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4D88u, 0x2A4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D90u;
label_2a4d90:
    // 0x2a4d90: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4d94: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4d98: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a4d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4da0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4DA0u;
    SET_GPR_U32(ctx, 31, 0x2A4DA8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4DA0u, 0x2A4DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DA8u;
label_2a4da8:
    // 0x2a4da8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4dac: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a4dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4db0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2a4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2a4db4: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x2a4db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2a4db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4dbc: 0x0  nop
    ctx->pc = 0x2a4dbcu;
    // NOP
    // 0x2a4dc0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4dc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4dc4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4DC4u;
    SET_GPR_U32(ctx, 31, 0x2A4DCCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4DC4u, 0x2A4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DCCu;
label_2a4dcc:
    // 0x2a4dcc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4dd0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a4dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a4dd4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4dd8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ddc: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2a4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2a4de0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a4de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a4de4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4de8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4dec: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a4decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4df0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a4df4: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a4df8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A4DF8u;
    SET_GPR_U32(ctx, 31, 0x2A4E00u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A4DF8u, 0x2A4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E00u;
label_2a4e00:
    // 0x2a4e00: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a4e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a4e04: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e08: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4e0c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a4e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e10: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a4e10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4e14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4E14u;
    SET_GPR_U32(ctx, 31, 0x2A4E1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4E14u, 0x2A4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E1Cu;
label_2a4e1c:
    // 0x2a4e1c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e20: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a4e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a4e24: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e28: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4e2c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x2a4e30: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2a4e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2a4e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4e38: 0x0  nop
    ctx->pc = 0x2a4e38u;
    // NOP
    // 0x2a4e3c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a4e3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4e40: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4E40u;
    SET_GPR_U32(ctx, 31, 0x2A4E48u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4E40u, 0x2A4E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E48u;
label_2a4e48:
    // 0x2a4e48: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e4c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a4e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a4e50: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e54: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a4e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4e58: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A4E58u;
    SET_GPR_U32(ctx, 31, 0x2A4E60u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A4E58u, 0x2A4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E60u;
label_2a4e60:
    // 0x2a4e60: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4e60u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4e64: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e68: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e6c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e70: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4e74: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a4e78: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a4e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a4e7c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4E7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E84u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4E7Cu, 0x2A4E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E84u;
label_2a4e84:
    // 0x2a4e84: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4e8c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E94u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4E8Cu, 0x2A4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E94u;
label_2a4e94:
    // 0x2a4e94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4e94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4e98: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e9c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A4EA4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4E9Cu, 0x2A4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EA4u;
label_2a4ea4:
    // 0x2a4ea4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4ea4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4ea8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4eac: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A4EACu;
    SET_GPR_U32(ctx, 31, 0x2A4EB4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A4EACu, 0x2A4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EB4u;
label_2a4eb4:
    // 0x2a4eb4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4eb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4eb8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ebc: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4ec0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4ec4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4ec8: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a4ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4ecc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4ed0: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a4ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a4ed4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ed8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4edc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4ee4: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4eec: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a4ef0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ef4: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2a4ef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2a4ef8: 0x10a00183  beqz        $a1, . + 4 + (0x183 << 2)
    ctx->pc = 0x2A4EF8u;
    {
        const bool branch_taken_0x2a4ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ef8) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A4F00u;
    // 0x2a4f00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a4f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4f04: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f08: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x2a4f08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a4f0c: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f10: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4f14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4f18: 0x8d050368  lw          $a1, 0x368($t0)
    ctx->pc = 0x2a4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x2a4f1c: 0x24060411  addiu       $a2, $zero, 0x411
    ctx->pc = 0x2a4f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x2a4f20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4f24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4f28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4F28u;
    SET_GPR_U32(ctx, 31, 0x2A4F30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4F28u, 0x2A4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F30u;
label_2a4f30:
    // 0x2a4f30: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x2A4F30u;
    {
        const bool branch_taken_0x2a4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f30) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A4F38u;
label_2a4f38:
    // 0x2a4f38: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a4f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f3c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a4f3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a4f40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4f44: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A4F44u;
    SET_GPR_U32(ctx, 31, 0x2A4F4Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A4F44u, 0x2A4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F4Cu;
label_2a4f4c:
    // 0x2a4f4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4f4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4f50: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f54: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4f60: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a4f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a4f64: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a4f68: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4F68u;
    SET_GPR_U32(ctx, 31, 0x2A4F70u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4F68u, 0x2A4F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F70u;
label_2a4f70:
    // 0x2a4f70: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4f74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4f78: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4F78u;
    SET_GPR_U32(ctx, 31, 0x2A4F80u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4F78u, 0x2A4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F80u;
label_2a4f80:
    // 0x2a4f80: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f84: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4F84u;
    SET_GPR_U32(ctx, 31, 0x2A4F8Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4F84u, 0x2A4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F8Cu;
label_2a4f8c:
    // 0x2a4f8c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f90: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4f94: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2a4f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f98: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f9c: 0xc4a00184  lwc1        $f0, 0x184($a1)
    ctx->pc = 0x2a4f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4fa0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a4fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a4fa4: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a4fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a4fa8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4fac: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2a4facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4fb0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2a4fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4fb4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2a4fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4fbc: 0x0  nop
    ctx->pc = 0x2a4fbcu;
    // NOP
    // 0x2a4fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a4fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4fc4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2a4fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2a4fc8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4fcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4fd0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a4fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4fd4: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4fd8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4fdc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4fdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4fe0: 0x0  nop
    ctx->pc = 0x2a4fe0u;
    // NOP
    // 0x2a4fe4: 0x45000148  bc1f        . + 4 + (0x148 << 2)
    ctx->pc = 0x2A4FE4u;
    {
        const bool branch_taken_0x2a4fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4fe4) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A4FECu;
    // 0x2a4fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4ff0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ff4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4ff8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ffc: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5000: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a5004: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2a5004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a5008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a500c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a500cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5010: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A5010u;
    SET_GPR_U32(ctx, 31, 0x2A5018u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5010u, 0x2A5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5018u;
label_2a5018:
    // 0x2a5018: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a501c: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2a501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a5020: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2A5020u;
    {
        const bool branch_taken_0x2a5020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5020) {
            ctx->pc = 0x2A51CCu;
            goto label_2a51cc;
        }
    }
    ctx->pc = 0x2A5028u;
    // 0x2a5028: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a502c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A502Cu;
    SET_GPR_U32(ctx, 31, 0x2A5034u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A502Cu, 0x2A5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5034u;
label_2a5034:
    // 0x2a5034: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a5034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5038: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5038u;
    SET_GPR_U32(ctx, 31, 0x2A5040u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5038u, 0x2A5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5040u;
label_2a5040:
    // 0x2a5040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5044: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5048: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a504c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A504Cu;
    SET_GPR_U32(ctx, 31, 0x2A5054u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A504Cu, 0x2A5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5054u;
label_2a5054:
    // 0x2a5054: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a5054u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5058: 0x3c074200  lui         $a3, 0x4200
    ctx->pc = 0x2a5058u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16896 << 16));
    // 0x2a505c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a505cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5060: 0x0  nop
    ctx->pc = 0x2a5060u;
    // NOP
    // 0x2a5064: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2a5064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2a5068: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a506c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5070: 0x0  nop
    ctx->pc = 0x2a5070u;
    // NOP
    // 0x2a5074: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2a5074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2a5078: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a5078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5080: 0x0  nop
    ctx->pc = 0x2a5080u;
    // NOP
    // 0x2a5084: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2a5084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2a5088: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a5088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a508c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a508cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a5090: 0x0  nop
    ctx->pc = 0x2a5090u;
    // NOP
    // 0x2a5094: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2a5094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2a5098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a5098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a509c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a509cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50a0: 0x0  nop
    ctx->pc = 0x2a50a0u;
    // NOP
    // 0x2a50a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2a50a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2a50a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a50ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a50acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50b0: 0x0  nop
    ctx->pc = 0x2a50b0u;
    // NOP
    // 0x2a50b4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2a50b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2a50b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a50bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a50bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50c0: 0x0  nop
    ctx->pc = 0x2a50c0u;
    // NOP
    // 0x2a50c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2a50c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2a50c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a50cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a50ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a50d0: 0x0  nop
    ctx->pc = 0x2a50d0u;
    // NOP
    // 0x2a50d4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2a50d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2a50d8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a50dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a50dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a50e0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a50e4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a50e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a50e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a50e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a50ec: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a50f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a50f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a50f4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a50f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a50f8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a50f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a50fc: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5100: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a5100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5104: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5108: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5108u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a510c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A510Cu;
    SET_GPR_U32(ctx, 31, 0x2A5114u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A510Cu, 0x2A5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5114u;
label_2a5114:
    // 0x2a5114: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a5114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5118: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a5118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a511c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5120: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a5124: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a5124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5128: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a512c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5130: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a5130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a5134: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a5134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5138: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a5138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a513c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a513cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5140: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a5140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a5144: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5144u;
    SET_GPR_U32(ctx, 31, 0x2A514Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5144u, 0x2A514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A514Cu;
label_2a514c:
    // 0x2a514c: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a514cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5150: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a5150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a5154: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a5154u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5158: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a515c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a515cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a5160: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5164: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5168: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a5168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a516c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a516cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5170: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a5170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a5174: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a5174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a5178: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a5178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a517c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a517cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5180: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A5180u;
    SET_GPR_U32(ctx, 31, 0x2A5188u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A5180u, 0x2A5188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5188u;
label_2a5188:
    // 0x2a5188: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5188u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a518c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a518cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a5190: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a5190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a5194: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a5194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a5198: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a519c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a519cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a51a0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a51a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a51a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a51a8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a51ac: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2a51acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a51b0: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x2a51b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a51b4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a51b8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2a51b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a51bc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A51BCu;
    SET_GPR_U32(ctx, 31, 0x2A51C4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A51BCu, 0x2A51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51C4u;
label_2a51c4:
    // 0x2a51c4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2A51C4u;
    {
        const bool branch_taken_0x2a51c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a51c4) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A51CCu;
label_2a51cc:
    // 0x2a51cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a51d0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A51D0u;
    SET_GPR_U32(ctx, 31, 0x2A51D8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A51D0u, 0x2A51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51D8u;
label_2a51d8:
    // 0x2a51d8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a51dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a51dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a51e0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a51e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a51e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a51e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a51e8: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A51E8u;
    SET_GPR_U32(ctx, 31, 0x2A51F0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A51E8u, 0x2A51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A51F0u;
label_2a51f0:
    // 0x2a51f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a51f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a51f4: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a51f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a51f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a51f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a51fc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a51fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5200: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a5200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5204: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a5204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5208: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a5208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a520c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a520cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5210: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a5210u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a5214: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5214u;
    SET_GPR_U32(ctx, 31, 0x2A521Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5214u, 0x2A521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A521Cu;
label_2a521c:
    // 0x2a521c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5220: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5224: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a5224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a5228: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a522c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A522Cu;
    SET_GPR_U32(ctx, 31, 0x2A5234u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A522Cu, 0x2A5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5234u;
label_2a5234:
    // 0x2a5234: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a5234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5238: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a5238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a523c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a523cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5240: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2a5240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a5244: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5248: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x2a5248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a524c: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a524cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5250: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a5250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5254: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a5254u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a5258: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5258u;
    SET_GPR_U32(ctx, 31, 0x2A5260u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5258u, 0x2A5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5260u;
label_2a5260:
    // 0x2a5260: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5260u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5264: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2A5264u;
    {
        const bool branch_taken_0x2a5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5264) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A526Cu;
label_2a526c:
    // 0x2a526c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5270: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5274: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a5274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a5278: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5278u;
    SET_GPR_U32(ctx, 31, 0x2A5280u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5278u, 0x2A5280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5280u;
label_2a5280:
    // 0x2a5280: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5284: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5288: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a528c: 0x24860120  addiu       $a2, $a0, 0x120
    ctx->pc = 0x2a528cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a5290: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a5290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a5294: 0x24670120  addiu       $a3, $v1, 0x120
    ctx->pc = 0x2a5294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a5298: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a5298u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a529c: 0x24480180  addiu       $t0, $v0, 0x180
    ctx->pc = 0x2a529cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a52a0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a52a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a52a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A52A4u;
    SET_GPR_U32(ctx, 31, 0x2A52ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A52A4u, 0x2A52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52ACu;
label_2a52ac:
    // 0x2a52ac: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a52acu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a52b0: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a52b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52b4: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a52b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a52b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a52b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a52bc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A52BCu;
    SET_GPR_U32(ctx, 31, 0x2A52C4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A52BCu, 0x2A52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52C4u;
label_2a52c4:
    // 0x2a52c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a52c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52c8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A52C8u;
    SET_GPR_U32(ctx, 31, 0x2A52D0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A52C8u, 0x2A52D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A52D0u;
label_2a52d0:
    // 0x2a52d0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52d4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2a52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2a52d8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a52d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a52dc: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x2a52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a52e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a52e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a52e4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a52e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a52e8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a52e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a52ec: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2a52ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x2a52f0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a52f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a52f4: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a52f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a52f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a52fc: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a52fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a5300: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a5300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5304: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x2a5304u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x2a5308: 0x1100007f  beqz        $t0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2A5308u;
    {
        const bool branch_taken_0x2a5308 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5308) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A5310u;
    // 0x2a5310: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a5310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a5314: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a5314u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5318: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a5318u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a531c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5320: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5324: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a5324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a5328: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2a5328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a532c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a532cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5330: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a5330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5334: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A5334u;
    SET_GPR_U32(ctx, 31, 0x2A533Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A5334u, 0x2A533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A533Cu;
label_2a533c:
    // 0x2a533c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a533cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5340: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2A5340u;
    {
        const bool branch_taken_0x2a5340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5340) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A5348u;
label_2a5348:
    // 0x2a5348: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a5348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a534c: 0xa0e010a8  sb          $zero, 0x10A8($a3)
    ctx->pc = 0x2a534cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5350: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a5350u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5354: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a5354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5358: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2a5358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a535c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a535cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a5360: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A5360u;
    SET_GPR_U32(ctx, 31, 0x2A5368u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A5360u, 0x2A5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5368u;
label_2a5368:
    // 0x2a5368: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a5368u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a536c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5370: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a5370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5374: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5374u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5378: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A5378u;
    SET_GPR_U32(ctx, 31, 0x2A5380u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A5378u, 0x2A5380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5380u;
label_2a5380:
    // 0x2a5380: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a5380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5384: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A5384u;
    SET_GPR_U32(ctx, 31, 0x2A538Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A5384u, 0x2A538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A538Cu;
label_2a538c:
    // 0x2a538c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5390: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2a5390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2a5394: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A5394u;
    {
        const bool branch_taken_0x2a5394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5394) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A539Cu;
    // 0x2a539c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53a0: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a53a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53a4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a53a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a53a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a53a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53ac: 0x8fa90108  lw          $t1, 0x108($sp)
    ctx->pc = 0x2a53acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53b0: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a53b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a53b4: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a53b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53b8: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a53b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a53bc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53c0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a53c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a53c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a53cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A53CCu;
    SET_GPR_U32(ctx, 31, 0x2A53D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A53CCu, 0x2A53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A53D4u;
label_2a53d4:
    // 0x2a53d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a53d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a53d8: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x2a53d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2a53dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a53dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a53e0: 0x14a60016  bne         $a1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A53E0u;
    {
        const bool branch_taken_0x2a53e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2a53e0) {
            ctx->pc = 0x2A543Cu;
            goto label_2a543c;
        }
    }
    ctx->pc = 0x2A53E8u;
    // 0x2a53e8: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a53e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a53ec: 0xc4e11288  lwc1        $f1, 0x1288($a3)
    ctx->pc = 0x2a53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a53f0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2a53f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a53f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a53f8: 0x0  nop
    ctx->pc = 0x2a53f8u;
    // NOP
    // 0x2a53fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a53fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a5400: 0x0  nop
    ctx->pc = 0x2a5400u;
    // NOP
    // 0x2a5404: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A5404u;
    {
        const bool branch_taken_0x2a5404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a5404) {
            ctx->pc = 0x2A543Cu;
            goto label_2a543c;
        }
    }
    ctx->pc = 0x2A540Cu;
    // 0x2a540c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5410: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a5410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5414: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2a5414u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a5418: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a5418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a541c: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a541cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5420: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x2a5420u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a5424: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5428: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a5428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a542c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5430: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a5430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5434: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a5434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5438: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a5438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2a543c:
    // 0x2a543c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5440: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a5440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a5444: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a5448: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x2a5448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a544c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A544Cu;
    {
        const bool branch_taken_0x2a544c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a544c) {
            ctx->pc = 0x2A54A4u;
            goto label_2a54a4;
        }
    }
    ctx->pc = 0x2A5454u;
    // 0x2a5454: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A5454u;
    SET_GPR_U32(ctx, 31, 0x2A545Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A5454u, 0x2A545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A545Cu;
label_2a545c:
    // 0x2a545c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a545cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5460: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a5460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a5464: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x2a5464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2a5468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a546c: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A546Cu;
    {
        const bool branch_taken_0x2a546c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a546c) {
            ctx->pc = 0x2A54A4u;
            goto label_2a54a4;
        }
    }
    ctx->pc = 0x2A5474u;
    // 0x2a5474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5478: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a547c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a547cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5480: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a5480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a5484: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5488: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a5488u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a548c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5490: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a5490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5494: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5498: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a5498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a549c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a54a4:
    // 0x2a54a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A54A4u;
    SET_GPR_U32(ctx, 31, 0x2A54ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A54A4u, 0x2A54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54ACu;
label_2a54ac:
    // 0x2a54ac: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a54acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a54b0: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2a54b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2a54b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a54b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a54b8: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A54B8u;
    {
        const bool branch_taken_0x2a54b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a54b8) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A54C0u;
    // 0x2a54c0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a54c8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2a54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a54cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2a54ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2a54d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A54D0u;
    {
        const bool branch_taken_0x2a54d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a54d0) {
            ctx->pc = 0x2A5508u;
            goto label_2a5508;
        }
    }
    ctx->pc = 0x2A54D8u;
    // 0x2a54d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a54dc: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a54dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a54e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a54e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2a54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a54e8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54ec: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2a54ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a54f0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a54f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a54f8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54fc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a54fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5500: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5504: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a5504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a5508:
    // 0x2a5508: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a5508u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a550c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2a550cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a5510: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5518u;
}
