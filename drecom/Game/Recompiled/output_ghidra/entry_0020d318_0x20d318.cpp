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

// Function: entry_0020d318
// Address: 0x20d318 - 0x20d494
void entry_0020d318_0x20d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d318_0x20d318");
#endif

    switch (ctx->pc) {
        case 0x20d40cu: goto label_20d40c;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d48cu: goto label_20d48c;
        default: break;
    }

    ctx->pc = 0x20d318u;

    // 0x20d318: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d31c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20d31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20d320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d324: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x20d324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d328: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d32c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20d330: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20d330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d334: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20d334u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20d338: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20d33c: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x20D33Cu;
    {
        const bool branch_taken_0x20d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d33c) {
            ctx->pc = 0x20D564u;
            return;
        }
    }
    ctx->pc = 0x20D344u;
    // 0x20d344: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d348: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x20d34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d350: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x20d350u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d354: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d358: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20d358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20d35c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20d360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20d364: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x20d364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20d368: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x20D368u;
    {
        const bool branch_taken_0x20d368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d368) {
            ctx->pc = 0x20D55Cu;
            return;
        }
    }
    ctx->pc = 0x20D370u;
    // 0x20d370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20d370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20d374: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20d374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20d378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x20d378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d37c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d388: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x20d38c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20d390: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20d390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20d394: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x20d394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d398: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d3a0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x20d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x20d3a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x20d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x20d3a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20d3ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20d3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20d3b0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x20d3b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20d3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d3b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20d3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20d3bc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20D3BCu;
    {
        const bool branch_taken_0x20d3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3bc) {
            ctx->pc = 0x20D494u;
            return;
        }
    }
    ctx->pc = 0x20D3C4u;
    // 0x20d3c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20d3c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20d3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20d3cc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d3d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20d3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20d3d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d3d8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20d3dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d3e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d3e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d3e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d3ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d3f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d3f4: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20d3f8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x20d3f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d3fc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x20d3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d400: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20d400u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d404: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20D404u;
    SET_GPR_U32(ctx, 31, 0x20D40Cu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20D404u, 0x20D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D40Cu;
label_20d40c:
    // 0x20d40c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20d410: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d414: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D414u;
    SET_GPR_U32(ctx, 31, 0x20D41Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D414u, 0x20D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D41Cu;
label_20d41c:
    // 0x20d41c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20d420: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d424: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D424u;
    SET_GPR_U32(ctx, 31, 0x20D42Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D424u, 0x20D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D42Cu;
label_20d42c:
    // 0x20d42c: 0x24020507  addiu       $v0, $zero, 0x507
    ctx->pc = 0x20d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x20d430: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x20d430u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d434: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20d438: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20d43c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20d43cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d440: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d444: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20d444u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20d448: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20d44c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20d450: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20d454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d458: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d45c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d460: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20d464: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20D464u;
    SET_GPR_U32(ctx, 31, 0x20D46Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20D46Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20D46Cu) { return; }
    ctx->pc = 0x20D46Cu;
label_20d46c:
    // 0x20d46c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20d470: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20d474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d478: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x20d478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20d47c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d480: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20d480u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d484: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20D484u, 0x20D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x20D48Cu;
    {
        const bool branch_taken_0x20d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d48c) {
            ctx->pc = 0x20D55Cu;
            return;
        }
    }
    ctx->pc = 0x20D494u;
}
