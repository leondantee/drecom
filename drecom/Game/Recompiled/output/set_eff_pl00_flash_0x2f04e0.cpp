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

// Function: set_eff_pl00_flash
// Address: 0x2f04e0 - 0x2f09b8
void set_eff_pl00_flash_0x2f04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_flash_0x2f04e0");
#endif

    switch (ctx->pc) {
        case 0x2f0548u: goto label_2f0548;
        case 0x2f05a4u: goto label_2f05a4;
        case 0x2f05d0u: goto label_2f05d0;
        case 0x2f0614u: goto label_2f0614;
        case 0x2f0708u: goto label_2f0708;
        case 0x2f07ecu: goto label_2f07ec;
        case 0x2f08c4u: goto label_2f08c4;
        case 0x2f099cu: goto label_2f099c;
        default: break;
    }

    ctx->pc = 0x2f04e0u;

    // 0x2f04e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f04e4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2f04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x2f04e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f04e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f04ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f04ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f04f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f04f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f04f4: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x2f04f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f04f8: 0xe7ad0078  swc1        $f13, 0x78($sp)
    ctx->pc = 0x2f04f8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f04fc: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x2f04fcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f0500: 0xe7af0088  swc1        $f15, 0x88($sp)
    ctx->pc = 0x2f0500u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2f0504: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2f0504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2f0508: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x2f0508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x2f050c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0510: 0x24428d70  addiu       $v0, $v0, -0x7290
    ctx->pc = 0x2f0510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x2f0514: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f0514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0518: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f0518u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398D70u));
    // 0x2f051c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f051cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f0520: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f0520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f0524: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f0524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f0528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f052c: 0x0  nop
    ctx->pc = 0x2f052cu;
    // NOP
    // 0x2f0530: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f0530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f0534: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0538: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f053c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2f053cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0540: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2F0540u;
    {
        const bool branch_taken_0x2f0540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0540) {
            ctx->pc = 0x2F05B8u;
            goto label_2f05b8;
        }
    }
    ctx->pc = 0x2F0548u;
label_2f0548:
    // 0x2f0548: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f054c: 0x24428d80  addiu       $v0, $v0, -0x7280
    ctx->pc = 0x2f054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x2f0550: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f0554: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f0554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0558: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f0558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f055c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0560: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0564: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f0564u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0568: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f0568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f056c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0570: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f0570u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0574: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f0574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0578: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f057c: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f057cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0580: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0584: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0588: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f0588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f058c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f058cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0590: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f0594: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f0594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0598: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f0598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f059c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F059Cu;
    SET_GPR_U32(ctx, 31, 0x2F05A4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F059Cu, 0x2F05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F05A4u;
label_2f05a4:
    // 0x2f05a4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f05a8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f05ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f05acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f05b0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f05b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f05b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f05b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f05b8:
    // 0x2f05b8: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x2f05b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f05bc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2F05BCu;
    {
        const bool branch_taken_0x2f05bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f05bc) {
            ctx->pc = 0x2F0548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0548;
        }
    }
    ctx->pc = 0x2F05C4u;
    // 0x2f05c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2f05c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f05c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F05C8u;
    {
        const bool branch_taken_0x2f05c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f05c8) {
            ctx->pc = 0x2F0618u;
            goto label_2f0618;
        }
    }
    ctx->pc = 0x2F05D0u;
label_2f05d0:
    // 0x2f05d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f05d4: 0x24428d90  addiu       $v0, $v0, -0x7270
    ctx->pc = 0x2f05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938000));
    // 0x2f05d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f05dc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f05dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f05e0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f05e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f05e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f05e8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f05ec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f05ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f05f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f05f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f05f4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f05f8: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x2f05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f05fc: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x2f05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2f0600: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x2f0600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2f0604: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f0604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0608: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f0608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f060c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F060Cu;
    SET_GPR_U32(ctx, 31, 0x2F0614u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F060Cu, 0x2F0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0614u;
label_2f0614:
    // 0x2f0614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f0614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f0618:
    // 0x2f0618: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x2f0618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f061c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F061Cu;
    {
        const bool branch_taken_0x2f061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f061c) {
            ctx->pc = 0x2F05D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f05d0;
        }
    }
    ctx->pc = 0x2F0624u;
    // 0x2f0624: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f0624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f0628: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f0628u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f062c: 0x24510500  addiu       $s1, $v0, 0x500
    ctx->pc = 0x2f062cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    // 0x2f0630: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f0630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f0634: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f0634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f0638: 0x24520540  addiu       $s2, $v0, 0x540
    ctx->pc = 0x2f0638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2f063c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2f063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0640: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2f0640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0648: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f064c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0650: 0x0  nop
    ctx->pc = 0x2f0650u;
    // NOP
    // 0x2f0654: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0658: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f0658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f065c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2f065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0660: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2f0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0664: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0668: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f066c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0670: 0x0  nop
    ctx->pc = 0x2f0670u;
    // NOP
    // 0x2f0674: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0678: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f0678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f067c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2f067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0680: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2f0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0684: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0688: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f068c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f068cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0690: 0x0  nop
    ctx->pc = 0x2f0690u;
    // NOP
    // 0x2f0694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0698: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f0698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f069c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f069cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f06a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f06a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f06a4: 0x0  nop
    ctx->pc = 0x2f06a4u;
    // NOP
    // 0x2f06a8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f06a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f06ac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2f06acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2f06b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f06b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f06b4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f06b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f06b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f06bc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f06bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f06c0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f06c4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06c8: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f06c8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f06cc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f06d0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f06d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06d4: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f06d4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f06d8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f06d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f06dc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f06dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f06e0: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f06e0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f06e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f06e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f06e8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2f06e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f06ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f06ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f06f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f06f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f06f4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f06f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f06f8: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f06f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f06fc: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f06fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f0700: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F0700u;
    SET_GPR_U32(ctx, 31, 0x2F0708u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F0700u, 0x2F0708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0708u;
label_2f0708:
    // 0x2f0708: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f0708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f070c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f070cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f0710: 0x24510540  addiu       $s1, $v0, 0x540
    ctx->pc = 0x2f0710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2f0714: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f0714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f0718: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f0718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f071c: 0x24520580  addiu       $s2, $v0, 0x580
    ctx->pc = 0x2f071cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x2f0720: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2f0720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0724: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2f0724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0728: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0728u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f072c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f0730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0734: 0x0  nop
    ctx->pc = 0x2f0734u;
    // NOP
    // 0x2f0738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f073c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f073cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f0740: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2f0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0744: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2f0744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0748: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f074c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f0750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0754: 0x0  nop
    ctx->pc = 0x2f0754u;
    // NOP
    // 0x2f0758: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f075c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f0760: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2f0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0764: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2f0764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0768: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f076c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f0770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0774: 0x0  nop
    ctx->pc = 0x2f0774u;
    // NOP
    // 0x2f0778: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f077c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f077cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f0780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f0780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0788: 0x0  nop
    ctx->pc = 0x2f0788u;
    // NOP
    // 0x2f078c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f0790: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2f0790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2f0794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0798: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f079c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f079cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f07a0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f07a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f07a4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07a8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07ac: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f07acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f07b0: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f07b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07b4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f07b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07b8: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f07b8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f07bc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f07bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f07c0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f07c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f07c4: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f07c4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f07c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f07c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f07cc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2f07ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f07d0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f07d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f07d4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f07d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f07d8: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f07dc: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f07dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f07e0: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f07e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f07e4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F07E4u;
    SET_GPR_U32(ctx, 31, 0x2F07ECu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F07E4u, 0x2F07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F07ECu;
label_2f07ec:
    // 0x2f07ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f07ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f07f0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f07f4: 0x24510600  addiu       $s1, $v0, 0x600
    ctx->pc = 0x2f07f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x2f07f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f07f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f07fc: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f0800: 0x24520640  addiu       $s2, $v0, 0x640
    ctx->pc = 0x2f0800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2f0804: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2f0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0808: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2f0808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f080c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f080cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0810: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f0814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0818: 0x0  nop
    ctx->pc = 0x2f0818u;
    // NOP
    // 0x2f081c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f081cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0820: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f0820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f0824: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2f0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0828: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2f0828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f082c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f082cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0830: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f0834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0838: 0x0  nop
    ctx->pc = 0x2f0838u;
    // NOP
    // 0x2f083c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f083cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0840: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f0840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f0844: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2f0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0848: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2f0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f084c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f084cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0850: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f0854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0858: 0x0  nop
    ctx->pc = 0x2f0858u;
    // NOP
    // 0x2f085c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f085cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0860: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f0860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f0864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f0864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f086c: 0x0  nop
    ctx->pc = 0x2f086cu;
    // NOP
    // 0x2f0870: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f0870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f0874: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0878: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f087c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0880: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0884: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f0884u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0888: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f0888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f088c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0890: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f0890u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0894: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0898: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f089c: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f089cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f08a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f08a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f08a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2f08a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f08a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f08a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f08ac: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f08acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f08b0: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f08b4: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f08b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f08b8: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f08b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f08bc: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F08BCu;
    SET_GPR_U32(ctx, 31, 0x2F08C4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F08BCu, 0x2F08C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F08C4u;
label_2f08c4:
    // 0x2f08c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f08c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f08c8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f08cc: 0x24510640  addiu       $s1, $v0, 0x640
    ctx->pc = 0x2f08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x2f08d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f08d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f08d4: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f08d8: 0x24520680  addiu       $s2, $v0, 0x680
    ctx->pc = 0x2f08d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x2f08dc: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2f08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f08e0: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2f08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f08e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f08e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f08e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f08ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f08ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f08f0: 0x0  nop
    ctx->pc = 0x2f08f0u;
    // NOP
    // 0x2f08f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f08f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f08f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f08f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f08fc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2f08fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0900: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2f0900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0904: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0908: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f090c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f090cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0910: 0x0  nop
    ctx->pc = 0x2f0910u;
    // NOP
    // 0x2f0914: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0918: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f0918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f091c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2f091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0920: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2f0920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0924: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f0924u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0928: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f0928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f092c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f092cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0930: 0x0  nop
    ctx->pc = 0x2f0930u;
    // NOP
    // 0x2f0934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f0934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f0938: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f0938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f093c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0944: 0x0  nop
    ctx->pc = 0x2f0944u;
    // NOP
    // 0x2f0948: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f0948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f094c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0950: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f0954: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2f0954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0958: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f095c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f095cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0960: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2f0960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0964: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0968: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f0968u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f096c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2f096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0970: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2f0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f0974: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f0974u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0978: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f0978u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f097c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2f097cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f0980: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f0980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0984: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f0984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0988: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f0988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f098c: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f098cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0990: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f0994: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F0994u;
    SET_GPR_U32(ctx, 31, 0x2F099Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F0994u, 0x2F099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F099Cu;
label_2f099c:
    // 0x2f099c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2f099cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f09a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f09a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f09a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f09a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f09a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f09a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f09ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2f09acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f09b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F09B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F09B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F09B8u;
}
