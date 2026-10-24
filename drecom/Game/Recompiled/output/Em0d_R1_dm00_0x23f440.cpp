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

// Function: Em0d_R1_dm00
// Address: 0x23f440 - 0x23f704
void Em0d_R1_dm00_0x23f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_dm00_0x23f440");
#endif

    switch (ctx->pc) {
        case 0x23f4b8u: goto label_23f4b8;
        case 0x23f58cu: goto label_23f58c;
        case 0x23f594u: goto label_23f594;
        case 0x23f5c8u: goto label_23f5c8;
        case 0x23f5f4u: goto label_23f5f4;
        case 0x23f620u: goto label_23f620;
        case 0x23f63cu: goto label_23f63c;
        case 0x23f654u: goto label_23f654;
        case 0x23f660u: goto label_23f660;
        case 0x23f6a8u: goto label_23f6a8;
        case 0x23f6ccu: goto label_23f6cc;
        default: break;
    }

    ctx->pc = 0x23f440u;

    // 0x23f440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23f444: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x23f444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x23f448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f450: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x23f450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x23f454: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f458: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23f458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23f45c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23f45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23f460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f464: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x23F464u;
    {
        const bool branch_taken_0x23f464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f464) {
            ctx->pc = 0x23F5F4u;
            goto label_23f5f4;
        }
    }
    ctx->pc = 0x23F46Cu;
    // 0x23f46c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F46Cu;
    {
        const bool branch_taken_0x23f46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f46c) {
            ctx->pc = 0x23F47Cu;
            goto label_23f47c;
        }
    }
    ctx->pc = 0x23F474u;
    // 0x23f474: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x23F474u;
    {
        const bool branch_taken_0x23f474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f474) {
            ctx->pc = 0x23F6ECu;
            goto label_23f6ec;
        }
    }
    ctx->pc = 0x23F47Cu;
label_23f47c:
    // 0x23f47c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f480: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x23f480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23f484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f488: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x23f488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f48c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f490: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f494: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23f494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23f498: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f49c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f4a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23f4a4: 0x2406040e  addiu       $a2, $zero, 0x40E
    ctx->pc = 0x23f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1038));
    // 0x23f4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23f4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f4ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23f4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23f4b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23F4B0u;
    SET_GPR_U32(ctx, 31, 0x23F4B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23F4B0u, 0x23F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4B8u;
label_23f4b8:
    // 0x23f4b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23f4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f4bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f4c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f4c4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23f4c8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f4d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f4d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f4d8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23f4dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23f4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f4e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f4e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f4ec: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23f4f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23f4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f4f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f4fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f500: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23f500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23f504: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23f508: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23f50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f514: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f518: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23f518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23f51c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23f520: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23f524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23f524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23f528: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f52c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f530: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23f530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23f534: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f538: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x23f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x23f53c: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x23f53cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f540: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x23f540u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x23f544: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x23f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x23f548: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f54c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x23f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x23f550: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f554: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x23f554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f558: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x23f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23f55c: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x23f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x23f560: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23f564: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x23f564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x23f568: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23f56c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23f570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f574: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f578: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x23f578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x23f57c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f580: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f580u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f584: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F584u;
    SET_GPR_U32(ctx, 31, 0x23F58Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F584u, 0x23F58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F58Cu;
label_23f58c:
    // 0x23f58c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F58Cu;
    SET_GPR_U32(ctx, 31, 0x23F594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F58Cu, 0x23F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F594u;
label_23f594:
    // 0x23f594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23f598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23f59c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F59Cu;
    {
        const bool branch_taken_0x23f59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f59c) {
            ctx->pc = 0x23F5D0u;
            goto label_23f5d0;
        }
    }
    ctx->pc = 0x23F5A4u;
    // 0x23f5a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f5a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23f5ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23f5b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f5b4: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x23f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x23f5b8: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23f5bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f5bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f5c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F5C0u;
    SET_GPR_U32(ctx, 31, 0x23F5C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F5C0u, 0x23F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5C8u;
label_23f5c8:
    // 0x23f5c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23F5C8u;
    {
        const bool branch_taken_0x23f5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f5c8) {
            ctx->pc = 0x23F5F4u;
            goto label_23f5f4;
        }
    }
    ctx->pc = 0x23F5D0u;
label_23f5d0:
    // 0x23f5d0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23f5d4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23f5d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23f5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23f5dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f5e0: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x23f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x23f5e4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23f5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23f5e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23f5e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23f5ec: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23F5ECu;
    SET_GPR_U32(ctx, 31, 0x23F5F4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23F5ECu, 0x23F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5F4u;
label_23f5f4:
    // 0x23f5f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f5f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x23f5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f5fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f600: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23f600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23f604: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23f604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23f608: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23f60c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23f610: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23f614: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23f618: 0xc05c848  jal         func_172120
    ctx->pc = 0x23F618u;
    SET_GPR_U32(ctx, 31, 0x23F620u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23F618u, 0x23F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F620u;
label_23f620:
    // 0x23f620: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23f624: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f628: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f62c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f630: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23f630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23f634: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23F634u;
    SET_GPR_U32(ctx, 31, 0x23F63Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23F634u, 0x23F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F63Cu;
label_23f63c:
    // 0x23f63c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f640: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23f644: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f648: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23f648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23f64c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23F64Cu;
    SET_GPR_U32(ctx, 31, 0x23F654u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23F64Cu, 0x23F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F654u;
label_23f654:
    // 0x23f654: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f658: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23F658u;
    SET_GPR_U32(ctx, 31, 0x23F660u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23F658u, 0x23F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F660u;
label_23f660:
    // 0x23f660: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f664: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23f664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23f668: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x23F668u;
    {
        const bool branch_taken_0x23f668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f668) {
            ctx->pc = 0x23F6ECu;
            goto label_23f6ec;
        }
    }
    ctx->pc = 0x23F670u;
    // 0x23f670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f678: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23f678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f67c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f680: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f684: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23f684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f688: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f68c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23f68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f694: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23f694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f69c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23f6a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F6A0u;
    SET_GPR_U32(ctx, 31, 0x23F6A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F6A0u, 0x23F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6A8u;
label_23f6a8:
    // 0x23f6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f6ac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23f6b0: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x23f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x23f6b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23f6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23f6b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23f6b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23f6bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f6c0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23f6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23f6c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23F6C4u;
    SET_GPR_U32(ctx, 31, 0x23F6CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23F6C4u, 0x23F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6CCu;
label_23f6cc:
    // 0x23f6cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23f6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23f6d0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23f6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23f6d4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x23f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23f6d8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23f6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23f6dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23f6dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23f6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23f6e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23f6e8: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23f6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_23f6ec:
    // 0x23f6ec: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x23f6ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f6f8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23f6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23f6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x23F6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F704u;
}
