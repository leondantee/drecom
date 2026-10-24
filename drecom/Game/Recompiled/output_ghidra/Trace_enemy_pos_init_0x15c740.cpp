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

// Function: Trace_enemy_pos_init
// Address: 0x15c740 - 0x15c9c4
void Trace_enemy_pos_init_0x15c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trace_enemy_pos_init_0x15c740");
#endif

    switch (ctx->pc) {
        case 0x15c790u: goto label_15c790;
        case 0x15c7b4u: goto label_15c7b4;
        case 0x15c7c8u: goto label_15c7c8;
        case 0x15c7f4u: goto label_15c7f4;
        case 0x15c808u: goto label_15c808;
        case 0x15c828u: goto label_15c828;
        case 0x15c864u: goto label_15c864;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c914u: goto label_15c914;
        case 0x15c928u: goto label_15c928;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c970u: goto label_15c970;
        case 0x15c988u: goto label_15c988;
        default: break;
    }

    ctx->pc = 0x15c740u;

    // 0x15c740: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x15c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x15c744: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15c748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c74c: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x15c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
    // 0x15c750: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c754: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x15c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c758: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x15c758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x15c75c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15c75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15c760: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15c760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15c764: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c768: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x15c76c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c770: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c774: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c778: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c77c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15c780: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15c784: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x15c784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c788: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15C788u;
    SET_GPR_U32(ctx, 31, 0x15C790u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15C788u, 0x15C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C790u;
label_15c790:
    // 0x15c790: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x15c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c794: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x15c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c798: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15c798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c79c: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x15c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c7a0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x15c7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c7a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15c7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15c7a8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15c7a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15c7ac: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15C7ACu;
    SET_GPR_U32(ctx, 31, 0x15C7B4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15C7ACu, 0x15C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7B4u;
label_15c7b4:
    // 0x15c7b4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x15c7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x15c7b8: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x15c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c7bc: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x15c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c7c0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15C7C0u;
    SET_GPR_U32(ctx, 31, 0x15C7C8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15C7C0u, 0x15C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7C8u;
label_15c7c8:
    // 0x15c7c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c7c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15c7cc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15c7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15c7d0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c7d4: 0xc4411564  lwc1        $f1, 0x1564($v0)
    ctx->pc = 0x15c7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c7d8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x15c7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c7dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15c7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15c7e0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x15c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15c7e4: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x15c7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c7e8: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x15c7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c7ec: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15C7ECu;
    SET_GPR_U32(ctx, 31, 0x15C7F4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15C7ECu, 0x15C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7F4u;
label_15c7f4:
    // 0x15c7f4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c7f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x15c7f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x15c7fc: 0xc44d1568  lwc1        $f13, 0x1568($v0)
    ctx->pc = 0x15c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15c800: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15C800u;
    SET_GPR_U32(ctx, 31, 0x15C808u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15C800u, 0x15C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C808u;
label_15c808:
    // 0x15c808: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x15c808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x15c80c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x15c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x15c810: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15c814: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15c814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15c818: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15c81c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x15c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15c820: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x15C820u;
    SET_GPR_U32(ctx, 31, 0x15C828u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15C828u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C828u) { return; }
    ctx->pc = 0x15C828u;
label_15c828:
    // 0x15c828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c82c: 0x0  nop
    ctx->pc = 0x15c82cu;
    // NOP
    // 0x15c830: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x15c830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x15c834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c838: 0x0  nop
    ctx->pc = 0x15c838u;
    // NOP
    // 0x15c83c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x15c83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x15c840: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x15c840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c844: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x15c844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x15c848: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15c848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15c84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c850: 0x0  nop
    ctx->pc = 0x15c850u;
    // NOP
    // 0x15c854: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x15c854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x15c858: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c85c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x15C85Cu;
    SET_GPR_U32(ctx, 31, 0x15C864u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x15C864u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C864u) { return; }
    ctx->pc = 0x15C864u;
label_15c864:
    // 0x15c864: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c868: 0xc4601564  lwc1        $f0, 0x1564($v1)
    ctx->pc = 0x15c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c86c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15c86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15c870: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c874: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x15c874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c878: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x15c878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x15c87c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c880: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15c884: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x15c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x15c888: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15c888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15c88c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C88Cu;
    {
        const bool branch_taken_0x15c88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c88c) {
            ctx->pc = 0x15C8ACu;
            goto label_15c8ac;
        }
    }
    ctx->pc = 0x15C894u;
    // 0x15c894: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c898: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x15c898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x15c89c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15c8a0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x15c8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15c8a4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15C8A4u;
    {
        const bool branch_taken_0x15c8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8a4) {
            ctx->pc = 0x15C8DCu;
            goto label_15c8dc;
        }
    }
    ctx->pc = 0x15C8ACu;
label_15c8ac:
    // 0x15c8ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c8acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8b0: 0x0  nop
    ctx->pc = 0x15c8b0u;
    // NOP
    // 0x15c8b4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x15c8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15c8b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8bc: 0x0  nop
    ctx->pc = 0x15c8bcu;
    // NOP
    // 0x15c8c0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x15c8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x15c8c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15c8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c8c8: 0x0  nop
    ctx->pc = 0x15c8c8u;
    // NOP
    // 0x15c8cc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15c8d0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c8d4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x15c8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c8d8: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x15c8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_15c8dc:
    // 0x15c8dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15c8dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c8e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15C8E0u;
    {
        const bool branch_taken_0x15c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8e0) {
            ctx->pc = 0x15C990u;
            goto label_15c990;
        }
    }
    ctx->pc = 0x15C8E8u;
label_15c8e8:
    // 0x15c8e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c8ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c8f0: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x15c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c8f4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15C8F4u;
    SET_GPR_U32(ctx, 31, 0x15C8FCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15C8FCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C8FCu) { return; }
    ctx->pc = 0x15C8FCu;
label_15c8fc:
    // 0x15c8fc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c900: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c904: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15c908: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x15c908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c90c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15C90Cu;
    SET_GPR_U32(ctx, 31, 0x15C914u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15C914u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C914u) { return; }
    ctx->pc = 0x15C914u;
label_15c914:
    // 0x15c914: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c918: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c91c: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x15c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c920: 0xc040d0e  jal         func_103438
    ctx->pc = 0x15C920u;
    SET_GPR_U32(ctx, 31, 0x15C928u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x15C928u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C928u) { return; }
    ctx->pc = 0x15C928u;
label_15c928:
    // 0x15c928: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c92c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c930: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15c930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c934: 0xc040c00  jal         func_103000
    ctx->pc = 0x15C934u;
    SET_GPR_U32(ctx, 31, 0x15C93Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15C93Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C93Cu) { return; }
    ctx->pc = 0x15C93Cu;
label_15c93c:
    // 0x15c93c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x15c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15c940: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c948: 0x24441420  addiu       $a0, $v0, 0x1420
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c94c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c950: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15c954: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15C954u;
    SET_GPR_U32(ctx, 31, 0x15C95Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15C95Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C95Cu) { return; }
    ctx->pc = 0x15C95Cu;
label_15c95c:
    // 0x15c95c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x15c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c960: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x15c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c964: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15c964u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15c968: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15C968u;
    SET_GPR_U32(ctx, 31, 0x15C970u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15C968u, 0x15C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C970u;
label_15c970:
    // 0x15c970: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15c970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15c974: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x15c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c978: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x15c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c97c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15c97cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15c980: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15C980u;
    SET_GPR_U32(ctx, 31, 0x15C988u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15C980u, 0x15C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C988u;
label_15c988:
    // 0x15c988: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x15c988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x15c98c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15c990:
    // 0x15c990: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15c994: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x15C994u;
    {
        const bool branch_taken_0x15c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c994) {
            ctx->pc = 0x15C8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c8e8;
        }
    }
    ctx->pc = 0x15C99Cu;
    // 0x15c99c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c9a0: 0xa0601560  sb          $zero, 0x1560($v1)
    ctx->pc = 0x15c9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5472), (uint8_t)GPR_U32(ctx, 0));
    // 0x15c9a4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x15c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15c9a8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x15c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c9ac: 0xa0641561  sb          $a0, 0x1561($v1)
    ctx->pc = 0x15c9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5473), (uint8_t)GPR_U32(ctx, 4));
    // 0x15c9b0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15c9b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c9b8: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x15c9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x15c9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C9C4u;
}
