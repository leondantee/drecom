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

// Function: entry_0023f5f4
// Address: 0x23f5f4 - 0x23f6ec
void entry_0023f5f4_0x23f5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f5f4_0x23f5f4");
#endif

    switch (ctx->pc) {
        case 0x23f620u: goto label_23f620;
        case 0x23f63cu: goto label_23f63c;
        case 0x23f654u: goto label_23f654;
        case 0x23f660u: goto label_23f660;
        case 0x23f6a8u: goto label_23f6a8;
        case 0x23f6ccu: goto label_23f6cc;
        default: break;
    }

    ctx->pc = 0x23f5f4u;

    // 0x23f5f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f5f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x23f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f5fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f600: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f604: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23f608: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23f60c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23f610: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23f614: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23f618: 0xc05c848  jal         func_172120
    ctx->pc = 0x23F618u;
    SET_GPR_U32(ctx, 31, 0x23F620u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23F618u, 0x23F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F620u;
label_23f620:
    // 0x23f620: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23f624: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f628: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f62c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f630: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23f630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f634: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23F634u;
    SET_GPR_U32(ctx, 31, 0x23F63Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23F634u, 0x23F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F63Cu;
label_23f63c:
    // 0x23f63c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f640: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23f644: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f648: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23f64c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23F64Cu;
    SET_GPR_U32(ctx, 31, 0x23F654u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23F64Cu, 0x23F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F654u;
label_23f654:
    // 0x23f654: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f658: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23F658u;
    SET_GPR_U32(ctx, 31, 0x23F660u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23F658u, 0x23F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F660u;
label_23f660:
    // 0x23f660: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f664: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23f664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23f668: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x23F668u;
    {
        const bool branch_taken_0x23f668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f668) {
            ctx->pc = 0x23F6ECu;
            return;
        }
    }
    ctx->pc = 0x23F670u;
    // 0x23f670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f678: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23f678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f67c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f680: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f684: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23f684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f68c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23f68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f694: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23f694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f69c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23f6a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F6A0u;
    SET_GPR_U32(ctx, 31, 0x23F6A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F6A0u, 0x23F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6A8u;
label_23f6a8:
    // 0x23f6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f6ac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23f6b0: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x23f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x23f6b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23f6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23f6b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23f6b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23f6bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f6c0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23f6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f6c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F6C4u;
    SET_GPR_U32(ctx, 31, 0x23F6CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F6C4u, 0x23F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6CCu;
label_23f6cc:
    // 0x23f6cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23f6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f6d0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23f6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23f6d4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x23f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23f6d8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23f6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23f6dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23f6dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23f6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f6e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f6e8: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23f6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23f6ecu;
}
