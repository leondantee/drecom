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

// Function: entry_0017c5c4
// Address: 0x17c5c4 - 0x17c658
void entry_0017c5c4_0x17c5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c5c4_0x17c5c4");
#endif

    switch (ctx->pc) {
        case 0x17c5d8u: goto label_17c5d8;
        case 0x17c61cu: goto label_17c61c;
        default: break;
    }

    ctx->pc = 0x17c5c4u;

    // 0x17c5c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17c5c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c5cc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17c5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c5d0: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C5D0u;
    SET_GPR_U32(ctx, 31, 0x17C5D8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C5D8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C5D8u) { return; }
    ctx->pc = 0x17C5D8u;
label_17c5d8:
    // 0x17c5d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c5e0: 0x0  nop
    ctx->pc = 0x17c5e0u;
    // NOP
    // 0x17c5e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17c5e8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x17c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5ec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x17c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x17c5f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c5f4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x17c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c5f8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x17c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c5fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c600: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x17c600u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17c604: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c608: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x17c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c60c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c60cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c610: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x17c610u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x17c614: 0xc045630  jal         func_1158C0
    ctx->pc = 0x17C614u;
    SET_GPR_U32(ctx, 31, 0x17C61Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x17C614u, 0x17C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C61Cu;
label_17c61c:
    // 0x17c61c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x17c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c620: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c624: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x17c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x17c628: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c62c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17c62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17c630: 0xc420f0f0  lwc1        $f0, -0xF10($at)
    ctx->pc = 0x17c630u;
    { uint32_t bits = FAST_READ32(0x47F0F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c634: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17c634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17c638: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x17c638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x17c63c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x17c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17c640: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17c640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c644: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x17c644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17c648: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x17c648u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x17c64c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x17c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c650: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x17c654: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17c654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x17c658u;
}
