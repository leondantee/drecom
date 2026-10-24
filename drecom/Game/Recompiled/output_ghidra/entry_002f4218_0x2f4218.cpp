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

// Function: entry_002f4218
// Address: 0x2f4218 - 0x2f4320
void entry_002f4218_0x2f4218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4218_0x2f4218");
#endif

    switch (ctx->pc) {
        case 0x2f4270u: goto label_2f4270;
        case 0x2f430cu: goto label_2f430c;
        default: break;
    }

    ctx->pc = 0x2f4218u;

    // 0x2f4218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f421c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f421cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f4220: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2f4220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2f4224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4228: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f422c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f422cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4230: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f4230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f4234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4238: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f423c: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f423cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4240: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2f4240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2f4244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4248: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f424c: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f424cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4250: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x2f4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x2f4254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4258: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f425c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f425cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4268: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x2F4268u;
    SET_GPR_U32(ctx, 31, 0x2F4270u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x2F4268u, 0x2F4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4270u;
label_2f4270:
    // 0x2f4270: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4274: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f4274u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4278: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f4278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f427c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f4280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4284: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4288: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f4288u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f428c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f4290: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f4290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f4294: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4298: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f4298u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f429c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f429cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f42a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f42a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f42a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f42a8: 0x0  nop
    ctx->pc = 0x2f42a8u;
    // NOP
    // 0x2f42ac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f42acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f42b0: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f42b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f42b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f42b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f42b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f42b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f42bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f42bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f42c0: 0x0  nop
    ctx->pc = 0x2f42c0u;
    // NOP
    // 0x2f42c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f42c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f42c8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f42cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f42ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f42d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f42d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f42d4: 0x0  nop
    ctx->pc = 0x2f42d4u;
    // NOP
    // 0x2f42d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f42d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f42dc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f42dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f42e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f42e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f42e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f42e8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2f42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2f42ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f42ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f42f0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f42f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f42f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f42f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f42f8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f42f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f42fc: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2f42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f4300: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4304: 0xc086488  jal         func_219220
    ctx->pc = 0x2F4304u;
    SET_GPR_U32(ctx, 31, 0x2F430Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F4304u, 0x2F430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F430Cu;
label_2f430c:
    // 0x2f430c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f430cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4310: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4314: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f4318: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4320u;
}
