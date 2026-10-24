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

// Function: Em02_R1_reset00
// Address: 0x2a74d0 - 0x2a7d38
void Em02_R1_reset00_0x2a74d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_reset00_0x2a74d0");
#endif

    switch (ctx->pc) {
        case 0x2a7554u: goto label_2a7554;
        case 0x2a75dcu: goto label_2a75dc;
        case 0x2a7648u: goto label_2a7648;
        case 0x2a7664u: goto label_2a7664;
        case 0x2a767cu: goto label_2a767c;
        case 0x2a76b4u: goto label_2a76b4;
        case 0x2a76e4u: goto label_2a76e4;
        case 0x2a76f4u: goto label_2a76f4;
        case 0x2a7704u: goto label_2a7704;
        case 0x2a7740u: goto label_2a7740;
        case 0x2a77a8u: goto label_2a77a8;
        case 0x2a77c4u: goto label_2a77c4;
        case 0x2a77f8u: goto label_2a77f8;
        case 0x2a7818u: goto label_2a7818;
        case 0x2a7828u: goto label_2a7828;
        case 0x2a7834u: goto label_2a7834;
        case 0x2a7840u: goto label_2a7840;
        case 0x2a78e4u: goto label_2a78e4;
        case 0x2a7950u: goto label_2a7950;
        case 0x2a79b0u: goto label_2a79b0;
        case 0x2a79ccu: goto label_2a79cc;
        case 0x2a79d8u: goto label_2a79d8;
        case 0x2a79e4u: goto label_2a79e4;
        case 0x2a7a9cu: goto label_2a7a9c;
        case 0x2a7ad4u: goto label_2a7ad4;
        case 0x2a7b0cu: goto label_2a7b0c;
        case 0x2a7b44u: goto label_2a7b44;
        case 0x2a7b7cu: goto label_2a7b7c;
        case 0x2a7bb4u: goto label_2a7bb4;
        case 0x2a7bc8u: goto label_2a7bc8;
        case 0x2a7bf4u: goto label_2a7bf4;
        case 0x2a7c0cu: goto label_2a7c0c;
        case 0x2a7c24u: goto label_2a7c24;
        case 0x2a7c44u: goto label_2a7c44;
        case 0x2a7c5cu: goto label_2a7c5c;
        case 0x2a7c7cu: goto label_2a7c7c;
        case 0x2a7c8cu: goto label_2a7c8c;
        case 0x2a7ca0u: goto label_2a7ca0;
        case 0x2a7cacu: goto label_2a7cac;
        default: break;
    }

    ctx->pc = 0x2a74d0u;

    // 0x2a74d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a74d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2a74d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a74d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2a74d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a74d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a74dc: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2a74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x2a74e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a74e4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2a74e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a74e8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a74ec: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2a74ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a74f0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2a74f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a74f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a74f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a74f8: 0x10a601d4  beq         $a1, $a2, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x2A74F8u;
    {
        const bool branch_taken_0x2a74f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a74f8) {
            ctx->pc = 0x2A7C4Cu;
            goto label_2a7c4c;
        }
    }
    ctx->pc = 0x2A7500u;
    // 0x2a7500: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a7500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7504: 0x10a70097  beq         $a1, $a3, . + 4 + (0x97 << 2)
    ctx->pc = 0x2A7504u;
    {
        const bool branch_taken_0x2a7504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2a7504) {
            ctx->pc = 0x2A7764u;
            goto label_2a7764;
        }
    }
    ctx->pc = 0x2A750Cu;
    // 0x2a750c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a750cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7510: 0x10a8003e  beq         $a1, $t0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A7510u;
    {
        const bool branch_taken_0x2a7510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x2a7510) {
            ctx->pc = 0x2A760Cu;
            goto label_2a760c;
        }
    }
    ctx->pc = 0x2A7518u;
    // 0x2a7518: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7518u;
    {
        const bool branch_taken_0x2a7518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7518) {
            ctx->pc = 0x2A7528u;
            goto label_2a7528;
        }
    }
    ctx->pc = 0x2A7520u;
    // 0x2a7520: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x2A7520u;
    {
        const bool branch_taken_0x2a7520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7520) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7528u;
label_2a7528:
    // 0x2a7528: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a7528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a752c: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x2a752cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7530: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a7530u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a7534: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7538: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a753c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a753cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a7540: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x2a7540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x2a7544: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7548: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a754c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A754Cu;
    SET_GPR_U32(ctx, 31, 0x2A7554u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A754Cu, 0x2A7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7554u;
label_2a7554:
    // 0x2a7554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7558: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a755c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a755cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a7560: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2a7560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2a7564: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a7564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7568: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a756c: 0xe4a00184  swc1        $f0, 0x184($a1)
    ctx->pc = 0x2a756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 388), bits); }
    // 0x2a7570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a7570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7574: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7578: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a7578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a757c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a757cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7580: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7584: 0xa04710a8  sb          $a3, 0x10A8($v0)
    ctx->pc = 0x2a7584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a7588: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a758c: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7590: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7594: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a7594u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7598: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a7598u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a759c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a75a0: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a75a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a75a4: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a75a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a75a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a75ac: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a75acu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a75b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a75b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a75b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a75b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a75b8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a75bc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a75bcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a75c0: 0x0  nop
    ctx->pc = 0x2a75c0u;
    // NOP
    // 0x2a75c4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a75c8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a75c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a75cc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a75ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a75d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a75d4: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A75D4u;
    SET_GPR_U32(ctx, 31, 0x2A75DCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A75DCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A75DCu) { return; }
    ctx->pc = 0x2A75DCu;
label_2a75dc:
    // 0x2a75dc: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x2a75dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x2a75e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a75e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a75e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a75e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a75e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a75e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a75ec: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a75ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a75f0: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x2a75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x2a75f4: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x2a75f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x2a75f8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a75f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a75fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a75fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7604: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7608: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2a7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2a760c:
    // 0x2a760c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7610: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7614: 0xa0a410a8  sb          $a0, 0x10A8($a1)
    ctx->pc = 0x2a7614u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a7618: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a761c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a761cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7620: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7624: 0x3465fa35  ori         $a1, $v1, 0xFA35
    ctx->pc = 0x2a7624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a7628: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a7628u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a762c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a7630: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7634: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2a7634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2a7638: 0x24a6dce0  addiu       $a2, $a1, -0x2320
    ctx->pc = 0x2a7638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958304));
    // 0x2a763c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a763cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7640: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A7640u;
    SET_GPR_U32(ctx, 31, 0x2A7648u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A7640u, 0x2A7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7648u;
label_2a7648:
    // 0x2a7648: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a764c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7650: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7654: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7658: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a7658u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a765c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A765Cu;
    SET_GPR_U32(ctx, 31, 0x2A7664u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A765Cu, 0x2A7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7664u;
label_2a7664:
    // 0x2a7664: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7668: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2a7668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2a766c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7670: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7674: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7674u;
    SET_GPR_U32(ctx, 31, 0x2A767Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7674u, 0x2A767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A767Cu;
label_2a767c:
    // 0x2a767c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7680: 0x908209db  lbu         $v0, 0x9DB($a0)
    ctx->pc = 0x2a7680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x2a7684: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2a7684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a7688: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2a7688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2a768c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A768Cu;
    {
        const bool branch_taken_0x2a768c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a768c) {
            ctx->pc = 0x2A76D4u;
            goto label_2a76d4;
        }
    }
    ctx->pc = 0x2A7694u;
    // 0x2a7694: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7698: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a769c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a76a4: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a76a8: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a76a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a76ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A76ACu;
    SET_GPR_U32(ctx, 31, 0x2A76B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A76ACu, 0x2A76B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76B4u;
label_2a76b4:
    // 0x2a76b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a76b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a76b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76bc: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2a76bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a76c0: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2a76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2a76c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a76c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a76c8: 0x0  nop
    ctx->pc = 0x2a76c8u;
    // NOP
    // 0x2a76cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a76ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a76d0: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a76d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_2a76d4:
    // 0x2a76d4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a76d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a76dc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A76DCu;
    SET_GPR_U32(ctx, 31, 0x2A76E4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A76DCu, 0x2A76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76E4u;
label_2a76e4:
    // 0x2a76e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a76e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a76e8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76ec: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A76ECu;
    SET_GPR_U32(ctx, 31, 0x2A76F4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A76ECu, 0x2A76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76F4u;
label_2a76f4:
    // 0x2a76f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a76f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a76f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a76fc: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A76FCu;
    SET_GPR_U32(ctx, 31, 0x2A7704u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A76FCu, 0x2A7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7704u;
label_2a7704:
    // 0x2a7704: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7708: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2a7708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a770c: 0x10600185  beqz        $v1, . + 4 + (0x185 << 2)
    ctx->pc = 0x2A770Cu;
    {
        const bool branch_taken_0x2a770c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a770c) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7714u;
    // 0x2a7714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a7714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7718: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a771c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a771cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7720: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7724: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7728: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a7728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a772c: 0x24060421  addiu       $a2, $zero, 0x421
    ctx->pc = 0x2a772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x2a7730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7734: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a7734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7738: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A7738u;
    SET_GPR_U32(ctx, 31, 0x2A7740u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A7738u, 0x2A7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7740u;
label_2a7740:
    // 0x2a7740: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7744: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x2a7744u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7748: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a774c: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2a774cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7750: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a7754: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7758: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2a7758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a775c: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2A775Cu;
    {
        const bool branch_taken_0x2a775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a775c) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7764u;
label_2a7764:
    // 0x2a7764: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7768: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2a7768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a776c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a7770: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a7770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a7774: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a7778: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a7778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a777c: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2a777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7780: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a7780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a7784: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7788: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a778c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7790: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a7794: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7798: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a779c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a77a0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A77A0u;
    SET_GPR_U32(ctx, 31, 0x2A77A8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A77A0u, 0x2A77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77A8u;
label_2a77a8:
    // 0x2a77a8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a77a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a77ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a77b4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a77b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a77b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a77bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A77BCu;
    SET_GPR_U32(ctx, 31, 0x2A77C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A77BCu, 0x2A77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77C4u;
label_2a77c4:
    // 0x2a77c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a77c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a77cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77d0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2a77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a77d4: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2a77d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a77d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a77dc: 0x0  nop
    ctx->pc = 0x2a77dcu;
    // NOP
    // 0x2a77e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a77e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a77e4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a77e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a77e8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a77ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a77f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A77F0u;
    SET_GPR_U32(ctx, 31, 0x2A77F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A77F0u, 0x2A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77fc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7800: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7804: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a7804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a7808: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a7808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a780c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a7810: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A7810u;
    SET_GPR_U32(ctx, 31, 0x2A7818u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A7810u, 0x2A7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7818u;
label_2a7818:
    // 0x2a7818: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a781c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a781cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7820: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7820u;
    SET_GPR_U32(ctx, 31, 0x2A7828u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7820u, 0x2A7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7828u;
label_2a7828:
    // 0x2a7828: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a782c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A782Cu;
    SET_GPR_U32(ctx, 31, 0x2A7834u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A782Cu, 0x2A7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7834u;
label_2a7834:
    // 0x2a7834: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7838: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A7838u;
    SET_GPR_U32(ctx, 31, 0x2A7840u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A7838u, 0x2A7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7840u;
label_2a7840:
    // 0x2a7840: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7844: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2a7844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2a7848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a784c: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x2a784cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7850: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7854: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2a7854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7858: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a7858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a785c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a785cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7860: 0x0  nop
    ctx->pc = 0x2a7860u;
    // NOP
    // 0x2a7864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7868: 0x0  nop
    ctx->pc = 0x2a7868u;
    // NOP
    // 0x2a786c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2A786Cu;
    {
        const bool branch_taken_0x2a786c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a786c) {
            ctx->pc = 0x2A7960u;
            goto label_2a7960;
        }
    }
    ctx->pc = 0x2A7874u;
    // 0x2a7874: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7878: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2a7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a787c: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2a787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2a7880: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7884: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7888: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2a7888u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a788c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a788cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7890: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a7890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7894: 0x0  nop
    ctx->pc = 0x2a7894u;
    // NOP
    // 0x2a7898: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x2A7898u;
    {
        const bool branch_taken_0x2a7898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7898) {
            ctx->pc = 0x2A7960u;
            goto label_2a7960;
        }
    }
    ctx->pc = 0x2A78A0u;
    // 0x2a78a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a78a4: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2a78a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2a78a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a78a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a78ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a78acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a78b0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2a78b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a78b4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A78B4u;
    {
        const bool branch_taken_0x2a78b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a78b4) {
            ctx->pc = 0x2A7960u;
            goto label_2a7960;
        }
    }
    ctx->pc = 0x2A78BCu;
    // 0x2a78bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a78c0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2a78c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2a78c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a78c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a78c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a78c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a78cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a78ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a78d0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A78D0u;
    {
        const bool branch_taken_0x2a78d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a78d0) {
            ctx->pc = 0x2A7960u;
            goto label_2a7960;
        }
    }
    ctx->pc = 0x2A78D8u;
    // 0x2a78d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a78d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a78dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A78DCu;
    SET_GPR_U32(ctx, 31, 0x2A78E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A78DCu, 0x2A78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78E4u;
label_2a78e4:
    // 0x2a78e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a78e8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a78ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a78ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a78f0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a78f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a78f8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2a78fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a7900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7904: 0x0  nop
    ctx->pc = 0x2a7904u;
    // NOP
    // 0x2a7908: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a7908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a790c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7910: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a7914: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a7914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a7918: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a7918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a791c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a7920: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a7920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a7924: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a7928: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a7928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a792c: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2a792cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2a7930: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7934: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a7938: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a7938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a793c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7940: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a7944: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a7944u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7948: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A7948u;
    SET_GPR_U32(ctx, 31, 0x2A7950u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A7948u, 0x2A7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7950u;
label_2a7950:
    // 0x2a7950: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7954: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2a7954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2a7958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a795c: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2a795cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_2a7960:
    // 0x2a7960: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7964: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a7964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a7968: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a7968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a796c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7970: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2a7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7974: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a7974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7978: 0x0  nop
    ctx->pc = 0x2a7978u;
    // NOP
    // 0x2a797c: 0x450000e9  bc1f        . + 4 + (0xE9 << 2)
    ctx->pc = 0x2A797Cu;
    {
        const bool branch_taken_0x2a797c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a797c) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7984u;
    // 0x2a7984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a7984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7988: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a798c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a798cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7990: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7994: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7998: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a799c: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2a799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2a79a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a79a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a79a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a79a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a79a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A79A8u;
    SET_GPR_U32(ctx, 31, 0x2A79B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A79A8u, 0x2A79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79B0u;
label_2a79b0:
    // 0x2a79b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a79b4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a79b8: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A79B8u;
    {
        const bool branch_taken_0x2a79b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a79b8) {
            ctx->pc = 0x2A7BBCu;
            goto label_2a7bbc;
        }
    }
    ctx->pc = 0x2A79C0u;
    // 0x2a79c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a79c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A79C4u;
    SET_GPR_U32(ctx, 31, 0x2A79CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A79C4u, 0x2A79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79CCu;
label_2a79cc:
    // 0x2a79cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a79d0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A79D0u;
    SET_GPR_U32(ctx, 31, 0x2A79D8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A79D0u, 0x2A79D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79D8u;
label_2a79d8:
    // 0x2a79d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a79dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A79DCu;
    SET_GPR_U32(ctx, 31, 0x2A79E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A79DCu, 0x2A79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A79E4u;
label_2a79e4:
    // 0x2a79e4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a79e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a79e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a79ec: 0x0  nop
    ctx->pc = 0x2a79ecu;
    // NOP
    // 0x2a79f0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a79f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a79f4: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a79f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a79f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a79fc: 0x0  nop
    ctx->pc = 0x2a79fcu;
    // NOP
    // 0x2a7a00: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a7a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a7a04: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a7a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a0c: 0x0  nop
    ctx->pc = 0x2a7a0cu;
    // NOP
    // 0x2a7a10: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a7a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a7a14: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a7a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a1c: 0x0  nop
    ctx->pc = 0x2a7a1cu;
    // NOP
    // 0x2a7a20: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a7a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a7a24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a2c: 0x0  nop
    ctx->pc = 0x2a7a2cu;
    // NOP
    // 0x2a7a30: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a7a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a7a34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a3c: 0x0  nop
    ctx->pc = 0x2a7a3cu;
    // NOP
    // 0x2a7a40: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a7a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a7a44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a4c: 0x0  nop
    ctx->pc = 0x2a7a4cu;
    // NOP
    // 0x2a7a50: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a7a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a7a54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7a5c: 0x0  nop
    ctx->pc = 0x2a7a5cu;
    // NOP
    // 0x2a7a60: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a7a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a7a64: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7a68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7a6c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7a70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7a74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7a78: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7a7c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a7a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a7a80: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7a84: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7a88: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7a8c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7a90: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7a90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7a94: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7A94u;
    SET_GPR_U32(ctx, 31, 0x2A7A9Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7A94u, 0x2A7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7A9Cu;
label_2a7a9c:
    // 0x2a7a9c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7aa4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7aa8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7aac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7ab0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ab4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a7ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a7ab8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7abc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7ac0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7ac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7ac4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7ac8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7ac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7acc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7ACCu;
    SET_GPR_U32(ctx, 31, 0x2A7AD4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7ACCu, 0x2A7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7AD4u;
label_2a7ad4:
    // 0x2a7ad4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7ad8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7adc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7ae0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7ae8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7aec: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a7aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a7af0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7af4: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7af8: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7afc: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b00: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7b04: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7B04u;
    SET_GPR_U32(ctx, 31, 0x2A7B0Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7B04u, 0x2A7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B0Cu;
label_2a7b0c:
    // 0x2a7b0c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7b10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7b14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7b18: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a7b1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b20: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7b24: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a7b28: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b2c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7b30: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7b34: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b38: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7b38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7b3c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7B3Cu;
    SET_GPR_U32(ctx, 31, 0x2A7B44u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7B3Cu, 0x2A7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B44u;
label_2a7b44:
    // 0x2a7b44: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a7b48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a7b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b4c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7b50: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a7b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a7b54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7b58: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7b5c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a7b60: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b64: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7b68: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7b6c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7b70: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7b74: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7B74u;
    SET_GPR_U32(ctx, 31, 0x2A7B7Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7B74u, 0x2A7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B7Cu;
label_2a7b7c:
    // 0x2a7b7c: 0x3c103c23  lui         $s0, 0x3C23
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15395 << 16));
    // 0x2a7b80: 0x3603d70a  ori         $v1, $s0, 0xD70A
    ctx->pc = 0x2a7b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)55050);
    // 0x2a7b84: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a7b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7b88: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2a7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2a7b8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a7b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b90: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7b94: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a7b98: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a7b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a7b9c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a7b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a7ba0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a7ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a7ba4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a7ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7ba8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a7ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a7bac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A7BACu;
    SET_GPR_U32(ctx, 31, 0x2A7BB4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A7BACu, 0x2A7BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BB4u;
label_2a7bb4:
    // 0x2a7bb4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2A7BB4u;
    {
        const bool branch_taken_0x2a7bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7bb4) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7BBCu;
label_2a7bbc:
    // 0x2a7bbc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7bc0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A7BC0u;
    SET_GPR_U32(ctx, 31, 0x2A7BC8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A7BC0u, 0x2A7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BC8u;
label_2a7bc8:
    // 0x2a7bc8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7bcc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7bd0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a7bd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7bd4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a7bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a7bd8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a7bd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a7bdc: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2a7bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7be0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a7be0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a7be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7be8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a7be8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7bec: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7BECu;
    SET_GPR_U32(ctx, 31, 0x2A7BF4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7BECu, 0x2A7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BF4u;
label_2a7bf4:
    // 0x2a7bf4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7bf8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a7bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a7bfc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7c00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7c04: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7C04u;
    SET_GPR_U32(ctx, 31, 0x2A7C0Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7C04u, 0x2A7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C0Cu;
label_2a7c0c:
    // 0x2a7c0c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c10: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a7c14: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7c18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7c1c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C24u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7C1Cu, 0x2A7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C24u;
label_2a7c24:
    // 0x2a7c24: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7c24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7c28: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7c30: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a7c34: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7c38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7c3c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C44u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7C3Cu, 0x2A7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C44u;
label_2a7c44:
    // 0x2a7c44: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2A7C44u;
    {
        const bool branch_taken_0x2a7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c44) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7C4Cu;
label_2a7c4c:
    // 0x2a7c4c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c50: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a7c54: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A7C54u;
    SET_GPR_U32(ctx, 31, 0x2A7C5Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A7C54u, 0x2A7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C5Cu;
label_2a7c5c:
    // 0x2a7c5c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c60: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c64: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c68: 0x24c40120  addiu       $a0, $a2, 0x120
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x2a7c6c: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a7c70: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a7c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a7c74: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A7C74u;
    SET_GPR_U32(ctx, 31, 0x2A7C7Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A7C74u, 0x2A7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C7Cu;
label_2a7c7c:
    // 0x2a7c7c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a7c80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7c84: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7C84u;
    SET_GPR_U32(ctx, 31, 0x2A7C8Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7C84u, 0x2A7C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C8Cu;
label_2a7c8c:
    // 0x2a7c8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7c90: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a7c94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a7c98: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A7C98u;
    SET_GPR_U32(ctx, 31, 0x2A7CA0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A7C98u, 0x2A7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CA0u;
label_2a7ca0:
    // 0x2a7ca0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ca4: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A7CA4u;
    SET_GPR_U32(ctx, 31, 0x2A7CACu);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A7CA4u, 0x2A7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7CACu;
label_2a7cac:
    // 0x2a7cac: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7cb0: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a7cb4: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a7cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a7cb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7cbc: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7cc4: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a7cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a7cc8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ccc: 0x3c043f33  lui         $a0, 0x3F33
    ctx->pc = 0x2a7cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16179 << 16));
    // 0x2a7cd0: 0x34833333  ori         $v1, $a0, 0x3333
    ctx->pc = 0x2a7cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x2a7cd4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7cd8: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7cdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a7cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a7ce0: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a7ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a7ce4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2a7ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ce8: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x2a7ce8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x2a7cec: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7CECu;
    {
        const bool branch_taken_0x2a7cec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7cec) {
            ctx->pc = 0x2A7D24u;
            goto label_2a7d24;
        }
    }
    ctx->pc = 0x2A7CF4u;
    // 0x2a7cf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7cf8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7cfc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a7cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d04: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d08: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2a7d08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a7d0c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a7d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7d14: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d18: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a7d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7d1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7d20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a7d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a7d24:
    // 0x2a7d24: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a7d24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7d2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2a7d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a7d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D38u;
}
