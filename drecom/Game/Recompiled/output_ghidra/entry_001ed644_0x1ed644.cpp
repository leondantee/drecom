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

// Function: entry_001ed644
// Address: 0x1ed644 - 0x1ed760
void entry_001ed644_0x1ed644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed644_0x1ed644");
#endif

    switch (ctx->pc) {
        case 0x1ed694u: goto label_1ed694;
        case 0x1ed69cu: goto label_1ed69c;
        default: break;
    }

    ctx->pc = 0x1ed644u;

    // 0x1ed644: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ed644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ed648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed650: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed654: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed658: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ed658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ed65c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1ed660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ed660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ed664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed66c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed670: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ed670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ed674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed678: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ed678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed67c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ed680: 0x24067804  addiu       $a2, $zero, 0x7804
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30724));
    // 0x1ed684: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed688: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ed688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ed68c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1ED68Cu;
    SET_GPR_U32(ctx, 31, 0x1ED694u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1ED68Cu, 0x1ED694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED694u;
label_1ed694:
    // 0x1ed694: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED694u;
    SET_GPR_U32(ctx, 31, 0x1ED69Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED694u, 0x1ED69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED69Cu;
label_1ed69c:
    // 0x1ed69c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ed69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed6a0: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x1ed6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x1ed6a4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1ed6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1ed6a8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1ed6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ed6ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed6acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed6b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6b4: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ed6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed6b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ed6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed6c0: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ed6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ed6c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ed6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ed6c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ed6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ed6cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED6CCu;
    {
        const bool branch_taken_0x1ed6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6cc) {
            ctx->pc = 0x1ED760u;
            return;
        }
    }
    ctx->pc = 0x1ED6D4u;
    // 0x1ed6d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed6dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed6e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed6e4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1ed6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed6e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed6ec: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ed6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ed6f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed6f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed6f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed6fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed700: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1ed700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed708: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ed708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ed70c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed710: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed714: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed718: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed71c: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1ed71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed724: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ed724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1ed728: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed72c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed730: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ed730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1ed734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed738: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1ed738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed73c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed73cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed740: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ed740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ed744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ed744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed748: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ed748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ed74c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ed74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ed750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed754: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ed754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed758: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed75c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ed75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x1ed760u;
}
