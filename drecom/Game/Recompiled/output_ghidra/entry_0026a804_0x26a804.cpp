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

// Function: entry_0026a804
// Address: 0x26a804 - 0x26a8c4
void entry_0026a804_0x26a804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a804_0x26a804");
#endif

    switch (ctx->pc) {
        case 0x26a8a4u: goto label_26a8a4;
        default: break;
    }

    ctx->pc = 0x26a804u;

    // 0x26a804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a808: 0x94230080  lhu         $v1, 0x80($at)
    ctx->pc = 0x26a808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x26a80c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26a810: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x26a814: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x26A814u;
    {
        const bool branch_taken_0x26a814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a814) {
            ctx->pc = 0x26A8C4u;
            return;
        }
    }
    ctx->pc = 0x26A81Cu;
    // 0x26a81c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a820: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x26a820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a824: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26a824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26a828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a82c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a830: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a834: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26a834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26a838: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26a83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a840: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a848: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26a84c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26a850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a854: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a85c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26a860: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a864: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x26a864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a868: 0xc4610194  lwc1        $f1, 0x194($v1)
    ctx->pc = 0x26a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a86c: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x26a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x26a870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a874: 0x0  nop
    ctx->pc = 0x26a874u;
    // NOP
    // 0x26a878: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a87c: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x26a87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x26a880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a884: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x26a884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a888: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x26a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x26a88c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26a88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a890: 0x24640190  addiu       $a0, $v1, 0x190
    ctx->pc = 0x26a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x26a894: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26a894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a898: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x26a898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26a89c: 0xc09a87c  jal         func_26A1F0
    ctx->pc = 0x26A89Cu;
    SET_GPR_U32(ctx, 31, 0x26A8A4u);
    ctx->pc = 0x26A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A1F0u, 0x26A89Cu, 0x26A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8A4u;
label_26a8a4:
    // 0x26a8a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a8a8: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x26a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a8ac: 0xc4810194  lwc1        $f1, 0x194($a0)
    ctx->pc = 0x26a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a8b0: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x26a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x26a8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26a8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a8b8: 0x0  nop
    ctx->pc = 0x26a8b8u;
    // NOP
    // 0x26a8bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a8c0: 0xe4800194  swc1        $f0, 0x194($a0)
    ctx->pc = 0x26a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
    ctx->pc = 0x26a8c4u;
}
