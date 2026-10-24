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

// Function: entry_002a3070
// Address: 0x2a3070 - 0x2a3554
void entry_002a3070_0x2a3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3070_0x2a3070");
#endif

    switch (ctx->pc) {
        case 0x2a3084u: goto label_2a3084;
        case 0x2a30b8u: goto label_2a30b8;
        case 0x2a30f4u: goto label_2a30f4;
        case 0x2a3110u: goto label_2a3110;
        case 0x2a3174u: goto label_2a3174;
        case 0x2a31ccu: goto label_2a31cc;
        case 0x2a3200u: goto label_2a3200;
        case 0x2a3244u: goto label_2a3244;
        case 0x2a3250u: goto label_2a3250;
        case 0x2a3284u: goto label_2a3284;
        case 0x2a32c8u: goto label_2a32c8;
        case 0x2a32d0u: goto label_2a32d0;
        case 0x2a3304u: goto label_2a3304;
        case 0x2a3348u: goto label_2a3348;
        case 0x2a3364u: goto label_2a3364;
        case 0x2a3370u: goto label_2a3370;
        case 0x2a337cu: goto label_2a337c;
        case 0x2a3434u: goto label_2a3434;
        case 0x2a346cu: goto label_2a346c;
        case 0x2a34a4u: goto label_2a34a4;
        case 0x2a34dcu: goto label_2a34dc;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a354cu: goto label_2a354c;
        default: break;
    }

    ctx->pc = 0x2a3070u;

    // 0x2a3070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3074: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3078: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a3078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a307c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A307Cu;
    SET_GPR_U32(ctx, 31, 0x2A3084u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A307Cu, 0x2A3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3084u;
label_2a3084:
    // 0x2a3084: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3088: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a308c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a3090: 0x90420090  lbu         $v0, 0x90($v0)
    ctx->pc = 0x2a3090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2a3094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3098: 0x34460400  ori         $a2, $v0, 0x400
    ctx->pc = 0x2a3098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2a309c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30a0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a30a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a30a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a30a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a30ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a30acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a30b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A30B0u;
    SET_GPR_U32(ctx, 31, 0x2A30B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A30B0u, 0x2A30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30B8u;
label_2a30b8:
    // 0x2a30b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a30bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30c0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2a30c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a30c4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30cc: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2a30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2a30d0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a30d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a30d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a30d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a30dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a30e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a30e4: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a30e8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a30e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a30ec: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A30ECu;
    SET_GPR_U32(ctx, 31, 0x2A30F4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A30ECu, 0x2A30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30F4u;
label_2a30f4:
    // 0x2a30f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a30f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a30f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3100: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2a3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3104: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a3104u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3108: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3108u;
    SET_GPR_U32(ctx, 31, 0x2A3110u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3108u, 0x2A3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3110u;
label_2a3110:
    // 0x2a3110: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3114: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a3114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a3118: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a311c: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3120: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3124: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a3124u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3128: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a312c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a3130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3134: 0x0  nop
    ctx->pc = 0x2a3134u;
    // NOP
    // 0x2a3138: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a313c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a313cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3140: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3148: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a3148u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a314c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a314cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3150: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a3154: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a3154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3158: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3158u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a315c: 0x0  nop
    ctx->pc = 0x2a315cu;
    // NOP
    // 0x2a3160: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a3160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a3164: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3168: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a316c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A316Cu;
    SET_GPR_U32(ctx, 31, 0x2A3174u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A3174u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A3174u) { return; }
    ctx->pc = 0x2A3174u;
label_2a3174:
    // 0x2a3174: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2a3174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2a3178: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a3178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a317c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3184: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a3184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3188: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a3188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a318c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a318cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3190: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3194: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a3194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a3198: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x2a3198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x2a319c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a31a0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a31a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a31a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a31a8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a31ac: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a31acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a31b0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a31b4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a31b8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2a31b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a31bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a31bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a31c0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2a31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2a31c4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A31C4u;
    SET_GPR_U32(ctx, 31, 0x2A31CCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A31C4u, 0x2A31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31CCu;
label_2a31cc:
    // 0x2a31cc: 0x3c043c8e  lui         $a0, 0x3C8E
    ctx->pc = 0x2a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15502 << 16));
    // 0x2a31d0: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x2a31d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a31d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a31d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a31d8: 0x0  nop
    ctx->pc = 0x2a31d8u;
    // NOP
    // 0x2a31dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a31dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a31e0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2a31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2a31e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a31e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a31e8: 0x0  nop
    ctx->pc = 0x2a31e8u;
    // NOP
    // 0x2a31ec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a31ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a31f0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a31f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a31f4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a31f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a31f8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A31F8u;
    SET_GPR_U32(ctx, 31, 0x2A3200u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A31F8u, 0x2A3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3200u;
label_2a3200:
    // 0x2a3200: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a3204: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3208: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a3208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a320c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a320cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a3210: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a3210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3214: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2a3214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2a3218: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2a3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a321c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a321cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a3220: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2a3220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3224: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a3224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a3228: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a322c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a322cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3230: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a3230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3234: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a3238: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3238u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a323c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A323Cu;
    SET_GPR_U32(ctx, 31, 0x2A3244u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A323Cu, 0x2A3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3244u;
label_2a3244:
    // 0x2a3244: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a3244u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a3248: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3248u;
    SET_GPR_U32(ctx, 31, 0x2A3250u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3248u, 0x2A3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3250u;
label_2a3250:
    // 0x2a3250: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2a3250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3254: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x2a3254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a3258: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a3258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a325c: 0x0  nop
    ctx->pc = 0x2a325cu;
    // NOP
    // 0x2a3260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3264: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2a3264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a326c: 0x0  nop
    ctx->pc = 0x2a326cu;
    // NOP
    // 0x2a3270: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3274: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3278: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a327c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A327Cu;
    SET_GPR_U32(ctx, 31, 0x2A3284u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A327Cu, 0x2A3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3284u;
label_2a3284:
    // 0x2a3284: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a3288: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a328c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x2a328cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3290: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a3290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a3294: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a3294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3298: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2a3298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2a329c: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x2a329cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a32a0: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2a32a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2a32a4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2a32a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a32a8: 0x34440208  ori         $a0, $v0, 0x208
    ctx->pc = 0x2a32a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)520);
    // 0x2a32ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a32b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a32b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a32b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a32b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a32b8: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a32b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a32bc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a32bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a32c0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A32C0u;
    SET_GPR_U32(ctx, 31, 0x2A32C8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A32C0u, 0x2A32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32C8u;
label_2a32c8:
    // 0x2a32c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A32C8u;
    SET_GPR_U32(ctx, 31, 0x2A32D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A32C8u, 0x2A32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32D0u;
label_2a32d0:
    // 0x2a32d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a32d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a32d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a32d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a32d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a32dc: 0x0  nop
    ctx->pc = 0x2a32dcu;
    // NOP
    // 0x2a32e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a32e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a32e4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a32e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a32e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a32ec: 0x0  nop
    ctx->pc = 0x2a32ecu;
    // NOP
    // 0x2a32f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a32f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a32f4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a32f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a32f8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a32f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a32fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A32FCu;
    SET_GPR_U32(ctx, 31, 0x2A3304u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A32FCu, 0x2A3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3304u;
label_2a3304:
    // 0x2a3304: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a3308: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a330c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a330cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3310: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a3310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a3314: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a3314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3318: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2a3318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2a331c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2a331cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3320: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2a3320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a3324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3328: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a3328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a332c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3330: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3334: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a3334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3338: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a333c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a333cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3340: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3340u;
    SET_GPR_U32(ctx, 31, 0x2A3348u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3340u, 0x2A3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3348u;
label_2a3348:
    // 0x2a3348: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a334c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a3350: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A3350u;
    {
        const bool branch_taken_0x2a3350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3350) {
            ctx->pc = 0x2A3554u;
            return;
        }
    }
    ctx->pc = 0x2A3358u;
    // 0x2a3358: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a335c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A335Cu;
    SET_GPR_U32(ctx, 31, 0x2A3364u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A335Cu, 0x2A3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3364u;
label_2a3364:
    // 0x2a3364: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3368: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3368u;
    SET_GPR_U32(ctx, 31, 0x2A3370u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3368u, 0x2A3370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3370u;
label_2a3370:
    // 0x2a3370: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a3370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3374: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3374u;
    SET_GPR_U32(ctx, 31, 0x2A337Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3374u, 0x2A337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A337Cu;
label_2a337c:
    // 0x2a337c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a337cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a3380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3384: 0x0  nop
    ctx->pc = 0x2a3384u;
    // NOP
    // 0x2a3388: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a3388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a338c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a3390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3394: 0x0  nop
    ctx->pc = 0x2a3394u;
    // NOP
    // 0x2a3398: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a3398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a339c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a33a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33a4: 0x0  nop
    ctx->pc = 0x2a33a4u;
    // NOP
    // 0x2a33a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a33a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a33ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a33b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33b4: 0x0  nop
    ctx->pc = 0x2a33b4u;
    // NOP
    // 0x2a33b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a33b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a33bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33c4: 0x0  nop
    ctx->pc = 0x2a33c4u;
    // NOP
    // 0x2a33c8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a33c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a33cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33d4: 0x0  nop
    ctx->pc = 0x2a33d4u;
    // NOP
    // 0x2a33d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a33d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a33dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a33e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33e4: 0x0  nop
    ctx->pc = 0x2a33e4u;
    // NOP
    // 0x2a33e8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a33e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a33ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33f4: 0x0  nop
    ctx->pc = 0x2a33f4u;
    // NOP
    // 0x2a33f8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a33f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a33fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3400: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3404: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a3404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3408: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a3408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a340c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a340cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3410: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3414: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a3414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3418: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a341c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a341cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3420: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3424: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3428: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a342c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A342Cu;
    SET_GPR_U32(ctx, 31, 0x2A3434u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A342Cu, 0x2A3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3434u;
label_2a3434:
    // 0x2a3434: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3438: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a343c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a343cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3440: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a3440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a3444: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a3444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3448: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a344c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a3450: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3454: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a3454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3458: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a345c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a345cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3460: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3464: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3464u;
    SET_GPR_U32(ctx, 31, 0x2A346Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3464u, 0x2A346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A346Cu;
label_2a346c:
    // 0x2a346c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3470: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a3470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a3474: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3478: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a3478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a347c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a347cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3480: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3484: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a3484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a3488: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a348c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a348cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3490: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3494: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3498: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a349c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A349Cu;
    SET_GPR_U32(ctx, 31, 0x2A34A4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A349Cu, 0x2A34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34A4u;
label_2a34a4:
    // 0x2a34a4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a34a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a34a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a34ac: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a34acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a34b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a34b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a34b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a34b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a34b8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a34bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a34c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a34c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a34c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a34c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a34c8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a34cc: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a34ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a34d0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a34d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a34d4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A34D4u;
    SET_GPR_U32(ctx, 31, 0x2A34DCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A34D4u, 0x2A34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34DCu;
label_2a34dc:
    // 0x2a34dc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a34e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a34e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a34e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a34e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a34e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a34ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a34ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a34f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a34f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a34f4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a34f8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a34fc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a34fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3500: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3504: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3508: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a350c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A350Cu;
    SET_GPR_U32(ctx, 31, 0x2A3514u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A350Cu, 0x2A3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3514u;
label_2a3514:
    // 0x2a3514: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a3518: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a351c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3520: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a3524: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3528: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a352c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a3530: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3534: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a3534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3538: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a353c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a353cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3540: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3544: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3544u;
    SET_GPR_U32(ctx, 31, 0x2A354Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3544u, 0x2A354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A354Cu;
label_2a354c:
    // 0x2a354c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A354Cu;
    {
        const bool branch_taken_0x2a354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a354c) {
            ctx->pc = 0x2A35C0u;
            return;
        }
    }
    ctx->pc = 0x2A3554u;
}
