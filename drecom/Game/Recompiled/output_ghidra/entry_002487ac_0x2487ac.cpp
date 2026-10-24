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

// Function: entry_002487ac
// Address: 0x2487ac - 0x248910
void entry_002487ac_0x2487ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002487ac_0x2487ac");
#endif

    switch (ctx->pc) {
        case 0x2487d8u: goto label_2487d8;
        case 0x2487f4u: goto label_2487f4;
        case 0x24880cu: goto label_24880c;
        case 0x248818u: goto label_248818;
        case 0x248860u: goto label_248860;
        case 0x248884u: goto label_248884;
        case 0x2488acu: goto label_2488ac;
        case 0x2488f4u: goto label_2488f4;
        default: break;
    }

    ctx->pc = 0x2487acu;

    // 0x2487ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2487b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2487b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2487b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2487bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2487bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2487c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2487c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2487c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2487c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2487c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2487c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2487cc: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2487ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2487d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2487D0u;
    SET_GPR_U32(ctx, 31, 0x2487D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2487D0u, 0x2487D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487D8u;
label_2487d8:
    // 0x2487d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2487d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2487dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2487dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2487e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2487e4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2487e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2487e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2487e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2487ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2487ECu;
    SET_GPR_U32(ctx, 31, 0x2487F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2487ECu, 0x2487F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487F4u;
label_2487f4:
    // 0x2487f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2487f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2487f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2487f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2487fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2487fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248800: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x248800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x248804: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x248804u;
    SET_GPR_U32(ctx, 31, 0x24880Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x248804u, 0x24880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24880Cu;
label_24880c:
    // 0x24880c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x24880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248810: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x248810u;
    SET_GPR_U32(ctx, 31, 0x248818u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x248810u, 0x248818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248818u;
label_248818:
    // 0x248818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24881c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x24881cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x248820: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x248820u;
    {
        const bool branch_taken_0x248820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248820) {
            ctx->pc = 0x248910u;
            return;
        }
    }
    ctx->pc = 0x248828u;
    // 0x248828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24882c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248830: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x248830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x248834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24883c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x24883cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x248840: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248844: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x248844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x248848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24884c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x24884cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x248850: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248854: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x248854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x248858: 0xc067694  jal         func_19DA50
    ctx->pc = 0x248858u;
    SET_GPR_U32(ctx, 31, 0x248860u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x248858u, 0x248860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248860u;
label_248860:
    // 0x248860: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248864: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x248864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x248868: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x248868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x24886c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x24886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248874: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x248878: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x248878u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x24887c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24887Cu;
    SET_GPR_U32(ctx, 31, 0x248884u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24887Cu, 0x248884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248884u;
label_248884:
    // 0x248884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x248884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248888: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x248888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x24888c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x24888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x248890: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x248890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x248894: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x248894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x248898: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x248898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24889c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2488a0: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x2488a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x2488a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2488A4u;
    SET_GPR_U32(ctx, 31, 0x2488ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2488A4u, 0x2488ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488ACu;
label_2488ac:
    // 0x2488ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2488acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2488b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2488b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2488b4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2488B4u;
    {
        const bool branch_taken_0x2488b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2488b4) {
            ctx->pc = 0x248910u;
            return;
        }
    }
    ctx->pc = 0x2488BCu;
    // 0x2488bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2488bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2488c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2488c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2488c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2488cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2488d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2488d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2488d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2488dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2488e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2488e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2488e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2488e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2488e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2488ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2488ECu;
    SET_GPR_U32(ctx, 31, 0x2488F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2488ECu, 0x2488F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488F4u;
label_2488f4:
    // 0x2488f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2488f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2488f8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2488f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2488fc: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x2488fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x248900: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x248900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x248904: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x248904u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x248908: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x248908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24890c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x24890cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x248910u;
}
