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

// Function: entry_00332048
// Address: 0x332048 - 0x332258
void entry_00332048_0x332048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332048_0x332048");
#endif

    switch (ctx->pc) {
        case 0x3320c4u: goto label_3320c4;
        case 0x3320e0u: goto label_3320e0;
        case 0x33211cu: goto label_33211c;
        case 0x332138u: goto label_332138;
        case 0x332198u: goto label_332198;
        default: break;
    }

    ctx->pc = 0x332048u;

    // 0x332048: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x332048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x33204c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332050: 0x0  nop
    ctx->pc = 0x332050u;
    // NOP
    // 0x332054: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x332054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x332058: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x332058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33205c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x33205cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x332060: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x332060u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x332064: 0x8e636614  lw          $v1, 0x6614($s3)
    ctx->pc = 0x332064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x332068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x332068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33206c: 0x0  nop
    ctx->pc = 0x33206cu;
    // NOP
    // 0x332070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x332070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x332074: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x332074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332078: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x332078u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33207c: 0xe7ac0124  swc1        $f12, 0x124($sp)
    ctx->pc = 0x33207cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x332080: 0x8e626610  lw          $v0, 0x6610($s3)
    ctx->pc = 0x332080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26128)));
    // 0x332084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x332084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x332088: 0x0  nop
    ctx->pc = 0x332088u;
    // NOP
    // 0x33208c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33208cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x332090: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x332090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x332094: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x332094u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x332098: 0xe7ac0128  swc1        $f12, 0x128($sp)
    ctx->pc = 0x332098u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x33209c: 0x8e626614  lw          $v0, 0x6614($s3)
    ctx->pc = 0x33209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26132)));
    // 0x3320a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3320a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3320a4: 0x0  nop
    ctx->pc = 0x3320a4u;
    // NOP
    // 0x3320a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3320a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3320ac: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x3320acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3320b0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3320b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3320b4: 0xe7ac012c  swc1        $f12, 0x12C($sp)
    ctx->pc = 0x3320b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x3320b8: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x3320b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3320bc: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3320BCu;
    SET_GPR_U32(ctx, 31, 0x3320C4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3320BCu, 0x3320C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320C4u;
label_3320c4:
    // 0x3320c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3320c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3320c8: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x3320c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x3320cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3320ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3320d0: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3320d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x3320d4: 0xc7ac0124  lwc1        $f12, 0x124($sp)
    ctx->pc = 0x3320d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3320d8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3320D8u;
    SET_GPR_U32(ctx, 31, 0x3320E0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3320D8u, 0x3320E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3320E0u;
label_3320e0:
    // 0x3320e0: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x3320e0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3320e4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x3320e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x3320e8: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x3320e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x3320ec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x3320ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x3320f0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3320f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3320f4: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x3320f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3320f8: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x3320f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3320fc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3320fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x332100: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x332100u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x332104: 0x2609001c  addiu       $t1, $s0, 0x1C
    ctx->pc = 0x332104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x332108: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x332108u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x33210c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x33210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x332110: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x332110u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x332114: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x332114u;
    SET_GPR_U32(ctx, 31, 0x33211Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x332114u, 0x33211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33211Cu;
label_33211c:
    // 0x33211c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33211cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x332120: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x332120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x332124: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x332124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x332128: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x332128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x33212c: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x33212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x332130: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x332130u;
    SET_GPR_U32(ctx, 31, 0x332138u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x332130u, 0x332138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332138u;
label_332138:
    // 0x332138: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x332138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33213c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x332140: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x332140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x332144: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x332144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x332148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x332148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33214c: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x33214cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x332150: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x332150u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x332154: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x332154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x332158: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x33215c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33215cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x332160: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x332160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332164: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x332164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x332168: 0x244300ae  addiu       $v1, $v0, 0xAE
    ctx->pc = 0x332168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 174));
    // 0x33216c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33216cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332170: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x332170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332174: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x332174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x332178: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x332178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33217c: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x33217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x332180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332184: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x332184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x332188: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x332188u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33218c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x33218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x332190: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x332190u;
    SET_GPR_U32(ctx, 31, 0x332198u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x332198u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x332198u) { return; }
    ctx->pc = 0x332198u;
label_332198:
    // 0x332198: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x332198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x33219c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x33219cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3321a0: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x3321a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3321a4: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x3321a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3321a8: 0xdd220018  ld          $v0, 0x18($t1)
    ctx->pc = 0x3321a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x3321ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3321acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x3321b0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3321b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3321b4: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x3321b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x3321b8: 0x21cbe  dsrl32      $v1, $v0, 18
    ctx->pc = 0x3321b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x3321bc: 0x66302d  daddu       $a2, $v1, $a2
    ctx->pc = 0x3321bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3321c0: 0xdd230018  ld          $v1, 0x18($t1)
    ctx->pc = 0x3321c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x3321c4: 0x30c73fff  andi        $a3, $a2, 0x3FFF
    ctx->pc = 0x3321c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    // 0x3321c8: 0x7417c  dsll32      $t0, $a3, 5
    ctx->pc = 0x3321c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 5));
    // 0x3321cc: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x3321ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x3321d0: 0x3446001f  ori         $a2, $v0, 0x1F
    ctx->pc = 0x3321d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x3321d4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3321d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3321d8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3321d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3321dc: 0x73438  dsll        $a2, $a3, 16
    ctx->pc = 0x3321dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 16);
    // 0x3321e0: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x3321e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3321e4: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x3321e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x3321e8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x3321e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3321ec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3321ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3321f0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x3321f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3321f4: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x3321f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x3321f8: 0xfd220018  sd          $v0, 0x18($t1)
    ctx->pc = 0x3321f8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 24), GPR_U64(ctx, 2));
    // 0x3321fc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3321fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332200: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x332200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x332204: 0x244300ae  addiu       $v1, $v0, 0xAE
    ctx->pc = 0x332204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 174));
    // 0x332208: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x332208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33220c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x33220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332210: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x332210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x332214: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x332214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x332218: 0x24a6cca0  addiu       $a2, $a1, -0x3360
    ctx->pc = 0x332218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954144));
    // 0x33221c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x33221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x332220: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x332220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x332224: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x332224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x332228: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x332228u;
    {
        const bool branch_taken_0x332228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x332228) {
            ctx->pc = 0x332258u;
            return;
        }
    }
    ctx->pc = 0x332230u;
    // 0x332230: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x332230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x332234: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x332234u;
    {
        const bool branch_taken_0x332234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332234) {
            ctx->pc = 0x332258u;
            return;
        }
    }
    ctx->pc = 0x33223Cu;
    // 0x33223c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x33223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x332240: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x332240u;
    {
        const bool branch_taken_0x332240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x332240) {
            ctx->pc = 0x332258u;
            return;
        }
    }
    ctx->pc = 0x332248u;
    // 0x332248: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x332248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33224c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33224Cu;
    {
        const bool branch_taken_0x33224c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33224c) {
            ctx->pc = 0x332268u;
            return;
        }
    }
    ctx->pc = 0x332254u;
    // 0x332254: 0x0  nop
    ctx->pc = 0x332254u;
    // NOP
    ctx->pc = 0x332258u;
}
