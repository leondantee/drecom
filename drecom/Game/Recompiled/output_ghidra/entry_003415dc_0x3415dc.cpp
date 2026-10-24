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

// Function: entry_003415dc
// Address: 0x3415dc - 0x341718
void entry_003415dc_0x3415dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003415dc_0x3415dc");
#endif

    switch (ctx->pc) {
        case 0x341624u: goto label_341624;
        case 0x341638u: goto label_341638;
        case 0x341688u: goto label_341688;
        default: break;
    }

    ctx->pc = 0x3415dcu;

    // 0x3415dc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3415dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3415e0: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x3415e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415e4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3415e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3415e8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3415e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3415ec: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x3415ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415f0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x3415f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x3415f4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3415f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3415f8: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x3415f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3415fc: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x3415fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x341600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341608: 0x0  nop
    ctx->pc = 0x341608u;
    // NOP
    // 0x34160c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x341610: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341614: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x341614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341618: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x341618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x34161c: 0xc040c44  jal         func_103110
    ctx->pc = 0x34161Cu;
    SET_GPR_U32(ctx, 31, 0x341624u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x341624u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341624u) { return; }
    ctx->pc = 0x341624u;
label_341624:
    // 0x341624: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x341624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341628: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x341628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34162c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x34162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341630: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341630u;
    SET_GPR_U32(ctx, 31, 0x341638u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x341638u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341638u) { return; }
    ctx->pc = 0x341638u;
label_341638:
    // 0x341638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34163c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34163cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341640: 0x0  nop
    ctx->pc = 0x341640u;
    // NOP
    // 0x341644: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x341644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x341648: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34164c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34164cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x341650: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x341650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x341654: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x341654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x341658: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x341658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x34165c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x341660: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x341660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x341664: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x341664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x341668: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x341668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34166c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341670: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341674: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x341674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341678: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x341678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x34167c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34167cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341680: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x341680u;
    SET_GPR_U32(ctx, 31, 0x341688u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x341680u, 0x341688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341688u;
label_341688:
    // 0x341688: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34168c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x34168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x341690: 0x24520360  addiu       $s2, $v0, 0x360
    ctx->pc = 0x341690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x341694: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x341694u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x341698: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x341698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x34169c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x34169cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3416a0: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x3416a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x3416a4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3416a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416a8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x3416a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3416ac: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x3416acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x3416b0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3416b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416b4: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x3416b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416b8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3416b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3416bc: 0x8fb40128  lw          $s4, 0x128($sp)
    ctx->pc = 0x3416bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416c0: 0xc6801204  lwc1        $f0, 0x1204($s4)
    ctx->pc = 0x3416c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416c4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x3416c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x3416c8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3416c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416cc: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x3416ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3416d0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3416d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3416d4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3416d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416d8: 0x946211f6  lhu         $v0, 0x11F6($v1)
    ctx->pc = 0x3416d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x3416dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3416dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3416e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3416e4: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x3416e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x3416e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3416e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3416ec: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3416ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3416f0: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x3416f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3416f4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3416f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3416f8: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x3416f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3416fc: 0x8462006a  lh          $v0, 0x6A($v1)
    ctx->pc = 0x3416fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x341700: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x341700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x341704: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x341704u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x341708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34170c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x34170cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341710: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x341710u;
    {
        const bool branch_taken_0x341710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341710) {
            ctx->pc = 0x341834u;
            return;
        }
    }
    ctx->pc = 0x341718u;
}
