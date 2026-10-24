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

// Function: entry_002956e4
// Address: 0x2956e4 - 0x2958b4
void entry_002956e4_0x2956e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002956e4_0x2956e4");
#endif

    switch (ctx->pc) {
        case 0x295710u: goto label_295710;
        case 0x295884u: goto label_295884;
        case 0x295894u: goto label_295894;
        default: break;
    }

    ctx->pc = 0x2956e4u;

    // 0x2956e4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2956e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2956e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2956e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2956ec: 0x3c021c07  lui         $v0, 0x1C07
    ctx->pc = 0x2956ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7175 << 16));
    // 0x2956f0: 0x34422d0a  ori         $v0, $v0, 0x2D0A
    ctx->pc = 0x2956f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11530);
    // 0x2956f4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2956f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2956f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2956f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2956fc: 0x24451790  addiu       $a1, $v0, 0x1790
    ctx->pc = 0x2956fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
    // 0x295700: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x295700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x295704: 0x8c266888  lw          $a2, 0x6888($at)
    ctx->pc = 0x295704u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x396888u));
    // 0x295708: 0xc059b14  jal         func_166C50
    ctx->pc = 0x295708u;
    SET_GPR_U32(ctx, 31, 0x295710u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x295708u, 0x295710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295710u;
label_295710:
    // 0x295710: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x295710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x295714: 0x8c226888  lw          $v0, 0x6888($at)
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396888u));
    // 0x295718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29571c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x295720: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x295720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x295724: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x295724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x295728: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x295728u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x29572c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295730: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x295730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x295734: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x295734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x295738: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x295738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x29573c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x29573cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x295740: 0xfe600008  sd          $zero, 0x8($s3)
    ctx->pc = 0x295740u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 0));
    // 0x295744: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295748: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x295748u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x29574c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x295750: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x295750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x295754: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x295754u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x295758: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29575c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x29575cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x295760: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x295764: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x295764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x295768: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x295768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x29576c: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x29576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x295770: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x295770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x295774: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295778: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x295778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x29577c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29577cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x295780: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x295780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x295784: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x295784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x295788: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x295788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x29578c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29578cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295790: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x295790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x295794: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x295794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x295798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x295798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29579c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x29579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x2957a0: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x2957a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x2957a4: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x2957a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2957a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2957ac: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x2957acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x2957b0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2957b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2957b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2957b8: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x2957b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x2957bc: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x2957bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2957c0: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x2957c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x2957c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2957c8: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x2957c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x2957cc: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2957ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2957d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2957d4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x2957d8: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x2957d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x2957dc: 0x2602004c  addiu       $v0, $s0, 0x4C
    ctx->pc = 0x2957dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x2957e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2957e4: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x2957e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x2957e8: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2957e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2957ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2957f0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2957f4: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x2957f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2957f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2957f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2957fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2957fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x295800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295804: 0x0  nop
    ctx->pc = 0x295804u;
    // NOP
    // 0x295808: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x295808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x29580c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29580cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295810: 0x0  nop
    ctx->pc = 0x295810u;
    // NOP
    // 0x295814: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x295814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x295818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29581c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29581cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295820: 0x0  nop
    ctx->pc = 0x295820u;
    // NOP
    // 0x295824: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x295824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x295828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29582c: 0x0  nop
    ctx->pc = 0x29582cu;
    // NOP
    // 0x295830: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x295830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x295834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295838: 0x0  nop
    ctx->pc = 0x295838u;
    // NOP
    // 0x29583c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x29583cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x295840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x295844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295848: 0x0  nop
    ctx->pc = 0x295848u;
    // NOP
    // 0x29584c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x29584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x295850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x295854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295858: 0x0  nop
    ctx->pc = 0x295858u;
    // NOP
    // 0x29585c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x29585cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x295860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x295860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x295864: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295868: 0x0  nop
    ctx->pc = 0x295868u;
    // NOP
    // 0x29586c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x29586cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x295870: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x295870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
    // 0x295874: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x295874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x295878: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x295878u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29587c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x29587Cu;
    SET_GPR_U32(ctx, 31, 0x295884u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29587Cu, 0x295884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295884u;
label_295884:
    // 0x295884: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x295884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x295888: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x295888u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x29588c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x29588Cu;
    SET_GPR_U32(ctx, 31, 0x295894u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29588Cu, 0x295894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295894u;
label_295894:
    // 0x295894: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x295894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x295898: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x295898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x29589c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29589Cu;
    {
        const bool branch_taken_0x29589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29589c) {
            ctx->pc = 0x2958B4u;
            return;
        }
    }
    ctx->pc = 0x2958A4u;
    // 0x2958a4: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2958a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2958a8: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2958a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2958ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2958ACu;
    SET_GPR_U32(ctx, 31, 0x2958B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2958ACu, 0x2958B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2958B4u;
}
