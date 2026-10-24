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

// Function: Em00_R1_br_walk
// Address: 0x2d18b0 - 0x2d1f1c
void Em00_R1_br_walk_0x2d18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_br_walk_0x2d18b0");
#endif

    switch (ctx->pc) {
        case 0x2d18f8u: goto label_2d18f8;
        case 0x2d1984u: goto label_2d1984;
        case 0x2d1a10u: goto label_2d1a10;
        case 0x2d1b68u: goto label_2d1b68;
        case 0x2d1c14u: goto label_2d1c14;
        case 0x2d1c44u: goto label_2d1c44;
        case 0x2d1ce8u: goto label_2d1ce8;
        case 0x2d1d9cu: goto label_2d1d9c;
        case 0x2d1ed0u: goto label_2d1ed0;
        default: break;
    }

    ctx->pc = 0x2d18b0u;

    // 0x2d18b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d18b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d18b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d18b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d18b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d18bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d18bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d18c0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2d18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2d18c4: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x2d18c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x2d18c8: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x2d18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
    // 0x2d18cc: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2d18ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2d18d0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2d18d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d18d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d18d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d18d8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2d18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2d18dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d18e0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d18e4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d18e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d18ec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d18f0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D18F0u;
    SET_GPR_U32(ctx, 31, 0x2D18F8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D18F0u, 0x2D18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18F8u;
label_2d18f8:
    // 0x2d18f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D18F8u;
    {
        const bool branch_taken_0x2d18f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d18f8) {
            ctx->pc = 0x2D1930u;
            goto label_2d1930;
        }
    }
    ctx->pc = 0x2D1900u;
    // 0x2d1900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1904: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1908: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d190c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2d190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d1910: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1914: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1918: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d191c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d191cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1920: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1924: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1928: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d192c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d192cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d1930:
    // 0x2d1930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1934: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1938: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2d1938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2d193c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d193cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1940: 0x0  nop
    ctx->pc = 0x2d1940u;
    // NOP
    // 0x2d1944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1948: 0x0  nop
    ctx->pc = 0x2d1948u;
    // NOP
    // 0x2d194c: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2D194Cu;
    {
        const bool branch_taken_0x2d194c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d194c) {
            ctx->pc = 0x2D1A80u;
            goto label_2d1a80;
        }
    }
    ctx->pc = 0x2D1954u;
    // 0x2d1954: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d1954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d1958: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d1958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d195c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d195cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1964: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d1964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d196c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d1970: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1974: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1978: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d197c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D197Cu;
    SET_GPR_U32(ctx, 31, 0x2D1984u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D197Cu, 0x2D1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1984u;
label_2d1984:
    // 0x2d1984: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D1984u;
    {
        const bool branch_taken_0x2d1984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1984) {
            ctx->pc = 0x2D1A80u;
            goto label_2d1a80;
        }
    }
    ctx->pc = 0x2D198Cu;
    // 0x2d198c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d198cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d1990: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x2d1990u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x2d1994: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d1994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d1998: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d1998u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d199c: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x2d199cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x2d19a0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2D19A0u;
    {
        const bool branch_taken_0x2d19a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19a0) {
            ctx->pc = 0x2D19E0u;
            goto label_2d19e0;
        }
    }
    ctx->pc = 0x2D19A8u;
    // 0x2d19a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d19a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d19ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d19b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d19b4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2d19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d19b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d19bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d19c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d19c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d19c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d19ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d19d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d19d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d19d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D19D8u;
    {
        const bool branch_taken_0x2d19d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19d8) {
            ctx->pc = 0x2D1A80u;
            goto label_2d1a80;
        }
    }
    ctx->pc = 0x2D19E0u;
label_2d19e0:
    // 0x2d19e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19e4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d19e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d19ec: 0x3c023e65  lui         $v0, 0x3E65
    ctx->pc = 0x2d19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15973 << 16));
    // 0x2d19f0: 0x3442c8fa  ori         $v0, $v0, 0xC8FA
    ctx->pc = 0x2d19f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51450);
    // 0x2d19f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d19f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d19f8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d19f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d19fc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d19fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1a00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1a04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d1a08: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1A08u;
    SET_GPR_U32(ctx, 31, 0x2D1A10u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1A08u, 0x2D1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A10u;
label_2d1a10:
    // 0x2d1a10: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1A10u;
    {
        const bool branch_taken_0x2d1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a10) {
            ctx->pc = 0x2D1A50u;
            goto label_2d1a50;
        }
    }
    ctx->pc = 0x2D1A18u;
    // 0x2d1a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1a1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a24: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2d1a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d1a28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1a48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D1A48u;
    {
        const bool branch_taken_0x2d1a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a48) {
            ctx->pc = 0x2D1A80u;
            goto label_2d1a80;
        }
    }
    ctx->pc = 0x2D1A50u;
label_2d1a50:
    // 0x2d1a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1a54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a5c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2d1a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d1a60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a64: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1a68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a6c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a74: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1a78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a7c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d1a80:
    // 0x2d1a80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a84: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1a88: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2d1a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2d1a8c: 0x146000d6  bnez        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2D1A8Cu;
    {
        const bool branch_taken_0x2d1a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a8c) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1A94u;
    // 0x2d1a94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a98: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x2d1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x2d1a9c: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2D1A9Cu;
    {
        const bool branch_taken_0x2d1a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a9c) {
            ctx->pc = 0x2D1D6Cu;
            goto label_2d1d6c;
        }
    }
    ctx->pc = 0x2D1AA4u;
    // 0x2d1aa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1aa8: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1aac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d1aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d1ab0: 0x146000cd  bnez        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2D1AB0u;
    {
        const bool branch_taken_0x2d1ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ab0) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1AB8u;
    // 0x2d1ab8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1abc: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1ac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d1ac4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D1AC4u;
    {
        const bool branch_taken_0x2d1ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ac4) {
            ctx->pc = 0x2D1B3Cu;
            goto label_2d1b3c;
        }
    }
    ctx->pc = 0x2D1ACCu;
    // 0x2d1acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ad0: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1ad4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d1ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d1ad8: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2D1AD8u;
    {
        const bool branch_taken_0x2d1ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ad8) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1AE0u;
    // 0x2d1ae0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ae4: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1ae8: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1aec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1af0: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1af4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1af8: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1afc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2d1afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2d1b00: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d1b04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1b10: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d1b14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1b1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1b24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1b2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1b34: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2D1B34u;
    {
        const bool branch_taken_0x2d1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b34) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1B3Cu;
label_2d1b3c:
    // 0x2d1b3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b40: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b48: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2d1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2d1b4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d1b50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1b54: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d1b58: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1b5c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1b60: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1B60u;
    SET_GPR_U32(ctx, 31, 0x2D1B68u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1B60u, 0x2D1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B68u;
label_2d1b68:
    // 0x2d1b68: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D1B68u;
    {
        const bool branch_taken_0x2d1b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b68) {
            ctx->pc = 0x2D1BECu;
            goto label_2d1bec;
        }
    }
    ctx->pc = 0x2D1B70u;
    // 0x2d1b70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b74: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d1b78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d1b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d1b7c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D1B7Cu;
    {
        const bool branch_taken_0x2d1b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b7c) {
            ctx->pc = 0x2D1CC0u;
            goto label_2d1cc0;
        }
    }
    ctx->pc = 0x2D1B84u;
    // 0x2d1b84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b88: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1b8c: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1b90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1b94: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d1b98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b9c: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1ba0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d1ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d1ba4: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d1ba8: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2d1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bb0: 0xac431338  sw          $v1, 0x1338($v0)
    ctx->pc = 0x2d1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 3));
    // 0x2d1bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1bb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bbc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d1bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1bc0: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d1bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2d1bc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bc8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d1bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1bcc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bd0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d1bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1bd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bd8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d1bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1bdc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1be0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d1be4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D1BE4u;
    {
        const bool branch_taken_0x2d1be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1be4) {
            ctx->pc = 0x2D1CC0u;
            goto label_2d1cc0;
        }
    }
    ctx->pc = 0x2D1BECu;
label_2d1bec:
    // 0x2d1bec: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d1bf0: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d1bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1bf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c00: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d1c04: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d1c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1c08: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1c0c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C14u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1C0Cu, 0x2D1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C14u;
label_2d1c14:
    // 0x2d1c14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D1C14u;
    {
        const bool branch_taken_0x2d1c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c14) {
            ctx->pc = 0x2D1CC0u;
            goto label_2d1cc0;
        }
    }
    ctx->pc = 0x2D1C1Cu;
    // 0x2d1c1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c24: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1c28: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d1c2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1c30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1c34: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1c38: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1c3c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C44u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1C3Cu, 0x2D1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C44u;
label_2d1c44:
    // 0x2d1c44: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1C44u;
    {
        const bool branch_taken_0x2d1c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c44) {
            ctx->pc = 0x2D1CC0u;
            goto label_2d1cc0;
        }
    }
    ctx->pc = 0x2D1C4Cu;
    // 0x2d1c4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c50: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d1c54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d1c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d1c58: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1C58u;
    {
        const bool branch_taken_0x2d1c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c58) {
            ctx->pc = 0x2D1CC0u;
            goto label_2d1cc0;
        }
    }
    ctx->pc = 0x2D1C60u;
    // 0x2d1c60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c64: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1c68: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1c6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d1c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1c70: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d1c74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c78: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1c7c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d1c80: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d1c84: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2d1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c8c: 0xac431338  sw          $v1, 0x1338($v0)
    ctx->pc = 0x2d1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 3));
    // 0x2d1c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d1c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1c9c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2d1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d1ca0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ca4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d1ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1ca8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d1cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1cb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cb4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d1cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1cb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d1cc0:
    // 0x2d1cc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cc8: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d1ccc: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d1cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1cd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1cd4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1cd8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1cdc: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1ce0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1CE0u;
    SET_GPR_U32(ctx, 31, 0x2D1CE8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1CE0u, 0x2D1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CE8u;
label_2d1ce8:
    // 0x2d1ce8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D1CE8u;
    {
        const bool branch_taken_0x2d1ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ce8) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1CF0u;
    // 0x2d1cf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cf4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1cf8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2d1cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2d1cfc: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D1CFCu;
    {
        const bool branch_taken_0x2d1cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cfc) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1D04u;
    // 0x2d1d04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d08: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1d0c: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1d10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1d14: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1d18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d1c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1d20: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2d1d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2d1d24: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d1d28: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d30: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d1d34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1d38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1d40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d1d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d1d44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1d54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1d64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D1D64u;
    {
        const bool branch_taken_0x2d1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d64) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1D6Cu;
label_2d1d6c:
    // 0x2d1d6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d70: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1d74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d78: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1d7c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d1d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d1d80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1d84: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d1d88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1d8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1d90: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d1d94: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1D94u;
    SET_GPR_U32(ctx, 31, 0x2D1D9Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1D94u, 0x2D1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D9Cu;
label_2d1d9c:
    // 0x2d1d9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1D9Cu;
    {
        const bool branch_taken_0x2d1d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d9c) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1DA4u;
    // 0x2d1da4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1da8: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1dac: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1db0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1db4: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1dbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1dc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dcc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ddc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1de0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1de4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d1de8:
    // 0x2d1de8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1df0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2d1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2d1df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1df8: 0x0  nop
    ctx->pc = 0x2d1df8u;
    // NOP
    // 0x2d1dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d1dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1e00: 0x0  nop
    ctx->pc = 0x2d1e00u;
    // NOP
    // 0x2d1e04: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x2D1E04u;
    {
        const bool branch_taken_0x2d1e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1e04) {
            ctx->pc = 0x2D1F08u;
            goto label_2d1f08;
        }
    }
    ctx->pc = 0x2D1E0Cu;
    // 0x2d1e0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e10: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1e14: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1e18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1e1c: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1e20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1e24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1e2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d1e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1e38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1e48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1e50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e54: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1e58: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2d1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2d1e5c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2d1e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2d1e60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e64: 0x0  nop
    ctx->pc = 0x2d1e64u;
    // NOP
    // 0x2d1e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d1e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1e6c: 0x0  nop
    ctx->pc = 0x2d1e6cu;
    // NOP
    // 0x2d1e70: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D1E70u;
    {
        const bool branch_taken_0x2d1e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1e70) {
            ctx->pc = 0x2D1F08u;
            goto label_2d1f08;
        }
    }
    ctx->pc = 0x2D1E78u;
    // 0x2d1e78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1e80: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x2d1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x2d1e84: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2d1e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d1e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e8c: 0x0  nop
    ctx->pc = 0x2d1e8cu;
    // NOP
    // 0x2d1e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1e94: 0x0  nop
    ctx->pc = 0x2d1e94u;
    // NOP
    // 0x2d1e98: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2D1E98u;
    {
        const bool branch_taken_0x2d1e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1e98) {
            ctx->pc = 0x2D1F08u;
            goto label_2d1f08;
        }
    }
    ctx->pc = 0x2D1EA0u;
    // 0x2d1ea0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ea4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1eac: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x2d1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x2d1eb0: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2d1eb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1eb8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d1ebc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1ec0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1ec4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d1ec8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1EC8u;
    SET_GPR_U32(ctx, 31, 0x2D1ED0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1EC8u, 0x2D1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ED0u;
label_2d1ed0:
    // 0x2d1ed0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1ED0u;
    {
        const bool branch_taken_0x2d1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ed0) {
            ctx->pc = 0x2D1F08u;
            goto label_2d1f08;
        }
    }
    ctx->pc = 0x2D1ED8u;
    // 0x2d1ed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1edc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ee0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1ee4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d1ee8: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x2d1ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1eec: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2d1eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1ef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ef4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1ef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1efc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1f00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1f04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d1f08:
    // 0x2d1f08: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d1f08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1f10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1f14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1F1Cu;
}
