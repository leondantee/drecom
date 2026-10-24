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

// Function: entry_00245594
// Address: 0x245594 - 0x2456ac
void entry_00245594_0x245594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245594_0x245594");
#endif

    switch (ctx->pc) {
        case 0x2455c0u: goto label_2455c0;
        case 0x2455dcu: goto label_2455dc;
        case 0x2455f4u: goto label_2455f4;
        case 0x245600u: goto label_245600;
        case 0x245648u: goto label_245648;
        case 0x24566cu: goto label_24566c;
        default: break;
    }

    ctx->pc = 0x245594u;

    // 0x245594: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245598: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x245598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24559c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2455a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2455a8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2455a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2455ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2455acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2455b0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2455b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2455b4: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x2455b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2455b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2455B8u;
    SET_GPR_U32(ctx, 31, 0x2455C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2455B8u, 0x2455C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455C0u;
label_2455c0:
    // 0x2455c0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2455c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2455c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2455c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2455c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2455cc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2455ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2455d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2455d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2455D4u;
    SET_GPR_U32(ctx, 31, 0x2455DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2455D4u, 0x2455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455DCu;
label_2455dc:
    // 0x2455dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2455e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2455e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2455e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2455e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2455ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2455ECu;
    SET_GPR_U32(ctx, 31, 0x2455F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2455ECu, 0x2455F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455F4u;
label_2455f4:
    // 0x2455f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2455f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2455F8u;
    SET_GPR_U32(ctx, 31, 0x245600u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2455F8u, 0x245600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245600u;
label_245600:
    // 0x245600: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245604: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x245604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x245608: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x245608u;
    {
        const bool branch_taken_0x245608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245608) {
            ctx->pc = 0x2456ACu;
            return;
        }
    }
    ctx->pc = 0x245610u;
    // 0x245610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245614: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245618: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x24561c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24561cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245624: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24562c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x24562cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x245630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245634: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x245634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x245638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24563c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24563cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x245640: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245640u;
    SET_GPR_U32(ctx, 31, 0x245648u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245640u, 0x245648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245648u;
label_245648:
    // 0x245648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24564c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x24564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x245650: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x245650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x245654: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x245654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x245658: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x245658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x24565c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245660: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x245660u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x245664: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245664u;
    SET_GPR_U32(ctx, 31, 0x24566Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245664u, 0x24566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24566Cu;
label_24566c:
    // 0x24566c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245670: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x245670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x245674: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x245674u;
    {
        const bool branch_taken_0x245674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245674) {
            ctx->pc = 0x2456ACu;
            return;
        }
    }
    ctx->pc = 0x24567Cu;
    // 0x24567c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24567cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245680: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245684: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x245684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x245688: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x245688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24568c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245690: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x245690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x245694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x245694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x245698: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x245698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24569c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2456a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2456a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2456a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2456a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2456acu;
}
