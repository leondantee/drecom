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

// Function: Em24_R0_init
// Address: 0x3593f0 - 0x359588
void Em24_R0_init_0x3593f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em24_R0_init_0x3593f0");
#endif

    switch (ctx->pc) {
        case 0x359440u: goto label_359440;
        default: break;
    }

    ctx->pc = 0x3593f0u;

    // 0x3593f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3593f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3593f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3593f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3593f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3593f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3593fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3593fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359400: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x359400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x359404: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359408: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x359408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x35940c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x35940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x359410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359418: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x359418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x35941c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x35941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x359420: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x359420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x359424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x359428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35942c: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x35942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x359430: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x359430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x359434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359438: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x359438u;
    SET_GPR_U32(ctx, 31, 0x359440u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x359438u, 0x359440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359440u;
label_359440:
    // 0x359440: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x359440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x359444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x359444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359448: 0x0  nop
    ctx->pc = 0x359448u;
    // NOP
    // 0x35944c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x35944cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x359450: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x359450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x359454: 0x3c0343e7  lui         $v1, 0x43E7
    ctx->pc = 0x359454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17383 << 16));
    // 0x359458: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x359458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x35945c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35945cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359460: 0x0  nop
    ctx->pc = 0x359460u;
    // NOP
    // 0x359464: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x359464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x359468: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35946c: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x35946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x359470: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x359470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x359474: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x359474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x359478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35947c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x35947cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x359480: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x359480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x359484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35948c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35948cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x359490: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359494: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x359494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x359498: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35949c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35949cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3594a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3594a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3594a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3594acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3594b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3594b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3594b4: 0x2464a790  addiu       $a0, $v1, -0x5870
    ctx->pc = 0x3594b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
    // 0x3594b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594bc: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x3594bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x3594c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3594c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3594c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594c8: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x3594c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x3594cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594d0: 0xa0601219  sb          $zero, 0x1219($v1)
    ctx->pc = 0x3594d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x3594d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3594d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3594dc: 0x24700b40  addiu       $s0, $v1, 0xB40
    ctx->pc = 0x3594dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2880));
    // 0x3594e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3594e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3594e4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3594e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x3594e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3594e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3594ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3594ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3594f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3594f4: 0x24700bd0  addiu       $s0, $v1, 0xBD0
    ctx->pc = 0x3594f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
    // 0x3594f8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3594f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3594fc: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x3594fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x359500: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x359500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x359504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359508: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x359508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x35950c: 0x24700c60  addiu       $s0, $v1, 0xC60
    ctx->pc = 0x35950cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
    // 0x359510: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x359510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359514: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x359514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x359518: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x359518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35951c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359520: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x359520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x359524: 0x24700cf0  addiu       $s0, $v1, 0xCF0
    ctx->pc = 0x359524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x359528: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x359528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35952c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x35952cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x359530: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x359530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x359534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359538: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x359538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x35953c: 0x24700d80  addiu       $s0, $v1, 0xD80
    ctx->pc = 0x35953cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
    // 0x359540: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x359540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359544: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x359544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x359548: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x359548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35954c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x359550: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x359550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x359554: 0x24700e10  addiu       $s0, $v1, 0xE10
    ctx->pc = 0x359554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x359558: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x359558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35955c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x35955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x359560: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x359560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x359564: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x359564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x359568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35956c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x35956cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x359570: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x359570u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35957c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35957cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359580: 0x3e00008  jr          $ra
    ctx->pc = 0x359580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359588u;
}
