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

// Function: Em00_R1_br_run
// Address: 0x2d2030 - 0x2d238c
void Em00_R1_br_run_0x2d2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_br_run_0x2d2030");
#endif

    switch (ctx->pc) {
        case 0x2d206cu: goto label_2d206c;
        case 0x2d20f8u: goto label_2d20f8;
        case 0x2d2184u: goto label_2d2184;
        case 0x2d2274u: goto label_2d2274;
        case 0x2d2330u: goto label_2d2330;
        default: break;
    }

    ctx->pc = 0x2d2030u;

    // 0x2d2030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2034: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d2034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d2038: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d2038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d203c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2040: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d2040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2044: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2048: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2d2048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2d204c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2d204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2d2050: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2054: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d2054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d2058: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d2058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d205c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2060: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d2064: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D2064u;
    SET_GPR_U32(ctx, 31, 0x2D206Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D2064u, 0x2D206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D206Cu;
label_2d206c:
    // 0x2d206c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D206Cu;
    {
        const bool branch_taken_0x2d206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d206c) {
            ctx->pc = 0x2D20A4u;
            goto label_2d20a4;
        }
    }
    ctx->pc = 0x2D2074u;
    // 0x2d2074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d2074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2078: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d207c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d207cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2080: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2d2080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d2084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2088: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d2088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d208c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2090: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d2090u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2094: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2098: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d2098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d209c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d20a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d20a4:
    // 0x2d20a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d20ac: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2d20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2d20b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d20b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d20b4: 0x0  nop
    ctx->pc = 0x2d20b4u;
    // NOP
    // 0x2d20b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d20b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d20bc: 0x0  nop
    ctx->pc = 0x2d20bcu;
    // NOP
    // 0x2d20c0: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2D20C0u;
    {
        const bool branch_taken_0x2d20c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d20c0) {
            ctx->pc = 0x2D21F4u;
            goto label_2d21f4;
        }
    }
    ctx->pc = 0x2D20C8u;
    // 0x2d20c8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d20cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d20ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d20d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d20d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d20d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20d8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d20dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20e0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d20e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d20e4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d20e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d20ec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d20f0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D20F0u;
    SET_GPR_U32(ctx, 31, 0x2D20F8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D20F0u, 0x2D20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20F8u;
label_2d20f8:
    // 0x2d20f8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D20F8u;
    {
        const bool branch_taken_0x2d20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20f8) {
            ctx->pc = 0x2D21F4u;
            goto label_2d21f4;
        }
    }
    ctx->pc = 0x2D2100u;
    // 0x2d2100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d2100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d2104: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x2d2104u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x2d2108: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d210c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d210cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2110: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x2d2110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x2d2114: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2114u;
    {
        const bool branch_taken_0x2d2114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2114) {
            ctx->pc = 0x2D2154u;
            goto label_2d2154;
        }
    }
    ctx->pc = 0x2D211Cu;
    // 0x2d211c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2120: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2124: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d2124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2128: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2d2128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d212c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2130: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d2130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2134: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2138: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d2138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d213c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2140: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d2140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2148: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d2148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d214c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D214Cu;
    {
        const bool branch_taken_0x2d214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d214c) {
            ctx->pc = 0x2D21F4u;
            goto label_2d21f4;
        }
    }
    ctx->pc = 0x2D2154u;
label_2d2154:
    // 0x2d2154: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2158: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d215c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2160: 0x3c023e65  lui         $v0, 0x3E65
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15973 << 16));
    // 0x2d2164: 0x3442c8fa  ori         $v0, $v0, 0xC8FA
    ctx->pc = 0x2d2164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51450);
    // 0x2d2168: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d216c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d2170: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2174: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2178: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d217c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D217Cu;
    SET_GPR_U32(ctx, 31, 0x2D2184u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D217Cu, 0x2D2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2184u;
label_2d2184:
    // 0x2d2184: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2184u;
    {
        const bool branch_taken_0x2d2184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2184) {
            ctx->pc = 0x2D21C4u;
            goto label_2d21c4;
        }
    }
    ctx->pc = 0x2D218Cu;
    // 0x2d218c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2190: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2194: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d2194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2198: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2d2198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2d219c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21a0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d21a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d21a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21a8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d21a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21b0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d21b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d21bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D21BCu;
    {
        const bool branch_taken_0x2d21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d21bc) {
            ctx->pc = 0x2D21F4u;
            goto label_2d21f4;
        }
    }
    ctx->pc = 0x2D21C4u;
label_2d21c4:
    // 0x2d21c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d21c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d21c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d21d0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2d21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2d21d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21d8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d21d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d21dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21e0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d21e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21e8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d21e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d21ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d21f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d21f4:
    // 0x2d21f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21f8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d21fc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2d21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x2d2200: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2d2204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2208: 0x0  nop
    ctx->pc = 0x2d2208u;
    // NOP
    // 0x2d220c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d220cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2210: 0x0  nop
    ctx->pc = 0x2d2210u;
    // NOP
    // 0x2d2214: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D2214u;
    {
        const bool branch_taken_0x2d2214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2214) {
            ctx->pc = 0x2D22ACu;
            goto label_2d22ac;
        }
    }
    ctx->pc = 0x2D221Cu;
    // 0x2d221c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2220: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d2220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2224: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x2d2224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x2d2228: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2d2228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2d222c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d222cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2230: 0x0  nop
    ctx->pc = 0x2d2230u;
    // NOP
    // 0x2d2234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d2234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2238: 0x0  nop
    ctx->pc = 0x2d2238u;
    // NOP
    // 0x2d223c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2D223Cu;
    {
        const bool branch_taken_0x2d223c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d223c) {
            ctx->pc = 0x2D22ACu;
            goto label_2d22ac;
        }
    }
    ctx->pc = 0x2D2244u;
    // 0x2d2244: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x2d2244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x2d2248: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2d2248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2d224c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d224cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2250: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2254: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2258: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d225c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d2260: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d2260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2264: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2268: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d226c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D226Cu;
    SET_GPR_U32(ctx, 31, 0x2D2274u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D226Cu, 0x2D2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2274u;
label_2d2274:
    // 0x2d2274: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2274u;
    {
        const bool branch_taken_0x2d2274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2274) {
            ctx->pc = 0x2D22ACu;
            goto label_2d22ac;
        }
    }
    ctx->pc = 0x2D227Cu;
    // 0x2d227c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2284: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d2284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2288: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d2288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d228c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2290: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d2290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2298: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d2298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d229c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22a0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d22a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d22ac:
    // 0x2d22ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22b0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d22b4: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x2d22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x2d22b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d22b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d22bc: 0x0  nop
    ctx->pc = 0x2d22bcu;
    // NOP
    // 0x2d22c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d22c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d22c4: 0x0  nop
    ctx->pc = 0x2d22c4u;
    // NOP
    // 0x2d22c8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D22C8u;
    {
        const bool branch_taken_0x2d22c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d22c8) {
            ctx->pc = 0x2D2300u;
            goto label_2d2300;
        }
    }
    ctx->pc = 0x2D22D0u;
    // 0x2d22d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d22d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d22d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d22dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d22dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d22e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d22e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d22e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22ec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d22ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22f4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d22f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d2300:
    // 0x2d2300: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2304: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d2304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2308: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d230c: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d2310: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d2310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d2314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d2314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2318: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d2318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d231c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2320: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2324: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d2328: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D2328u;
    SET_GPR_U32(ctx, 31, 0x2D2330u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D2328u, 0x2D2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2330u;
label_2d2330:
    // 0x2d2330: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D2330u;
    {
        const bool branch_taken_0x2d2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2330) {
            ctx->pc = 0x2D237Cu;
            goto label_2d237c;
        }
    }
    ctx->pc = 0x2D2338u;
    // 0x2d2338: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d2338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d233c: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d2340: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d2340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d2344: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d2344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d2348: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d2348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d234c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2354: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2354u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2358: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2d2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d235c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2360: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2364: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2368: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d236c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2370: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2378: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d237c:
    // 0x2d237c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d237cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2380: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2384: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D238Cu;
}
