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

// Function: entry_001b2430
// Address: 0x1b2430 - 0x1b2528
void entry_001b2430_0x1b2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2430_0x1b2430");
#endif

    switch (ctx->pc) {
        case 0x1b2460u: goto label_1b2460;
        case 0x1b2484u: goto label_1b2484;
        case 0x1b2498u: goto label_1b2498;
        case 0x1b24a8u: goto label_1b24a8;
        case 0x1b24b8u: goto label_1b24b8;
        case 0x1b24ccu: goto label_1b24cc;
        case 0x1b24e0u: goto label_1b24e0;
        case 0x1b24f0u: goto label_1b24f0;
        case 0x1b2520u: goto label_1b2520;
        default: break;
    }

    ctx->pc = 0x1b2430u;

    // 0x1b2430: 0x72e01e28  paddub      $v1, $s7, $zero
    ctx->pc = 0x1b2430u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1b2434: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b2438: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1b2438u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b243c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B243Cu;
    {
        const bool branch_taken_0x1b243c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b243c) {
            ctx->pc = 0x1B2410u;
            return;
        }
    }
    ctx->pc = 0x1B2444u;
    // 0x1b2444: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1b2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2448: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b244c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b2450: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b2454: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1b2454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2458: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B2458u;
    SET_GPR_U32(ctx, 31, 0x1B2460u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B2458u, 0x1B2460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2460u;
label_1b2460:
    // 0x1b2460: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1b2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2464: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1b2464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2468: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b2468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b246c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1b246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2470: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1b2470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2478: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b2478u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b247c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B247Cu;
    SET_GPR_U32(ctx, 31, 0x1B2484u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B247Cu, 0x1B2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2484u;
label_1b2484:
    // 0x1b2484: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2488: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1b2488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b248c: 0xc7ad0110  lwc1        $f13, 0x110($sp)
    ctx->pc = 0x1b248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b2490: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B2490u;
    SET_GPR_U32(ctx, 31, 0x1B2498u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B2490u, 0x1B2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2498u;
label_1b2498:
    // 0x1b2498: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1b2498u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1b249c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24a0: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x1B24A0u;
    SET_GPR_U32(ctx, 31, 0x1B24A8u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x1B24A0u, 0x1B24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24A8u;
label_1b24a8:
    // 0x1b24a8: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1b24a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b24ac: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1b24acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b24b0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B24B0u;
    SET_GPR_U32(ctx, 31, 0x1B24B8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B24B0u, 0x1B24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24B8u;
label_1b24b8:
    // 0x1b24b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b24b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b24c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b24c4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1B24C4u;
    SET_GPR_U32(ctx, 31, 0x1B24CCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1B24CCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B24CCu) { return; }
    ctx->pc = 0x1B24CCu;
label_1b24cc:
    // 0x1b24cc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b24d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b24d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b24d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b24d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B24D8u;
    SET_GPR_U32(ctx, 31, 0x1B24E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B24E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B24E0u) { return; }
    ctx->pc = 0x1B24E0u;
label_1b24e0:
    // 0x1b24e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24e4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b24e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b24e8: 0xc040c44  jal         func_103110
    ctx->pc = 0x1B24E8u;
    SET_GPR_U32(ctx, 31, 0x1B24F0u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1B24F0u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B24F0u) { return; }
    ctx->pc = 0x1B24F0u;
label_1b24f0:
    // 0x1b24f0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b24f4: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x1b24f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1b24f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b24f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b24fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1b24fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1b2500: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2500u;
    {
        const bool branch_taken_0x1b2500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2500) {
            ctx->pc = 0x1B2528u;
            return;
        }
    }
    ctx->pc = 0x1B2508u;
    // 0x1b2508: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x1b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x1b250c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2510: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2514: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b2514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b2518: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2518u;
    SET_GPR_U32(ctx, 31, 0x1B2520u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2520u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2520u) { return; }
    ctx->pc = 0x1B2520u;
label_1b2520:
    // 0x1b2520: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2520u;
    {
        const bool branch_taken_0x1b2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2520) {
            ctx->pc = 0x1B256Cu;
            return;
        }
    }
    ctx->pc = 0x1B2528u;
}
