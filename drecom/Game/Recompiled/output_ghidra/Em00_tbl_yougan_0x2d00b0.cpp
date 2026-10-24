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

// Function: Em00_tbl_yougan
// Address: 0x2d00b0 - 0x2d0490
void Em00_tbl_yougan_0x2d00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_tbl_yougan_0x2d00b0");
#endif

    switch (ctx->pc) {
        case 0x2d00f0u: goto label_2d00f0;
        case 0x2d0134u: goto label_2d0134;
        case 0x2d0158u: goto label_2d0158;
        case 0x2d01bcu: goto label_2d01bc;
        case 0x2d0230u: goto label_2d0230;
        case 0x2d02bcu: goto label_2d02bc;
        case 0x2d0380u: goto label_2d0380;
        case 0x2d03f4u: goto label_2d03f4;
        case 0x2d0480u: goto label_2d0480;
        default: break;
    }

    ctx->pc = 0x2d00b0u;

    // 0x2d00b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d00b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d00b8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2d00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2d00bc: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2d00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x2d00c0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d00c4: 0x24428710  addiu       $v0, $v0, -0x78F0
    ctx->pc = 0x2d00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936336));
    // 0x2d00c8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d00cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d00ccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398710u));
    // 0x2d00d0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d00d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d00d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d00d8: 0x24428720  addiu       $v0, $v0, -0x78E0
    ctx->pc = 0x2d00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936352));
    // 0x2d00dc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d00e0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d00e0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398720u));
    // 0x2d00e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d00e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d00e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D00E8u;
    SET_GPR_U32(ctx, 31, 0x2D00F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D00E8u, 0x2D00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00F0u;
label_2d00f0:
    // 0x2d00f0: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x2d00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x2d00f4: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x2d00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x2d00f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d00f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d00fc: 0x0  nop
    ctx->pc = 0x2d00fcu;
    // NOP
    // 0x2d0100: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d0100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0104: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d0104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d0108: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d010c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d010cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0110: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0114: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d011c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0120: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0124: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D0124u;
    {
        const bool branch_taken_0x2d0124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0124) {
            ctx->pc = 0x2D0190u;
            goto label_2d0190;
        }
    }
    ctx->pc = 0x2D012Cu;
    // 0x2d012c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D012Cu;
    SET_GPR_U32(ctx, 31, 0x2D0134u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D012Cu, 0x2D0134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0134u;
label_2d0134:
    // 0x2d0134: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2d0134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2d0138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d0138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d013c: 0x0  nop
    ctx->pc = 0x2d013cu;
    // NOP
    // 0x2d0140: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0144: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d0144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0148: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d0148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d014c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d0150: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D0150u;
    SET_GPR_U32(ctx, 31, 0x2D0158u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D0150u, 0x2D0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0158u;
label_2d0158:
    // 0x2d0158: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2d0158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2d015c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d015cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d0160: 0x0  nop
    ctx->pc = 0x2d0160u;
    // NOP
    // 0x2d0164: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0168: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d0168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d016c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d016cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0170: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d0170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d0174: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2d0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0178: 0x3c02c409  lui         $v0, 0xC409
    ctx->pc = 0x2d0178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50185 << 16));
    // 0x2d017c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2d017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2d0180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0184: 0x0  nop
    ctx->pc = 0x2d0184u;
    // NOP
    // 0x2d0188: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d0188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d018c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d018cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2d0190:
    // 0x2d0190: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0194: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0198: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d019c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d01a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d01a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d01a8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d01ac: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D01ACu;
    {
        const bool branch_taken_0x2d01ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d01ac) {
            ctx->pc = 0x2D02C4u;
            goto label_2d02c4;
        }
    }
    ctx->pc = 0x2D01B4u;
    // 0x2d01b4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D01B4u;
    SET_GPR_U32(ctx, 31, 0x2D01BCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D01B4u, 0x2D01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D01BCu;
label_2d01bc:
    // 0x2d01bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d01c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d01c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d01c8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d01cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d01d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d01d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d01d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d01d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d01d8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2d01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2d01dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d01dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d01e0: 0x0  nop
    ctx->pc = 0x2d01e0u;
    // NOP
    // 0x2d01e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d01e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d01e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d01e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d01ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d01f0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d01f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d01f8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d01fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0200: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0204: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0208: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d0208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d020c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0210: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d0210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0214: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d0214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0218: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2d0218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d021c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d021cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0220: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0224: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2d0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d0228: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D0228u;
    SET_GPR_U32(ctx, 31, 0x2D0230u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D0228u, 0x2D0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0230u;
label_2d0230:
    // 0x2d0230: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0234: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0238: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d023c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d023cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0244: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0248: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d0248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d024c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d024cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0250: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0250u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0254: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0258: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d025c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d025cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0260: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d0264: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d0264u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0268: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d026c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0270: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0274: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0278: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d0278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d027c: 0x14600080  bnez        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x2D027Cu;
    {
        const bool branch_taken_0x2d027c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d027c) {
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D0284u;
    // 0x2d0284: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0288: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d028c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0290: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0298: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d029c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d029cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d02a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d02a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d02a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d02a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d02ac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d02acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d02b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d02b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d02b4: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D02B4u;
    SET_GPR_U32(ctx, 31, 0x2D02BCu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D02B4u, 0x2D02BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D02BCu;
label_2d02bc:
    // 0x2d02bc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2D02BCu;
    {
        const bool branch_taken_0x2d02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d02bc) {
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D02C4u;
label_2d02c4:
    // 0x2d02c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d02c8: 0x24428730  addiu       $v0, $v0, -0x78D0
    ctx->pc = 0x2d02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x2d02cc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2d02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d02d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d02d0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398730u));
    // 0x2d02d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d02d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d02dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d02dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d02e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d02e4: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d02e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d02ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d02f0: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x2d02f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2d02f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D02F4u;
    {
        const bool branch_taken_0x2d02f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d02f4) {
            ctx->pc = 0x2D0318u;
            goto label_2d0318;
        }
    }
    ctx->pc = 0x2D02FCu;
    // 0x2d02fc: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x2d02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x2d0300: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d0300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d0304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0308: 0x0  nop
    ctx->pc = 0x2d0308u;
    // NOP
    // 0x2d030c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d0310: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D0310u;
    {
        const bool branch_taken_0x2d0310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0310) {
            ctx->pc = 0x2D0378u;
            goto label_2d0378;
        }
    }
    ctx->pc = 0x2D0318u;
label_2d0318:
    // 0x2d0318: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d031c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d031cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0320: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0324: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d032c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0330: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2d0330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d0334: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0334u;
    {
        const bool branch_taken_0x2d0334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0334) {
            ctx->pc = 0x2D0364u;
            goto label_2d0364;
        }
    }
    ctx->pc = 0x2D033Cu;
    // 0x2d033c: 0x3c02bfef  lui         $v0, 0xBFEF
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49135 << 16));
    // 0x2d0340: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x2d0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x2d0344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0348: 0x0  nop
    ctx->pc = 0x2d0348u;
    // NOP
    // 0x2d034c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d0350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d0350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0354: 0x0  nop
    ctx->pc = 0x2d0354u;
    // NOP
    // 0x2d0358: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d0358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d035c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D035Cu;
    {
        const bool branch_taken_0x2d035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d035c) {
            ctx->pc = 0x2D0378u;
            goto label_2d0378;
        }
    }
    ctx->pc = 0x2D0364u;
label_2d0364:
    // 0x2d0364: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d0364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d0368: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d0368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d036c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d036cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0370: 0x0  nop
    ctx->pc = 0x2d0370u;
    // NOP
    // 0x2d0374: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2d0374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2d0378:
    // 0x2d0378: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D0378u;
    SET_GPR_U32(ctx, 31, 0x2D0380u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D0378u, 0x2D0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0380u;
label_2d0380:
    // 0x2d0380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d0384: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0388: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d038c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0394: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0398: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d039c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d039cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d03a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d03a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d03a4: 0x0  nop
    ctx->pc = 0x2d03a4u;
    // NOP
    // 0x2d03a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d03a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d03ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d03acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d03b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d03b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d03b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d03b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d03bc: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d03c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d03c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d03c8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d03cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d03d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d03d4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d03d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d03d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d03dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2d03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d03e0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d03e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d03e4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d03e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d03e8: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2d03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d03ec: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D03ECu;
    SET_GPR_U32(ctx, 31, 0x2D03F4u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D03ECu, 0x2D03F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03F4u;
label_2d03f4:
    // 0x2d03f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d03f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d03f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d03fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d03fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d040c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d040cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d0410: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0414: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0418: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d041c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d041cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0424: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d0428: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d042c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d0430: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0434: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0438: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d043c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d0440: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0440u;
    {
        const bool branch_taken_0x2d0440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0440) {
            ctx->pc = 0x2D0480u;
            goto label_2d0480;
        }
    }
    ctx->pc = 0x2D0448u;
    // 0x2d0448: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d044c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0450: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0454: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d045c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0460: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2d0464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0468: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d046c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d046cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0470: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d0470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0474: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0478: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0478u;
    SET_GPR_U32(ctx, 31, 0x2D0480u);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0478u, 0x2D0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0480u;
label_2d0480:
    // 0x2d0480: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d0480u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0484: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d0484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d0488: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0490u;
}
