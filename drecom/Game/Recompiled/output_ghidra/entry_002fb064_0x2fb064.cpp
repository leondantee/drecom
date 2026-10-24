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

// Function: entry_002fb064
// Address: 0x2fb064 - 0x2fb1c4
void entry_002fb064_0x2fb064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb064_0x2fb064");
#endif

    switch (ctx->pc) {
        case 0x2fb074u: goto label_2fb074;
        case 0x2fb15cu: goto label_2fb15c;
        case 0x2fb16cu: goto label_2fb16c;
        default: break;
    }

    ctx->pc = 0x2fb064u;

    // 0x2fb064: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb068: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2fb068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fb06c: 0xc0c50c4  jal         func_314310
    ctx->pc = 0x2FB06Cu;
    SET_GPR_U32(ctx, 31, 0x2FB074u);
    ctx->pc = 0x314310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314310u, 0x2FB06Cu, 0x2FB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB074u;
label_2fb074:
    // 0x2fb074: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2fb074u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb078: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2fb078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb07c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2fb07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb080: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb084: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fb084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb088: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2fb088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2fb08c: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2fb08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb090: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x2fb090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2fb094: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2fb094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb098: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2fb098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb09c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2fb09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb0a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fb0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fb0a4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb0a8: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x2fb0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
    // 0x2fb0ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fb0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb0b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fb0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fb0b4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2fb0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2fb0b8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2fb0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2fb0bc: 0x24c3dbc0  addiu       $v1, $a2, -0x2440
    ctx->pc = 0x2fb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2fb0c0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2fb0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb0c4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb0c8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb0cc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2fb0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2fb0d0: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x2fb0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb0d4: 0xe62024  and         $a0, $a3, $a2
    ctx->pc = 0x2fb0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2fb0d8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2fb0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb0dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2fb0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2fb0e0: 0x2484dbc0  addiu       $a0, $a0, -0x2440
    ctx->pc = 0x2fb0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x2fb0e4: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2fb0e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb0e8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb0ec: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2fb0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb0f0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2fb0f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2fb0f4: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x2fb0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2fb0f8: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x2fb0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x2fb0fc: 0x673025  or          $a2, $v1, $a3
    ctx->pc = 0x2fb0fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2fb100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb104: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2fb104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb108: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x2fb108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x2fb10c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2fb10cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb110: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2fb110u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2fb114: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2fb114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb118: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x2fb118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x2fb11c: 0x34e3ffff  ori         $v1, $a3, 0xFFFF
    ctx->pc = 0x2fb11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2fb120: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x2fb120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x2fb124: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2fb124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fb128: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fb128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fb12c: 0x8c28dcf0  lw          $t0, -0x2310($at)
    ctx->pc = 0x2fb12cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fb130: 0x250401c0  addiu       $a0, $t0, 0x1C0
    ctx->pc = 0x2fb130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 448));
    // 0x2fb134: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2fb134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2fb138: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2fb138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2fb13c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2fb13cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fb140: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2fb140u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2fb144: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2fb144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2fb148: 0xe82024  and         $a0, $a3, $t0
    ctx->pc = 0x2fb148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x2fb14c: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x2fb14cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fb150: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x2fb150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x2fb154: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FB154u;
    SET_GPR_U32(ctx, 31, 0x2FB15Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FB154u, 0x2FB15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB15Cu;
label_2fb15c:
    // 0x2fb15c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fb15cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb160: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2fb160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fb164: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FB164u;
    SET_GPR_U32(ctx, 31, 0x2FB16Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FB164u, 0x2FB16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB16Cu;
label_2fb16c:
    // 0x2fb16c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fb16cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fb170: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x2fb170u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fb174: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x2fb174u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x2fb178: 0x34e50011  ori         $a1, $a3, 0x11
    ctx->pc = 0x2fb178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x2fb17c: 0x12250011  beq         $s1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB17Cu;
    {
        const bool branch_taken_0x2fb17c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x2fb17c) {
            ctx->pc = 0x2FB1C4u;
            return;
        }
    }
    ctx->pc = 0x2FB184u;
    // 0x2fb184: 0x3c044288  lui         $a0, 0x4288
    ctx->pc = 0x2fb184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb188: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb18c: 0x0  nop
    ctx->pc = 0x2fb18cu;
    // NOP
    // 0x2fb190: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2fb190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x2fb194: 0x3c054288  lui         $a1, 0x4288
    ctx->pc = 0x2fb194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb198: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2fb198u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb19c: 0x0  nop
    ctx->pc = 0x2fb19cu;
    // NOP
    // 0x2fb1a0: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x2fb1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x2fb1a4: 0x3c064288  lui         $a2, 0x4288
    ctx->pc = 0x2fb1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17032 << 16));
    // 0x2fb1a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb1a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb1ac: 0x0  nop
    ctx->pc = 0x2fb1acu;
    // NOP
    // 0x2fb1b0: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2fb1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2fb1b4: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2fb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2fb1b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fb1b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb1bc: 0x0  nop
    ctx->pc = 0x2fb1bcu;
    // NOP
    // 0x2fb1c0: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x2fb1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->pc = 0x2fb1c4u;
}
