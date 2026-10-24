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

// Function: Gp_SQGT4_mul_ver2_w
// Address: 0x1d56d0 - 0x1d5ed8
void Gp_SQGT4_mul_ver2_w_0x1d56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_SQGT4_mul_ver2_w_0x1d56d0");
#endif

    switch (ctx->pc) {
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d582cu: goto label_1d582c;
        case 0x1d5848u: goto label_1d5848;
        case 0x1d58b0u: goto label_1d58b0;
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58ecu: goto label_1d58ec;
        case 0x1d590cu: goto label_1d590c;
        case 0x1d5928u: goto label_1d5928;
        case 0x1d5948u: goto label_1d5948;
        case 0x1d5968u: goto label_1d5968;
        case 0x1d5988u: goto label_1d5988;
        case 0x1d59a8u: goto label_1d59a8;
        case 0x1d59c4u: goto label_1d59c4;
        case 0x1d59e0u: goto label_1d59e0;
        case 0x1d59fcu: goto label_1d59fc;
        case 0x1d5a18u: goto label_1d5a18;
        case 0x1d5a34u: goto label_1d5a34;
        case 0x1d5a4cu: goto label_1d5a4c;
        case 0x1d5a64u: goto label_1d5a64;
        case 0x1d5a80u: goto label_1d5a80;
        case 0x1d5a9cu: goto label_1d5a9c;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5accu: goto label_1d5acc;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5b04u: goto label_1d5b04;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b58u: goto label_1d5b58;
        case 0x1d5b60u: goto label_1d5b60;
        case 0x1d5bccu: goto label_1d5bcc;
        case 0x1d5c04u: goto label_1d5c04;
        case 0x1d5d50u: goto label_1d5d50;
        case 0x1d5d64u: goto label_1d5d64;
        case 0x1d5d70u: goto label_1d5d70;
        default: break;
    }

    ctx->pc = 0x1d56d0u;

    // 0x1d56d0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1d56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1d56d4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d56d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d56d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d56d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d56dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d56dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d56e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d56e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d56e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d56e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d56e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d56ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d56ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d56f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d56f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d56f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d56f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d56f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d56fc: 0xafa401a8  sw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 4));
    // 0x1d5700: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x1d5700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x1d5704: 0xafa601b8  sw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d5704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 6));
    // 0x1d5708: 0xafa701c0  sw          $a3, 0x1C0($sp)
    ctx->pc = 0x1d5708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 7));
    // 0x1d570c: 0xafa801c8  sw          $t0, 0x1C8($sp)
    ctx->pc = 0x1d570cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 8));
    // 0x1d5710: 0xafa901d0  sw          $t1, 0x1D0($sp)
    ctx->pc = 0x1d5710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 9));
    // 0x1d5714: 0xafaa01d8  sw          $t2, 0x1D8($sp)
    ctx->pc = 0x1d5714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 10));
    // 0x1d5718: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x1d5718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1d571c: 0x385e0001  xori        $fp, $v0, 0x1
    ctx->pc = 0x1d571cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d5720: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1d5720u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d5724: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d5728: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x1d5728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d572c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x1d572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1d5730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5730u;
    {
        const bool branch_taken_0x1d5730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5730) {
            ctx->pc = 0x1D5748u;
            goto label_1d5748;
        }
    }
    ctx->pc = 0x1D5738u;
    // 0x1d5738: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1d5738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1d573c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d573cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5740u;
    {
        const bool branch_taken_0x1d5740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5740) {
            ctx->pc = 0x1D5750u;
            goto label_1d5750;
        }
    }
    ctx->pc = 0x1D5748u;
label_1d5748:
    // 0x1d5748: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d574c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d574cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1d5750:
    // 0x1d5750: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x1d5754: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5754u;
    {
        const bool branch_taken_0x1d5754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5754) {
            ctx->pc = 0x1D578Cu;
            goto label_1d578c;
        }
    }
    ctx->pc = 0x1D575Cu;
    // 0x1d575c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d5760: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d5760u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5764: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d5764u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d5768: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d576c: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1d576cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d5770: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1d5770u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1d5774: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1d5774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1d5778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d577c: 0x0  nop
    ctx->pc = 0x1d577cu;
    // NOP
    // 0x1d5780: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1d5780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1d5784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5784u;
    {
        const bool branch_taken_0x1d5784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5784) {
            ctx->pc = 0x1D57A0u;
            goto label_1d57a0;
        }
    }
    ctx->pc = 0x1D578Cu;
label_1d578c:
    // 0x1d578c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d578cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d5790: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x1d5790u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d5794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5798: 0x0  nop
    ctx->pc = 0x1d5798u;
    // NOP
    // 0x1d579c: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1d579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1d57a0:
    // 0x1d57a0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d57a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d57ac: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x1d57acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d57b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d57b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57b4: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D57B4u;
    SET_GPR_U32(ctx, 31, 0x1D57BCu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D57BCu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D57BCu) { return; }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1d57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d57c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d57c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1d57c8: 0x2462e510  addiu       $v0, $v1, -0x1AF0
    ctx->pc = 0x1d57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960400));
    // 0x1d57cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d57ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57d0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D57D0u;
    SET_GPR_U32(ctx, 31, 0x1D57D8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D57D8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D57D8u) { return; }
    ctx->pc = 0x1D57D8u;
label_1d57d8:
    // 0x1d57d8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x1d57d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d57dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1d57dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d57e0: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1d57e4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d57e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57e8: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d57e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d57ec: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D57ECu;
    SET_GPR_U32(ctx, 31, 0x1D57F4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D57ECu, 0x1D57F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57F4u;
label_1d57f4:
    // 0x1d57f4: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x1d57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d57f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d57f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d57fc: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d5800: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d5800u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5804: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d5808: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D5808u;
    SET_GPR_U32(ctx, 31, 0x1D5810u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D5808u, 0x1D5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5810u;
label_1d5810:
    // 0x1d5810: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d5814: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1d5814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d5818: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d581c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d581cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5820: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5824: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D5824u;
    SET_GPR_U32(ctx, 31, 0x1D582Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D5824u, 0x1D582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D582Cu;
label_1d582c:
    // 0x1d582c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d5830: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1d5830u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d5834: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1d5838: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d5838u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d583c: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d583cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5840: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1D5840u;
    SET_GPR_U32(ctx, 31, 0x1D5848u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1D5840u, 0x1D5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5848u;
label_1d5848:
    // 0x1d5848: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d584c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d584cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5850: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5854: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1d5858: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d5858u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d585c: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d5860: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d5860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5864: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5868: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1d586c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d586cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d5870: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1d5874: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d5874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5878: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d587c: 0x24820940  addiu       $v0, $a0, 0x940
    ctx->pc = 0x1d587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2368));
    // 0x1d5880: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d5880u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d5884: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1d5884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5888: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1d5888u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d588c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5890: 0x24630980  addiu       $v1, $v1, 0x980
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2432));
    // 0x1d5894: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d5894u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d5898: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1d5898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1d589c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d589cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d58a0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d58a4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1d58a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d58a8: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D58A8u;
    SET_GPR_U32(ctx, 31, 0x1D58B0u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D58A8u, 0x1D58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58B0u;
label_1d58b0:
    // 0x1d58b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d58b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d58b4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58b8: 0x24640810  addiu       $a0, $v1, 0x810
    ctx->pc = 0x1d58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2064));
    // 0x1d58bc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d58c0: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d58c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d58c4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D58C4u;
    SET_GPR_U32(ctx, 31, 0x1D58CCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D58C4u, 0x1D58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58CCu;
label_1d58cc:
    // 0x1d58cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d58ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d58d0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58d4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58d8: 0x24840820  addiu       $a0, $a0, 0x820
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2080));
    // 0x1d58dc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d58e0: 0x24660810  addiu       $a2, $v1, 0x810
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2064));
    // 0x1d58e4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D58E4u;
    SET_GPR_U32(ctx, 31, 0x1D58ECu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D58E4u, 0x1D58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58ECu;
label_1d58ec:
    // 0x1d58ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d58ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d58f0: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58f4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d58f8: 0x24840830  addiu       $a0, $a0, 0x830
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
    // 0x1d58fc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5900: 0x24660820  addiu       $a2, $v1, 0x820
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x1d5904: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5904u;
    SET_GPR_U32(ctx, 31, 0x1D590Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5904u, 0x1D590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D590Cu;
label_1d590c:
    // 0x1d590c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d590cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5910: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1d5914: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d5914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5918: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d591c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1d591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d5920: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D5920u;
    SET_GPR_U32(ctx, 31, 0x1D5928u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D5920u, 0x1D5928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5928u;
label_1d5928:
    // 0x1d5928: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d5928u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d592c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5930: 0x24640850  addiu       $a0, $v1, 0x850
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x1d5934: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5938: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1d5938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1d593c: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x1d593cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1d5940: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5940u;
    SET_GPR_U32(ctx, 31, 0x1D5948u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5940u, 0x1D5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5948u;
label_1d5948:
    // 0x1d5948: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d5948u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d594c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5950: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5954: 0x24840860  addiu       $a0, $a0, 0x860
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2144));
    // 0x1d5958: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d595c: 0x24660850  addiu       $a2, $v1, 0x850
    ctx->pc = 0x1d595cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x1d5960: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5960u;
    SET_GPR_U32(ctx, 31, 0x1D5968u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5960u, 0x1D5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5968u;
label_1d5968:
    // 0x1d5968: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1d5968u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d596c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1d596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5970: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5974: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x1d5978: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d597c: 0x24660860  addiu       $a2, $v1, 0x860
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2144));
    // 0x1d5980: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5980u;
    SET_GPR_U32(ctx, 31, 0x1D5988u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5980u, 0x1D5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5988u;
label_1d5988:
    // 0x1d5988: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1d5988u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d598c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5990: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5994: 0x24640880  addiu       $a0, $v1, 0x880
    ctx->pc = 0x1d5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1d5998: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d599c: 0x24460870  addiu       $a2, $v0, 0x870
    ctx->pc = 0x1d599cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x1d59a0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59A0u;
    SET_GPR_U32(ctx, 31, 0x1D59A8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59A0u, 0x1D59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59A8u;
label_1d59a8:
    // 0x1d59a8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59ac: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59b0: 0x246408a0  addiu       $a0, $v1, 0x8A0
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2208));
    // 0x1d59b4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d59b8: 0x24460850  addiu       $a2, $v0, 0x850
    ctx->pc = 0x1d59b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x1d59bc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59BCu;
    SET_GPR_U32(ctx, 31, 0x1D59C4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59BCu, 0x1D59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59C4u;
label_1d59c4:
    // 0x1d59c4: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59c8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59cc: 0x246408b0  addiu       $a0, $v1, 0x8B0
    ctx->pc = 0x1d59ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1d59d0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d59d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d59d4: 0x244608a0  addiu       $a2, $v0, 0x8A0
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
    // 0x1d59d8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59D8u;
    SET_GPR_U32(ctx, 31, 0x1D59E0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59D8u, 0x1D59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59E0u;
label_1d59e0:
    // 0x1d59e0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59e4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d59e8: 0x246408c0  addiu       $a0, $v1, 0x8C0
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2240));
    // 0x1d59ec: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d59f0: 0x244608b0  addiu       $a2, $v0, 0x8B0
    ctx->pc = 0x1d59f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1d59f4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D59F4u;
    SET_GPR_U32(ctx, 31, 0x1D59FCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D59F4u, 0x1D59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59FCu;
label_1d59fc:
    // 0x1d59fc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a00: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a04: 0x246408f0  addiu       $a0, $v1, 0x8F0
    ctx->pc = 0x1d5a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
    // 0x1d5a08: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5a0c: 0x244608a0  addiu       $a2, $v0, 0x8A0
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
    // 0x1d5a10: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A10u;
    SET_GPR_U32(ctx, 31, 0x1D5A18u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A10u, 0x1D5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A18u;
label_1d5a18:
    // 0x1d5a18: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a1c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a20: 0x24640900  addiu       $a0, $v1, 0x900
    ctx->pc = 0x1d5a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2304));
    // 0x1d5a24: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a28: 0x244608f0  addiu       $a2, $v0, 0x8F0
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1d5a2c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A34u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A2Cu, 0x1D5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A34u;
label_1d5a34:
    // 0x1d5a34: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1d5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1d5a38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d5a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5a3c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a40: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d5a44: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D5A44u;
    SET_GPR_U32(ctx, 31, 0x1D5A4Cu);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D5A44u, 0x1D5A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A4Cu;
label_1d5a4c:
    // 0x1d5a4c: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a50: 0x24440970  addiu       $a0, $v0, 0x970
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x1d5a54: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a58: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d5a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5a5c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A64u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A5Cu, 0x1D5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A64u;
label_1d5a64:
    // 0x1d5a64: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a68: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a6c: 0x24640960  addiu       $a0, $v1, 0x960
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x1d5a70: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a74: 0x24460970  addiu       $a2, $v0, 0x970
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
    // 0x1d5a78: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A78u;
    SET_GPR_U32(ctx, 31, 0x1D5A80u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A78u, 0x1D5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A80u;
label_1d5a80:
    // 0x1d5a80: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a84: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5a88: 0x24640950  addiu       $a0, $v1, 0x950
    ctx->pc = 0x1d5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x1d5a8c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5a90: 0x24460960  addiu       $a2, $v0, 0x960
    ctx->pc = 0x1d5a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x1d5a94: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5A94u;
    SET_GPR_U32(ctx, 31, 0x1D5A9Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5A94u, 0x1D5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A9Cu;
label_1d5a9c:
    // 0x1d5a9c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1d5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1d5aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d5aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5aa4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5aa8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d5aac: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x1D5AACu;
    SET_GPR_U32(ctx, 31, 0x1D5AB4u);
    ctx->pc = 0x19D710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D710u, 0x1D5AACu, 0x1D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AB4u;
label_1d5ab4:
    // 0x1d5ab4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5ab8: 0x24440930  addiu       $a0, $v0, 0x930
    ctx->pc = 0x1d5ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1d5abc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5ac0: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1d5ac4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5AC4u;
    SET_GPR_U32(ctx, 31, 0x1D5ACCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5AC4u, 0x1D5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ACCu;
label_1d5acc:
    // 0x1d5acc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5ad0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5ad4: 0x24640920  addiu       $a0, $v1, 0x920
    ctx->pc = 0x1d5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x1d5ad8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5adc: 0x24460930  addiu       $a2, $v0, 0x930
    ctx->pc = 0x1d5adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1d5ae0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5AE0u;
    SET_GPR_U32(ctx, 31, 0x1D5AE8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5AE0u, 0x1D5AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AE8u;
label_1d5ae8:
    // 0x1d5ae8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5aec: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5af0: 0x24640910  addiu       $a0, $v1, 0x910
    ctx->pc = 0x1d5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2320));
    // 0x1d5af4: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5af8: 0x24460920  addiu       $a2, $v0, 0x920
    ctx->pc = 0x1d5af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2336));
    // 0x1d5afc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5AFCu;
    SET_GPR_U32(ctx, 31, 0x1D5B04u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5AFCu, 0x1D5B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B04u;
label_1d5b04:
    // 0x1d5b04: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b08: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b0c: 0x246408e0  addiu       $a0, $v1, 0x8E0
    ctx->pc = 0x1d5b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2272));
    // 0x1d5b10: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5b14: 0x24460930  addiu       $a2, $v0, 0x930
    ctx->pc = 0x1d5b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x1d5b18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5B18u;
    SET_GPR_U32(ctx, 31, 0x1D5B20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5B18u, 0x1D5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B20u;
label_1d5b20:
    // 0x1d5b20: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b24: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b28: 0x246408d0  addiu       $a0, $v1, 0x8D0
    ctx->pc = 0x1d5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2256));
    // 0x1d5b2c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1d5b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d5b30: 0x244608e0  addiu       $a2, $v0, 0x8E0
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x1d5b34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5B34u;
    SET_GPR_U32(ctx, 31, 0x1D5B3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5B34u, 0x1D5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B3Cu;
label_1d5b3c:
    // 0x1d5b3c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1d5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b40: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5b44: 0x24640890  addiu       $a0, $v1, 0x890
    ctx->pc = 0x1d5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x1d5b48: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1d5b4c: 0x244608e0  addiu       $a2, $v0, 0x8E0
    ctx->pc = 0x1d5b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x1d5b50: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1D5B50u;
    SET_GPR_U32(ctx, 31, 0x1D5B58u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1D5B50u, 0x1D5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B58u;
label_1d5b58:
    // 0x1d5b58: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x1d5b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d5b5c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d5b5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d5b60:
    // 0x1d5b60: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d5b64: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d5b68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5b6c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5b70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5b74: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d5b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d5b78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5b7c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1d5b7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5b80: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5b84: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5b88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5b8c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5b90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d5b94: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d5b98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5b9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d5b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5ba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5ba4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d5ba8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5bac: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5bb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5bb4: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1d5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1d5bb8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5bbc: 0x24460800  addiu       $a2, $v0, 0x800
    ctx->pc = 0x1d5bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1d5bc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5bc4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D5BC4u;
    SET_GPR_U32(ctx, 31, 0x1D5BCCu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D5BCCu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D5BCCu) { return; }
    ctx->pc = 0x1D5BCCu;
label_1d5bcc:
    // 0x1d5bcc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d5bd0: 0x24429260  addiu       $v0, $v0, -0x6DA0
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x1d5bd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5bd8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d5bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5be0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d5be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d5be4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5be8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5bf0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d5bf4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d5bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5bf8: 0x24460800  addiu       $a2, $v0, 0x800
    ctx->pc = 0x1d5bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1d5bfc: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D5BFCu;
    SET_GPR_U32(ctx, 31, 0x1D5C04u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D5BFCu, 0x1D5C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C04u;
label_1d5c04:
    // 0x1d5c04: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1d5c08: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d5c08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d5c0c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5c10: 0x50f021  addu        $fp, $v0, $s0
    ctx->pc = 0x1d5c10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5c14: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1d5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1d5c18: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x1d5c18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5c1c: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x1d5c20: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d5c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5c28: 0x0  nop
    ctx->pc = 0x1d5c28u;
    // NOP
    // 0x1d5c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d5c30: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x1d5c34: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d5c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5c3c: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5c40: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5c40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5c44: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5c48: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5c4c: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1d5c4cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5c50: 0x2361021  addu        $v0, $s1, $s6
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1d5c54: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1d5c58: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x1d5c58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d5c5c: 0x217001b  divu        $zero, $s0, $s7
    ctx->pc = 0x1d5c5cu;
    { uint32_t divisor = GPR_U32(ctx, 23); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1d5c60: 0x0  nop
    ctx->pc = 0x1d5c60u;
    // NOP
    // 0x1d5c64: 0x0  nop
    ctx->pc = 0x1d5c64u;
    // NOP
    // 0x1d5c68: 0x1010  mfhi        $v0
    ctx->pc = 0x1d5c68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d5c6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5C6Cu;
    {
        const bool branch_taken_0x1d5c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c6c) {
            ctx->pc = 0x1D5C90u;
            goto label_1d5c90;
        }
    }
    ctx->pc = 0x1D5C74u;
    // 0x1d5c74: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5c78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5c7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5c80: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5c84: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5c88: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d5c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x1d5c8c: 0x0  nop
    ctx->pc = 0x1d5c8cu;
    // NOP
label_1d5c90:
    // 0x1d5c90: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1d5c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5c94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5c98: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5ca0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d5ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5ca8: 0xc44009dc  lwc1        $f0, 0x9DC($v0)
    ctx->pc = 0x1d5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5cac: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d5cacu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5cb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5cb4: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5cb8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1d5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d5cbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5cc0: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d5cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d5cc8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1d5cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1d5ccc: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1d5cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5cd0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1d5cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5cd4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5cd8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d5cdc: 0x846209aa  lh          $v0, 0x9AA($v1)
    ctx->pc = 0x1d5cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2474)));
    // 0x1d5ce0: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1d5ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5ce4: 0xa46609aa  sh          $a2, 0x9AA($v1)
    ctx->pc = 0x1d5ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2474), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d5ce8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5cec: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5cf0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1d5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5cf4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5cf8: 0x84c209aa  lh          $v0, 0x9AA($a2)
    ctx->pc = 0x1d5cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2474)));
    // 0x1d5cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5d00: 0xa4c209aa  sh          $v0, 0x9AA($a2)
    ctx->pc = 0x1d5d00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2474), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5d04: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5d08: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1d5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5d0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5d10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5d14: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1d5d18: 0x24628700  addiu       $v0, $v1, -0x7900
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x1d5d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5d20: 0x0  nop
    ctx->pc = 0x1d5d20u;
    // NOP
    // 0x1d5d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d5d28: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x1d5d2c: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d5d30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5d34: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x1d5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d38: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d5d38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5d3c: 0x0  nop
    ctx->pc = 0x1d5d3cu;
    // NOP
    // 0x1d5d40: 0x0  nop
    ctx->pc = 0x1d5d40u;
    // NOP
    // 0x1d5d44: 0x0  nop
    ctx->pc = 0x1d5d44u;
    // NOP
    // 0x1d5d48: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D5D48u;
    SET_GPR_U32(ctx, 31, 0x1D5D50u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D5D48u, 0x1D5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D50u;
label_1d5d50:
    // 0x1d5d50: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d5d54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5d58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d5d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5d5c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D64u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D5D5Cu, 0x1D5D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D64u;
label_1d5d64:
    // 0x1d5d64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d5d64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d5d68: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D5D68u;
    SET_GPR_U32(ctx, 31, 0x1D5D70u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D5D68u, 0x1D5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D70u;
label_1d5d70:
    // 0x1d5d70: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5d74: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5d78: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5d7c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5d80: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1d5d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1d5d84: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5d88: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5d8c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1d5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5d90: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d5d94: 0xc4610084  lwc1        $f1, 0x84($v1)
    ctx->pc = 0x1d5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5d98: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1d5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d5d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d5da0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1d5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1d5da4: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1d5da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1d5da8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5dac: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1d5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1d5db0: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1d5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d5db4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d5db8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5dbc: 0xc4c009dc  lwc1        $f0, 0x9DC($a2)
    ctx->pc = 0x1d5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dc0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d5dc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5dc4: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x1d5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dc8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d5dc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d5dcc: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5dd0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d5dd4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1d5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5dd8: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d5ddc: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x1d5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5de0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1d5de0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d5de4: 0x3c064200  lui         $a2, 0x4200
    ctx->pc = 0x1d5de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16896 << 16));
    // 0x1d5de8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d5de8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5dec: 0x0  nop
    ctx->pc = 0x1d5decu;
    // NOP
    // 0x1d5df0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d5df0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d5df4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5df8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5dfc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5e00: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5e04: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1d5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d5e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d5e0c: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1d5e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1d5e10: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5e14: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1d5e18: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1d5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d5e1c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5e20: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x1d5e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x1d5e24: 0x1323bc  dsll32      $a0, $s3, 14
    ctx->pc = 0x1d5e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 14));
    // 0x1d5e28: 0x423be  dsrl32      $a0, $a0, 14
    ctx->pc = 0x1d5e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 14));
    // 0x1d5e2c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5E2Cu;
    {
        const bool branch_taken_0x1d5e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e2c) {
            ctx->pc = 0x1D5E50u;
            goto label_1d5e50;
        }
    }
    ctx->pc = 0x1D5E34u;
    // 0x1d5e34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d5e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d5e38: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5e3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e40: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1d5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d5e44: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x1d5e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d5e48: 0xac6500ac  sw          $a1, 0xAC($v1)
    ctx->pc = 0x1d5e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 5));
    // 0x1d5e4c: 0x0  nop
    ctx->pc = 0x1d5e4cu;
    // NOP
label_1d5e50:
    // 0x1d5e50: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1d5e54: 0x24c39260  addiu       $v1, $a2, -0x6DA0
    ctx->pc = 0x1d5e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
    // 0x1d5e58: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e5c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d5e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5e60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d5e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d5e64: 0x30850080  andi        $a1, $a0, 0x80
    ctx->pc = 0x1d5e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x1d5e68: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5E68u;
    {
        const bool branch_taken_0x1d5e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e68) {
            ctx->pc = 0x1D5E88u;
            goto label_1d5e88;
        }
    }
    ctx->pc = 0x1D5E70u;
    // 0x1d5e70: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1d5e70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d5e74: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5e78: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d5e7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5e80: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x1d5e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d5e84: 0xac8600ac  sw          $a2, 0xAC($a0)
    ctx->pc = 0x1d5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 6));
label_1d5e88:
    // 0x1d5e88: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1d5e8c: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x1d5e8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d5e90: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5e94: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1d5e94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1d5e98: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d5e9c: 0x1680ff30  bnez        $s4, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x1D5E9Cu;
    {
        const bool branch_taken_0x1d5e9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e9c) {
            ctx->pc = 0x1D5B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b60;
        }
    }
    ctx->pc = 0x1D5EA4u;
    // 0x1d5ea4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d5ea4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d5ea8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d5ea8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5eac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d5eacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5eb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d5eb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5eb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d5eb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5eb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d5eb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ecc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d5ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ED8u;
}
