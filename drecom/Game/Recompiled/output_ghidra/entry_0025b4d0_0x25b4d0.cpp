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

// Function: entry_0025b4d0
// Address: 0x25b4d0 - 0x25b62c
void entry_0025b4d0_0x25b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b4d0_0x25b4d0");
#endif

    switch (ctx->pc) {
        case 0x25b544u: goto label_25b544;
        case 0x25b564u: goto label_25b564;
        case 0x25b584u: goto label_25b584;
        case 0x25b5a8u: goto label_25b5a8;
        case 0x25b600u: goto label_25b600;
        default: break;
    }

    ctx->pc = 0x25b4d0u;

    // 0x25b4d0: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25b4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b4d8: 0x0  nop
    ctx->pc = 0x25b4d8u;
    // NOP
    // 0x25b4dc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25b4dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25b4e0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25b4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25b4e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b4e8: 0xe44009d0  swc1        $f0, 0x9D0($v0)
    ctx->pc = 0x25b4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2512), bits); }
    // 0x25b4ec: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b4f0: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x25b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x25b4f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x25b4f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25b4f8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x25b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25b4fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25b500: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b504: 0xc48009d0  lwc1        $f0, 0x9D0($a0)
    ctx->pc = 0x25b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b508: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x25b508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x25b50c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b510: 0xc4a009d4  lwc1        $f0, 0x9D4($a1)
    ctx->pc = 0x25b510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b514: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x25b514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x25b518: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b51c: 0x94c209e0  lhu         $v0, 0x9E0($a2)
    ctx->pc = 0x25b51cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2528)));
    // 0x25b520: 0xa7a200c8  sh          $v0, 0xC8($sp)
    ctx->pc = 0x25b520u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b524: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b528: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x25b528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x25b52c: 0xa3a200e0  sb          $v0, 0xE0($sp)
    ctx->pc = 0x25b52cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 2));
    // 0x25b530: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b534: 0x248500e0  addiu       $a1, $a0, 0xE0
    ctx->pc = 0x25b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25b538: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25b538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25b53c: 0xc067688  jal         func_19DA20
    ctx->pc = 0x25B53Cu;
    SET_GPR_U32(ctx, 31, 0x25B544u);
    ctx->pc = 0x19DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA20u, 0x25B53Cu, 0x25B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B544u;
label_25b544:
    // 0x25b544: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b548: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b54c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b550: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x25b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25b554: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x25b554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x25b558: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x25b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b55c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x25B55Cu;
    SET_GPR_U32(ctx, 31, 0x25B564u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x25B55Cu, 0x25B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B564u;
label_25b564:
    // 0x25b564: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b568: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b56c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b570: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25b574: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x25b574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x25b578: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x25b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b57c: 0xc067808  jal         func_19E020
    ctx->pc = 0x25B57Cu;
    SET_GPR_U32(ctx, 31, 0x25B584u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25B57Cu, 0x25B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B584u;
label_25b584:
    // 0x25b584: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25b584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25b588: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b58c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b590: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b594: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25b598: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x25b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x25b59c: 0xc46c00d8  lwc1        $f12, 0xD8($v1)
    ctx->pc = 0x25b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b5a0: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25B5A0u;
    SET_GPR_U32(ctx, 31, 0x25B5A8u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25B5A0u, 0x25B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B5A8u;
label_25b5a8:
    // 0x25b5a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25b5a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25b5ac: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b5b0: 0x24830120  addiu       $v1, $a0, 0x120
    ctx->pc = 0x25b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x25b5b4: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x25b5b4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25b5b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b5bc: 0x24830110  addiu       $v1, $a0, 0x110
    ctx->pc = 0x25b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x25b5c0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x25b5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x25b5c4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b5c8: 0x8c6305f4  lw          $v1, 0x5F4($v1)
    ctx->pc = 0x25b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x25b5cc: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x25B5CCu;
    {
        const bool branch_taken_0x25b5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b5cc) {
            ctx->pc = 0x25B6ECu;
            return;
        }
    }
    ctx->pc = 0x25B5D4u;
    // 0x25b5d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25b5d8: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x25b5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x25b5dc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b5e0: 0x8c6405f4  lw          $a0, 0x5F4($v1)
    ctx->pc = 0x25b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x25b5e4: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x25b5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x25b5e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b5ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25b5f0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x25b5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25b5f4: 0x24460602  addiu       $a2, $v0, 0x602
    ctx->pc = 0x25b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1538));
    // 0x25b5f8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25B5F8u;
    SET_GPR_U32(ctx, 31, 0x25B600u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25B5F8u, 0x25B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B600u;
label_25b600:
    // 0x25b600: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b604: 0x94a209e0  lhu         $v0, 0x9E0($a1)
    ctx->pc = 0x25b604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2528)));
    // 0x25b608: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25b608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25b60c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25b60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25b610: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B610u;
    {
        const bool branch_taken_0x25b610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b610) {
            ctx->pc = 0x25B62Cu;
            return;
        }
    }
    ctx->pc = 0x25B618u;
    // 0x25b618: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x25b618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x25b61c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25b61cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b620: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25b628: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x25b628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->pc = 0x25b62cu;
}
