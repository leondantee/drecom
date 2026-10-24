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

// Function: entry_00329068
// Address: 0x329068 - 0x3292b4
void entry_00329068_0x329068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329068_0x329068");
#endif

    switch (ctx->pc) {
        case 0x3290c4u: goto label_3290c4;
        case 0x3290fcu: goto label_3290fc;
        case 0x329128u: goto label_329128;
        case 0x329154u: goto label_329154;
        case 0x3291c4u: goto label_3291c4;
        case 0x3291f4u: goto label_3291f4;
        case 0x32929cu: goto label_32929c;
        case 0x3292a8u: goto label_3292a8;
        default: break;
    }

    ctx->pc = 0x329068u;

    // 0x329068: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x329068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x32906c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x32906cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x329070: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x329070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x329074: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x329074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x329078: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x329078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32907c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329080: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x329080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x329084: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x329084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x329088: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x329088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x32908c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x32908cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x329090: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x329090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x329094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329098: 0x0  nop
    ctx->pc = 0x329098u;
    // NOP
    // 0x32909c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32909cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3290a0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3290a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3290a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3290a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3290ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3290acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3290b0: 0x0  nop
    ctx->pc = 0x3290b0u;
    // NOP
    // 0x3290b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3290b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3290b8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3290b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3290bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3290BCu;
    SET_GPR_U32(ctx, 31, 0x3290C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3290BCu, 0x3290C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290C4u;
label_3290c4:
    // 0x3290c4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3290c4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3290c8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3290c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3290cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3290ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3290d0: 0x0  nop
    ctx->pc = 0x3290d0u;
    // NOP
    // 0x3290d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3290d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3290d8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x3290d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3290dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3290dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3290e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3290e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3290e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3290e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3290e8: 0x0  nop
    ctx->pc = 0x3290e8u;
    // NOP
    // 0x3290ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3290ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3290f0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3290f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3290f4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3290F4u;
    SET_GPR_U32(ctx, 31, 0x3290FCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3290F4u, 0x3290FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290FCu;
label_3290fc:
    // 0x3290fc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x3290fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x329100: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x329100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x329104: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x329104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x329108: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x329108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32910c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329110: 0x0  nop
    ctx->pc = 0x329110u;
    // NOP
    // 0x329114: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329118: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x329118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32911c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x32911cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x329120: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x329120u;
    SET_GPR_U32(ctx, 31, 0x329128u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x329120u, 0x329128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329128u;
label_329128:
    // 0x329128: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x329128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x32912c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329130: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x329130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x329134: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x329134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x329138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x329138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32913c: 0x0  nop
    ctx->pc = 0x32913cu;
    // NOP
    // 0x329140: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329144: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x329144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329148: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x329148u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32914c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32914Cu;
    SET_GPR_U32(ctx, 31, 0x329154u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32914Cu, 0x329154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329154u;
label_329154:
    // 0x329154: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x329154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x329158: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x329158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32915c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329160: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329164: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x329164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x329168: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x329168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x32916c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x32916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x329170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329174: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329178: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x329178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32917c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x32917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x329180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329184: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329188: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x329188u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32918c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x32918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x329190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329194: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x329194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x329198: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x329198u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32919c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x32919cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291a0: 0x0  nop
    ctx->pc = 0x3291a0u;
    // NOP
    // 0x3291a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3291a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3291a8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3291ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3291acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3291b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3291b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291b4: 0x0  nop
    ctx->pc = 0x3291b4u;
    // NOP
    // 0x3291b8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3291b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3291bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3291BCu;
    SET_GPR_U32(ctx, 31, 0x3291C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3291BCu, 0x3291C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291C4u;
label_3291c4:
    // 0x3291c4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x3291c4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3291c8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x3291c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3291cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3291ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291d0: 0x0  nop
    ctx->pc = 0x3291d0u;
    // NOP
    // 0x3291d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3291d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3291d8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3291dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3291e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3291e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3291e4: 0x0  nop
    ctx->pc = 0x3291e4u;
    // NOP
    // 0x3291e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x3291e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3291ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3291ECu;
    SET_GPR_U32(ctx, 31, 0x3291F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3291ECu, 0x3291F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291F4u;
label_3291f4:
    // 0x3291f4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3291f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x3291f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3291f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3291fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3291fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x329200: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x329200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x329204: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x329204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x329208: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32920c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32920cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x329210: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x329214: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x329214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x329218: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x329218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32921c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x329220: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x329220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x329224: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x329224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x329228: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x329228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32922c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x329230: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329234: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x329234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x329238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32923c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x329240: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x329240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x329244: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x329244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329248: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x329248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32924c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32924cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x329250: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x329250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x329254: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x329254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x329258: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x329258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32925c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329260: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x329260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329264: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x329264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x329268: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x329268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32926c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x32926Cu;
    {
        const bool branch_taken_0x32926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32926c) {
            ctx->pc = 0x3293B8u;
            return;
        }
    }
    ctx->pc = 0x329274u;
    // 0x329274: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x329274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x329278: 0x24536150  addiu       $s3, $v0, 0x6150
    ctx->pc = 0x329278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x32927c: 0x92625e04  lbu         $v0, 0x5E04($s3)
    ctx->pc = 0x32927cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62BF54u));
    // 0x329280: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x329280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x329284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329288: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x329288u;
    {
        const bool branch_taken_0x329288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x329288) {
            ctx->pc = 0x3292B4u;
            return;
        }
    }
    ctx->pc = 0x329290u;
    // 0x329290: 0xc66c5e00  lwc1        $f12, 0x5E00($s3)
    ctx->pc = 0x329290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x329294: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x329294u;
    SET_GPR_U32(ctx, 31, 0x32929Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x329294u, 0x32929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32929Cu;
label_32929c:
    // 0x32929c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32929cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3292a0: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x3292A0u;
    SET_GPR_U32(ctx, 31, 0x3292A8u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x3292A0u, 0x3292A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292A8u;
label_3292a8:
    // 0x3292a8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3292a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3292ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3292ACu;
    {
        const bool branch_taken_0x3292ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3292ac) {
            ctx->pc = 0x3292F0u;
            return;
        }
    }
    ctx->pc = 0x3292B4u;
}
