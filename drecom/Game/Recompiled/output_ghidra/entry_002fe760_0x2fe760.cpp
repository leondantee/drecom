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

// Function: entry_002fe760
// Address: 0x2fe760 - 0x2fe970
void entry_002fe760_0x2fe760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe760_0x2fe760");
#endif

    switch (ctx->pc) {
        case 0x2fe790u: goto label_2fe790;
        case 0x2fe7b8u: goto label_2fe7b8;
        case 0x2fe7e0u: goto label_2fe7e0;
        case 0x2fe828u: goto label_2fe828;
        case 0x2fe834u: goto label_2fe834;
        case 0x2fe8a4u: goto label_2fe8a4;
        case 0x2fe8c0u: goto label_2fe8c0;
        case 0x2fe8ecu: goto label_2fe8ec;
        default: break;
    }

    ctx->pc = 0x2fe760u;

    // 0x2fe760: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe764: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe768: 0x2861002f  slti        $at, $v1, 0x2F
    ctx->pc = 0x2fe768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)47) ? 1 : 0);
    // 0x2fe76c: 0x14200080  bnez        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x2FE76Cu;
    {
        const bool branch_taken_0x2fe76c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe76c) {
            ctx->pc = 0x2FE970u;
            return;
        }
    }
    ctx->pc = 0x2FE774u;
    // 0x2fe774: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe778: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe77c: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x2fe77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2fe780: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x2FE780u;
    {
        const bool branch_taken_0x2fe780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe780) {
            ctx->pc = 0x2FE970u;
            return;
        }
    }
    ctx->pc = 0x2FE788u;
    // 0x2fe788: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE788u;
    SET_GPR_U32(ctx, 31, 0x2FE790u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE788u, 0x2FE790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE790u;
label_2fe790:
    // 0x2fe790: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe798: 0x0  nop
    ctx->pc = 0x2fe798u;
    // NOP
    // 0x2fe79c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe79cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe7a4: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2fe7a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7ac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fe7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fe7b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE7B0u;
    SET_GPR_U32(ctx, 31, 0x2FE7B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE7B0u, 0x2FE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7B8u;
label_2fe7b8:
    // 0x2fe7b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe7bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe7c0: 0x0  nop
    ctx->pc = 0x2fe7c0u;
    // NOP
    // 0x2fe7c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe7c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe7cc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2fe7ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe7d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fe7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fe7d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE7D8u;
    SET_GPR_U32(ctx, 31, 0x2FE7E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE7D8u, 0x2FE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE7E0u;
label_2fe7e0:
    // 0x2fe7e0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2fe7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2fe7e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe7e8: 0x0  nop
    ctx->pc = 0x2fe7e8u;
    // NOP
    // 0x2fe7ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fe7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fe7f4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2fe7f4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7fc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fe7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fe800: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fe800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe808: 0x0  nop
    ctx->pc = 0x2fe808u;
    // NOP
    // 0x2fe80c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fe80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fe810: 0x24040426  addiu       $a0, $zero, 0x426
    ctx->pc = 0x2fe810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1062));
    // 0x2fe814: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fe814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe818: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2fe818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fe81c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2fe81cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe820: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FE820u;
    SET_GPR_U32(ctx, 31, 0x2FE828u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FE820u, 0x2FE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE828u;
label_2fe828:
    // 0x2fe828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fe828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe82c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FE82Cu;
    SET_GPR_U32(ctx, 31, 0x2FE834u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FE82Cu, 0x2FE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE834u;
label_2fe834:
    // 0x2fe834: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2fe834u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fe838: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2fe838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2fe83c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2fe83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2fe840: 0x1203004b  beq         $s0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2FE840u;
    {
        const bool branch_taken_0x2fe840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2fe840) {
            ctx->pc = 0x2FE970u;
            return;
        }
    }
    ctx->pc = 0x2FE848u;
    // 0x2fe848: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fe848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2fe84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe850: 0x0  nop
    ctx->pc = 0x2fe850u;
    // NOP
    // 0x2fe854: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2fe854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2fe858: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fe858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2fe85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe860: 0x0  nop
    ctx->pc = 0x2fe860u;
    // NOP
    // 0x2fe864: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2fe864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2fe868: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2fe868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2fe86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe870: 0x0  nop
    ctx->pc = 0x2fe870u;
    // NOP
    // 0x2fe874: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2fe874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2fe878: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2fe878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2fe87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe880: 0x0  nop
    ctx->pc = 0x2fe880u;
    // NOP
    // 0x2fe884: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2fe884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2fe888: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2fe888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2fe88c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2fe88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2fe890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe894: 0x0  nop
    ctx->pc = 0x2fe894u;
    // NOP
    // 0x2fe898: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2fe898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2fe89c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE89Cu;
    SET_GPR_U32(ctx, 31, 0x2FE8A4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE89Cu, 0x2FE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8A4u;
label_2fe8a4:
    // 0x2fe8a4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2fe8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2fe8a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8ac: 0x0  nop
    ctx->pc = 0x2fe8acu;
    // NOP
    // 0x2fe8b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe8b4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2fe8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2fe8b8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE8B8u;
    SET_GPR_U32(ctx, 31, 0x2FE8C0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE8B8u, 0x2FE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8C0u;
label_2fe8c0:
    // 0x2fe8c0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2fe8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2fe8c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fe8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8c8: 0x0  nop
    ctx->pc = 0x2fe8c8u;
    // NOP
    // 0x2fe8cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fe8ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe8d0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2fe8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2fe8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fe8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe8d8: 0x0  nop
    ctx->pc = 0x2fe8d8u;
    // NOP
    // 0x2fe8dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe8e0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2fe8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2fe8e4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FE8E4u;
    SET_GPR_U32(ctx, 31, 0x2FE8ECu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FE8E4u, 0x2FE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE8ECu;
label_2fe8ec:
    // 0x2fe8ec: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2fe8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2fe8f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fe8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8f4: 0x0  nop
    ctx->pc = 0x2fe8f4u;
    // NOP
    // 0x2fe8f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fe8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe8fc: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2fe8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2fe900: 0x3c033f6e  lui         $v1, 0x3F6E
    ctx->pc = 0x2fe900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe904: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x2fe904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x2fe908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe90c: 0x0  nop
    ctx->pc = 0x2fe90cu;
    // NOP
    // 0x2fe910: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2fe910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2fe914: 0x3c033f70  lui         $v1, 0x3F70
    ctx->pc = 0x2fe914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16240 << 16));
    // 0x2fe918: 0x3463a3d7  ori         $v1, $v1, 0xA3D7
    ctx->pc = 0x2fe918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41943);
    // 0x2fe91c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe920: 0x0  nop
    ctx->pc = 0x2fe920u;
    // NOP
    // 0x2fe924: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fe928: 0x3c033f6e  lui         $v1, 0x3F6E
    ctx->pc = 0x2fe928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16238 << 16));
    // 0x2fe92c: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x2fe92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x2fe930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe934: 0x0  nop
    ctx->pc = 0x2fe934u;
    // NOP
    // 0x2fe938: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fe938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2fe93c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2fe93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2fe940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe944: 0x0  nop
    ctx->pc = 0x2fe944u;
    // NOP
    // 0x2fe948: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2fe948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2fe94c: 0x3c033db8  lui         $v1, 0x3DB8
    ctx->pc = 0x2fe94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15800 << 16));
    // 0x2fe950: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2fe950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2fe954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe958: 0x0  nop
    ctx->pc = 0x2fe958u;
    // NOP
    // 0x2fe95c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2fe95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2fe960: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2fe960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2fe964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe968: 0x0  nop
    ctx->pc = 0x2fe968u;
    // NOP
    // 0x2fe96c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2fe96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->pc = 0x2fe970u;
}
