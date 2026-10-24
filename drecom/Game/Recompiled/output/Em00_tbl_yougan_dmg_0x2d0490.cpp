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

// Function: Em00_tbl_yougan_dmg
// Address: 0x2d0490 - 0x2d085c
void Em00_tbl_yougan_dmg_0x2d0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_tbl_yougan_dmg_0x2d0490");
#endif

    switch (ctx->pc) {
        case 0x2d04d0u: goto label_2d04d0;
        case 0x2d0514u: goto label_2d0514;
        case 0x2d0538u: goto label_2d0538;
        case 0x2d059cu: goto label_2d059c;
        case 0x2d0610u: goto label_2d0610;
        case 0x2d069cu: goto label_2d069c;
        case 0x2d074cu: goto label_2d074c;
        case 0x2d07c0u: goto label_2d07c0;
        case 0x2d084cu: goto label_2d084c;
        default: break;
    }

    ctx->pc = 0x2d0490u;

    // 0x2d0490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d0494: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d0494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d0498: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2d0498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2d049c: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2d049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2d04a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d04a4: 0x24428740  addiu       $v0, $v0, -0x78C0
    ctx->pc = 0x2d04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936384));
    // 0x2d04a8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d04ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d04acu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398740u));
    // 0x2d04b0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d04b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d04b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d04b8: 0x24428750  addiu       $v0, $v0, -0x78B0
    ctx->pc = 0x2d04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
    // 0x2d04bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d04c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d04c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398750u));
    // 0x2d04c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d04c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d04c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D04C8u;
    SET_GPR_U32(ctx, 31, 0x2D04D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D04C8u, 0x2D04D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04D0u;
label_2d04d0:
    // 0x2d04d0: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x2d04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x2d04d4: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x2d04d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x2d04d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d04d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d04dc: 0x0  nop
    ctx->pc = 0x2d04dcu;
    // NOP
    // 0x2d04e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d04e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d04e4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d04e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d04e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d04e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d04ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d04f0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d04f4: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d04f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d04fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0500: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0504: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D0504u;
    {
        const bool branch_taken_0x2d0504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0504) {
            ctx->pc = 0x2D0570u;
            goto label_2d0570;
        }
    }
    ctx->pc = 0x2D050Cu;
    // 0x2d050c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D050Cu;
    SET_GPR_U32(ctx, 31, 0x2D0514u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D050Cu, 0x2D0514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0514u;
label_2d0514:
    // 0x2d0514: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2d0514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2d0518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d0518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d051c: 0x0  nop
    ctx->pc = 0x2d051cu;
    // NOP
    // 0x2d0520: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0524: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2d0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d0528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d052c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d0530: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2D0530u;
    SET_GPR_U32(ctx, 31, 0x2D0538u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2D0530u, 0x2D0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0538u;
label_2d0538:
    // 0x2d0538: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2d053c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d053cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d0540: 0x0  nop
    ctx->pc = 0x2d0540u;
    // NOP
    // 0x2d0544: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0548: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2d0548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d054c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d054cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0550: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d0550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d0554: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2d0554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0558: 0x3c02c409  lui         $v0, 0xC409
    ctx->pc = 0x2d0558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50185 << 16));
    // 0x2d055c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2d055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2d0560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0564: 0x0  nop
    ctx->pc = 0x2d0564u;
    // NOP
    // 0x2d0568: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d0568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d056c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d056cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2d0570:
    // 0x2d0570: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0574: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0578: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d057c: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d0584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0588: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2d0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d058c: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2D058Cu;
    {
        const bool branch_taken_0x2d058c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d058c) {
            ctx->pc = 0x2D06A4u;
            goto label_2d06a4;
        }
    }
    ctx->pc = 0x2D0594u;
    // 0x2d0594: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D0594u;
    SET_GPR_U32(ctx, 31, 0x2D059Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D0594u, 0x2D059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D059Cu;
label_2d059c:
    // 0x2d059c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d05a0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d05a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d05a8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d05ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d05b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d05b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d05b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2d05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2d05bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d05bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d05c0: 0x0  nop
    ctx->pc = 0x2d05c0u;
    // NOP
    // 0x2d05c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d05c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d05c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d05c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d05cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d05d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d05d4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d05d8: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d05dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d05e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d05e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d05ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d05f0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d05f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d05f8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d05fc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d05fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0600: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d0600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0604: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2d0604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d0608: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D0608u;
    SET_GPR_U32(ctx, 31, 0x2D0610u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D0608u, 0x2D0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0610u;
label_2d0610:
    // 0x2d0610: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0614: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0618: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d061c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d061cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0624: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0628: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d0628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d062c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d062cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0630: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d0630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d0634: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d0634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0638: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d063c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d063cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0640: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d0644: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d0644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0648: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d064c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0650: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0654: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0658: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d0658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d065c: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2D065Cu;
    {
        const bool branch_taken_0x2d065c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d065c) {
            ctx->pc = 0x2D084Cu;
            goto label_2d084c;
        }
    }
    ctx->pc = 0x2D0664u;
    // 0x2d0664: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0668: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d066c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0670: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d067c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d067cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0680: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0684: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0688: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d0688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d068c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0690: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0694: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0694u;
    SET_GPR_U32(ctx, 31, 0x2D069Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0694u, 0x2D069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D069Cu;
label_2d069c:
    // 0x2d069c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2D069Cu;
    {
        const bool branch_taken_0x2d069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d069c) {
            ctx->pc = 0x2D084Cu;
            goto label_2d084c;
        }
    }
    ctx->pc = 0x2D06A4u;
label_2d06a4:
    // 0x2d06a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d06a8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d06ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d06acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d06b0: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d06b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d06b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d06bc: 0x28420018  slti        $v0, $v0, 0x18
    ctx->pc = 0x2d06bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2d06c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D06C0u;
    {
        const bool branch_taken_0x2d06c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d06c0) {
            ctx->pc = 0x2D06E4u;
            goto label_2d06e4;
        }
    }
    ctx->pc = 0x2D06C8u;
    // 0x2d06c8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x2d06c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x2d06cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d06ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d06d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d06d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d06d4: 0x0  nop
    ctx->pc = 0x2d06d4u;
    // NOP
    // 0x2d06d8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d06d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d06dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D06DCu;
    {
        const bool branch_taken_0x2d06dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d06dc) {
            ctx->pc = 0x2D0744u;
            goto label_2d0744;
        }
    }
    ctx->pc = 0x2D06E4u;
label_2d06e4:
    // 0x2d06e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d06e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d06ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d06f0: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d06f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d06f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d06fc: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2d06fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d0700: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0700u;
    {
        const bool branch_taken_0x2d0700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0700) {
            ctx->pc = 0x2D0730u;
            goto label_2d0730;
        }
    }
    ctx->pc = 0x2D0708u;
    // 0x2d0708: 0x3c02bfef  lui         $v0, 0xBFEF
    ctx->pc = 0x2d0708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49135 << 16));
    // 0x2d070c: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x2d070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x2d0710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0714: 0x0  nop
    ctx->pc = 0x2d0714u;
    // NOP
    // 0x2d0718: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d0718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d071c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d071cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0720: 0x0  nop
    ctx->pc = 0x2d0720u;
    // NOP
    // 0x2d0724: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d0724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d0728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0728u;
    {
        const bool branch_taken_0x2d0728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0728) {
            ctx->pc = 0x2D0744u;
            goto label_2d0744;
        }
    }
    ctx->pc = 0x2D0730u;
label_2d0730:
    // 0x2d0730: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d0730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d0734: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d0734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d0738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d0738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d073c: 0x0  nop
    ctx->pc = 0x2d073cu;
    // NOP
    // 0x2d0740: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d0740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2d0744:
    // 0x2d0744: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2D0744u;
    SET_GPR_U32(ctx, 31, 0x2D074Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2D0744u, 0x2D074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D074Cu;
label_2d074c:
    // 0x2d074c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0750: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0754: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0758: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d075c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0760: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2d0764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d0768: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d0768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d076c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d076cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d0770: 0x0  nop
    ctx->pc = 0x2d0770u;
    // NOP
    // 0x2d0774: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d0774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0778: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2d0778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2d077c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0780: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0784: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0788: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d078c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0790: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0794: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0798: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d079c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d07a0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2d07a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d07a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d07a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d07a8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d07a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d07ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d07acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d07b0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2d07b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d07b4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2d07b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d07b8: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2D07B8u;
    SET_GPR_U32(ctx, 31, 0x2D07C0u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2D07B8u, 0x2D07C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07C0u;
label_2d07c0:
    // 0x2d07c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d07c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d07c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d07c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d07c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d07c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d07cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d07d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d07d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d07d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d07d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d07d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2d07dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d07dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d07e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2d07e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2d07e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d07e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d07ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d07f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d07f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d07f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d07f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d07fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d07fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0800: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d0804: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d0804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0808: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2d0808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d080c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D080Cu;
    {
        const bool branch_taken_0x2d080c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d080c) {
            ctx->pc = 0x2D084Cu;
            goto label_2d084c;
        }
    }
    ctx->pc = 0x2D0814u;
    // 0x2d0814: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0818: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d081c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0820: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x2d0820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x2d0824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d082c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d082cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0830: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0834: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0838: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d083c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0840: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0844: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0844u;
    SET_GPR_U32(ctx, 31, 0x2D084Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0844u, 0x2D084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D084Cu;
label_2d084c:
    // 0x2d084c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d084cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0850: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d0854: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D085Cu;
}
