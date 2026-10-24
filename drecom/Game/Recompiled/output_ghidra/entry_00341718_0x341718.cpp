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

// Function: entry_00341718
// Address: 0x341718 - 0x341834
void entry_00341718_0x341718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341718_0x341718");
#endif

    switch (ctx->pc) {
        case 0x341764u: goto label_341764;
        case 0x341774u: goto label_341774;
        case 0x3417a4u: goto label_3417a4;
        case 0x3417b4u: goto label_3417b4;
        case 0x3417e4u: goto label_3417e4;
        case 0x3417f4u: goto label_3417f4;
        default: break;
    }

    ctx->pc = 0x341718u;

    // 0x341718: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34171c: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x34171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341720: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x341720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x341724: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341728: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x341728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34172c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x34172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x341730: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341734: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x341734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341738: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x341738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x34173c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341744: 0x0  nop
    ctx->pc = 0x341744u;
    // NOP
    // 0x341748: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x341748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x34174c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341750: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341754: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x341754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x341758: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341758u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34175c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34175Cu;
    SET_GPR_U32(ctx, 31, 0x341764u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34175Cu, 0x341764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341764u;
label_341764:
    // 0x341764: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x341764u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341768: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x341768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34176c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x34176Cu;
    SET_GPR_U32(ctx, 31, 0x341774u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x34176Cu, 0x341774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341774u;
label_341774:
    // 0x341774: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x341774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341778: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x341778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x34177c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34177cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341780: 0x0  nop
    ctx->pc = 0x341780u;
    // NOP
    // 0x341784: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341788: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x341788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34178c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x34178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x341790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x341790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341794: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x341794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x341798: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341798u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34179c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x34179Cu;
    SET_GPR_U32(ctx, 31, 0x3417A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x34179Cu, 0x3417A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417A4u;
label_3417a4:
    // 0x3417a4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3417a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3417a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3417a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3417ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3417ACu;
    SET_GPR_U32(ctx, 31, 0x3417B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3417ACu, 0x3417B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417B4u;
label_3417b4:
    // 0x3417b4: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x3417b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3417b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3417b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3417bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3417bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3417c0: 0x0  nop
    ctx->pc = 0x3417c0u;
    // NOP
    // 0x3417c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3417c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3417c8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x3417c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x3417cc: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x3417ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3417d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3417d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3417d4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3417d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3417d8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3417d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3417dc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3417DCu;
    SET_GPR_U32(ctx, 31, 0x3417E4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3417DCu, 0x3417E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417E4u;
label_3417e4:
    // 0x3417e4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3417e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3417e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3417e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3417ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3417ECu;
    SET_GPR_U32(ctx, 31, 0x3417F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3417ECu, 0x3417F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3417F4u;
label_3417f4:
    // 0x3417f4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3417f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3417f8: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x3417f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x3417fc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3417fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x341800: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x341800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x341804: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x341804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x341808: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x341808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34180c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x34180cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341814: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x341814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x341818: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x341818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34181c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34181cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341820: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341824: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x341824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x341828: 0x8462006a  lh          $v0, 0x6A($v1)
    ctx->pc = 0x341828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x34182c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x34182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x341830: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x341830u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x341834u;
}
