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

// Function: Eff2d_init_v0
// Address: 0x326290 - 0x32645c
void Eff2d_init_v0_0x326290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_init_v0_0x326290");
#endif

    switch (ctx->pc) {
        case 0x3262b0u: goto label_3262b0;
        case 0x3262d4u: goto label_3262d4;
        case 0x3262f8u: goto label_3262f8;
        case 0x326364u: goto label_326364;
        case 0x326388u: goto label_326388;
        case 0x3263c0u: goto label_3263c0;
        case 0x3263e8u: goto label_3263e8;
        case 0x32644cu: goto label_32644c;
        default: break;
    }

    ctx->pc = 0x326290u;

    // 0x326290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x326290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x326294: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x326294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x326298: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x326298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x32629c: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x32629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x3262a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3262a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3262a4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3262a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3262a8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3262A8u;
    SET_GPR_U32(ctx, 31, 0x3262B0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3262A8u, 0x3262B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262B0u;
label_3262b0:
    // 0x3262b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3262b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3262b4: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x3262b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3262b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3262b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3262bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3262bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3262c0: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x3262c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3262c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3262c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3262c8: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3262c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x3262cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3262CCu;
    SET_GPR_U32(ctx, 31, 0x3262D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3262CCu, 0x3262D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262D4u;
label_3262d4:
    // 0x3262d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3262d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3262d8: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x3262d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3262dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3262dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3262e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3262e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3262e4: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x3262e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3262e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3262e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3262ec: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x3262ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x3262f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3262F0u;
    SET_GPR_U32(ctx, 31, 0x3262F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3262F0u, 0x3262F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262F8u;
label_3262f8:
    // 0x3262f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3262f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3262fc: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x3262fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326300: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x326300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326304: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326308: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x326308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32630c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32630cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x326310: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x326310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x326314: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326318: 0x94630118  lhu         $v1, 0x118($v1)
    ctx->pc = 0x326318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x32631c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x326320: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x326320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x326324: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x326324u;
    {
        const bool branch_taken_0x326324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326324) {
            ctx->pc = 0x326414u;
            goto label_326414;
        }
    }
    ctx->pc = 0x32632Cu;
    // 0x32632c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x32632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326330: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x326330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326334: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x326338: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x326338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32633c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32633Cu;
    {
        const bool branch_taken_0x32633c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32633c) {
            ctx->pc = 0x32636Cu;
            goto label_32636c;
        }
    }
    ctx->pc = 0x326344u;
    // 0x326344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326348: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x326348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x32634c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x32634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326350: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x326350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326354: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x326354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x326358: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x326358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x32635c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x32635Cu;
    SET_GPR_U32(ctx, 31, 0x326364u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x32635Cu, 0x326364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326364u;
label_326364:
    // 0x326364: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x326364u;
    {
        const bool branch_taken_0x326364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326364) {
            ctx->pc = 0x3263F8u;
            goto label_3263f8;
        }
    }
    ctx->pc = 0x32636Cu;
label_32636c:
    // 0x32636c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x32636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326370: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326374: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x326374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326378: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x326378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x32637c: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x32637cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x326380: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x326380u;
    SET_GPR_U32(ctx, 31, 0x326388u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x326388u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x326388u) { return; }
    ctx->pc = 0x326388u;
label_326388:
    // 0x326388: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32638c: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x32638cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326390: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x326394: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x326394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x326398: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x326398u;
    {
        const bool branch_taken_0x326398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326398) {
            ctx->pc = 0x3263C8u;
            goto label_3263c8;
        }
    }
    ctx->pc = 0x3263A0u;
    // 0x3263a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3263a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3263a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3263a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263ac: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x3263b0: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x3263b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x3263b4: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x3263b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x3263b8: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x3263B8u;
    SET_GPR_U32(ctx, 31, 0x3263C0u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x3263B8u, 0x3263C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263C0u;
label_3263c0:
    // 0x3263c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3263C0u;
    {
        const bool branch_taken_0x3263c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3263c0) {
            ctx->pc = 0x3263F8u;
            goto label_3263f8;
        }
    }
    ctx->pc = 0x3263C8u;
label_3263c8:
    // 0x3263c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3263ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3263d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263d4: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x3263d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x3263d8: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x3263d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x3263dc: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x3263dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x3263e0: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x3263E0u;
    SET_GPR_U32(ctx, 31, 0x3263E8u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x3263E0u, 0x3263E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263E8u;
label_3263e8:
    // 0x3263e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3263e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3263ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3263ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3263f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3263f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263f4: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x3263f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
label_3263f8:
    // 0x3263f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3263f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3263fc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3263fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326400: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326404: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x326404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x326408: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x326408u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x32640c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32640Cu;
    {
        const bool branch_taken_0x32640c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32640c) {
            ctx->pc = 0x32644Cu;
            goto label_32644c;
        }
    }
    ctx->pc = 0x326414u;
label_326414:
    // 0x326414: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326418: 0x94630118  lhu         $v1, 0x118($v1)
    ctx->pc = 0x326418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x32641c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x326420: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x326420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x326424: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x326424u;
    {
        const bool branch_taken_0x326424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326424) {
            ctx->pc = 0x32644Cu;
            goto label_32644c;
        }
    }
    ctx->pc = 0x32642Cu;
    // 0x32642c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x32642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326430: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x326430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326434: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326438: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x326438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x32643c: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x32643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x326440: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x326440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x326444: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x326444u;
    SET_GPR_U32(ctx, 31, 0x32644Cu);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x326444u, 0x32644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32644Cu;
label_32644c:
    // 0x32644c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x32644cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326450: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x326450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x326454: 0x3e00008  jr          $ra
    ctx->pc = 0x326454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32645Cu;
}
