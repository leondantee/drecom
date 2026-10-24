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

// Function: Check_sce_hi_jump
// Address: 0x1604a0 - 0x160694
void Check_sce_hi_jump_0x1604a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_sce_hi_jump_0x1604a0");
#endif

    switch (ctx->pc) {
        case 0x160520u: goto label_160520;
        default: break;
    }

    ctx->pc = 0x1604a0u;

    // 0x1604a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1604a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1604a4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1604a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1604a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1604a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1604ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1604acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1604b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1604b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1604b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1604b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1604b8: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x1604b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1604bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1604bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1604c0: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1604c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1604c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1604c8: 0x2451eea0  addiu       $s1, $v0, -0x1160
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x1604cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1604ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1604d0: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x1604d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x1604d4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1604d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1604d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1604D8u;
    {
        const bool branch_taken_0x1604d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1604d8) {
            ctx->pc = 0x1604ECu;
            goto label_1604ec;
        }
    }
    ctx->pc = 0x1604E0u;
    // 0x1604e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1604e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1604e4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1604E4u;
    {
        const bool branch_taken_0x1604e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604e4) {
            ctx->pc = 0x160678u;
            goto label_160678;
        }
    }
    ctx->pc = 0x1604ECu;
label_1604ec:
    // 0x1604ec: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1604ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1604f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1604f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1604f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1604F4u;
    {
        const bool branch_taken_0x1604f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1604f4) {
            ctx->pc = 0x160508u;
            goto label_160508;
        }
    }
    ctx->pc = 0x1604FCu;
    // 0x1604fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1604fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160500: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x160500u;
    {
        const bool branch_taken_0x160500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160500) {
            ctx->pc = 0x160678u;
            goto label_160678;
        }
    }
    ctx->pc = 0x160508u;
label_160508:
    // 0x160508: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x160508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x16050c: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x16050cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x160510: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160514: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x160514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160518: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160518u;
    SET_GPR_U32(ctx, 31, 0x160520u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160518u, 0x160520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160520u;
label_160520:
    // 0x160520: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x160524: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x160524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16052c: 0x0  nop
    ctx->pc = 0x16052cu;
    // NOP
    // 0x160530: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160534: 0x0  nop
    ctx->pc = 0x160534u;
    // NOP
    // 0x160538: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160538u;
    {
        const bool branch_taken_0x160538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160538) {
            ctx->pc = 0x160554u;
            goto label_160554;
        }
    }
    ctx->pc = 0x160540u;
    // 0x160540: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160548: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x160548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16054c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16054cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160550: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x160550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_160554:
    // 0x160554: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x160554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160558: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x160558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x16055c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16055cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x160560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160564: 0x0  nop
    ctx->pc = 0x160564u;
    // NOP
    // 0x160568: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160568u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16056c: 0x0  nop
    ctx->pc = 0x16056cu;
    // NOP
    // 0x160570: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x160570u;
    {
        const bool branch_taken_0x160570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160570) {
            ctx->pc = 0x160584u;
            goto label_160584;
        }
    }
    ctx->pc = 0x160578u;
    // 0x160578: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x160578u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16057c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x16057Cu;
    {
        const bool branch_taken_0x16057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16057c) {
            ctx->pc = 0x160678u;
            goto label_160678;
        }
    }
    ctx->pc = 0x160584u;
label_160584:
    // 0x160584: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x160588: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x160588u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x16058c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160590: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x160590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160594: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x160598: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x160598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x16059c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1605a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1605a4: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x1605a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605a8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1605a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1605ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1605acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1605b0: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x1605b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1605b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605b8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1605b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1605bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1605bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1605c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1605c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605c4: 0x0  nop
    ctx->pc = 0x1605c4u;
    // NOP
    // 0x1605c8: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1605c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1605cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1605ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1605d0: 0x8c2295bc  lw          $v0, -0x6A44($at)
    ctx->pc = 0x1605d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195BCu));
    // 0x1605d4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1605d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605d8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1605d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1605dc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1605dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1605e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1605e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1605e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1605e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1605e8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1605e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1605ec: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1605ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1605f0: 0x3c0244a8  lui         $v0, 0x44A8
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17576 << 16));
    // 0x1605f4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1605f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1605f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1605f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605fc: 0x0  nop
    ctx->pc = 0x1605fcu;
    // NOP
    // 0x160600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160604: 0x0  nop
    ctx->pc = 0x160604u;
    // NOP
    // 0x160608: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x160608u;
    {
        const bool branch_taken_0x160608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160608) {
            ctx->pc = 0x160648u;
            goto label_160648;
        }
    }
    ctx->pc = 0x160610u;
    // 0x160610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160614: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160618: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x160618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16061c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16061cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160620: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160624: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160628: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16062c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x16062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160630: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x160630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x160634: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160638: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x16063c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160640: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160640u;
    {
        const bool branch_taken_0x160640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160640) {
            ctx->pc = 0x160678u;
            goto label_160678;
        }
    }
    ctx->pc = 0x160648u;
label_160648:
    // 0x160648: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x160648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16064c: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x16064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x160650: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160654: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16065c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16065cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160660: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x160664: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160668: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16066c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16066cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160670: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160678:
    // 0x160678: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x160678u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16067c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16067cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160688: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x160688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16068c: 0x3e00008  jr          $ra
    ctx->pc = 0x16068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160694u;
}
