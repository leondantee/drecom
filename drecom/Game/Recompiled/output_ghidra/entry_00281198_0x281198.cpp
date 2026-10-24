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

// Function: entry_00281198
// Address: 0x281198 - 0x2812e0
void entry_00281198_0x281198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281198_0x281198");
#endif

    switch (ctx->pc) {
        case 0x2811bcu: goto label_2811bc;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811ecu: goto label_2811ec;
        case 0x281210u: goto label_281210;
        case 0x281234u: goto label_281234;
        case 0x281268u: goto label_281268;
        case 0x281274u: goto label_281274;
        case 0x2812d0u: goto label_2812d0;
        case 0x2812dcu: goto label_2812dc;
        default: break;
    }

    ctx->pc = 0x281198u;

    // 0x281198: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28119c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2811a0: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x2811a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x2811a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2811a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2811a8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2811a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2811ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2811acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2811b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2811b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2811b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2811B4u;
    SET_GPR_U32(ctx, 31, 0x2811BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2811B4u, 0x2811BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811BCu;
label_2811bc:
    // 0x2811bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2811bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2811c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2811C0u;
    SET_GPR_U32(ctx, 31, 0x2811C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2811C0u, 0x2811C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811C8u;
label_2811c8:
    // 0x2811c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2811cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2811ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2811d0: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x2811d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x2811d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2811d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2811d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2811d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2811dc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2811dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2811e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2811e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2811e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2811E4u;
    SET_GPR_U32(ctx, 31, 0x2811ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2811E4u, 0x2811ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2811ECu;
label_2811ec:
    // 0x2811ec: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2811ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2811f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2811f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2811f4: 0x0  nop
    ctx->pc = 0x2811f4u;
    // NOP
    // 0x2811f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2811f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2811fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2811fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281200: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281204: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x281204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x281208: 0xc06765c  jal         func_19D970
    ctx->pc = 0x281208u;
    SET_GPR_U32(ctx, 31, 0x281210u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x281208u, 0x281210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281210u;
label_281210:
    // 0x281210: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281218: 0x0  nop
    ctx->pc = 0x281218u;
    // NOP
    // 0x28121c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28121cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281220: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x281220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281224: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281228: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x281228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x28122c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x28122Cu;
    SET_GPR_U32(ctx, 31, 0x281234u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x28122Cu, 0x281234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281234u;
label_281234:
    // 0x281234: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x281238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28123c: 0x0  nop
    ctx->pc = 0x28123cu;
    // NOP
    // 0x281240: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x281240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x281244: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x281244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281248: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28124c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x28124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x281250: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x281250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x281254: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281254u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281258: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x281258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28125c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28125cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281260: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281260u;
    SET_GPR_U32(ctx, 31, 0x281268u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281260u, 0x281268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281268u;
label_281268:
    // 0x281268: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x281268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28126c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28126Cu;
    SET_GPR_U32(ctx, 31, 0x281274u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28126Cu, 0x281274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281274u;
label_281274:
    // 0x281274: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x281274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x281278: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28127c: 0x24423550  addiu       $v0, $v0, 0x3550
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13648));
    // 0x281280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281284: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x281284u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281288: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x281288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28128c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x28128cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x281290: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x281290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281294: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x281294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x281298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28129c: 0x0  nop
    ctx->pc = 0x28129cu;
    // NOP
    // 0x2812a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2812a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2812a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2812a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2812a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2812a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2812ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2812acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2812b0: 0x0  nop
    ctx->pc = 0x2812b0u;
    // NOP
    // 0x2812b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2812b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2812b8: 0x2404171d  addiu       $a0, $zero, 0x171D
    ctx->pc = 0x2812b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5917));
    // 0x2812bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2812bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2812c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2812c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2812c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2812c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2812c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2812C8u;
    SET_GPR_U32(ctx, 31, 0x2812D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2812C8u, 0x2812D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812D0u;
label_2812d0:
    // 0x2812d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2812d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2812d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2812D4u;
    SET_GPR_U32(ctx, 31, 0x2812DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2812D4u, 0x2812DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2812DCu;
label_2812dc:
    // 0x2812dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2812dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2812e0u;
}
