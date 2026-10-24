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

// Function: Em1d_R1_mv02
// Address: 0x3702f0 - 0x3707d4
void Em1d_R1_mv02_0x3702f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_mv02_0x3702f0");
#endif

    switch (ctx->pc) {
        case 0x370378u: goto label_370378;
        case 0x370388u: goto label_370388;
        case 0x370394u: goto label_370394;
        case 0x3703a0u: goto label_3703a0;
        case 0x3703acu: goto label_3703ac;
        case 0x3703f4u: goto label_3703f4;
        case 0x370428u: goto label_370428;
        case 0x370444u: goto label_370444;
        case 0x37045cu: goto label_37045c;
        case 0x370468u: goto label_370468;
        case 0x370474u: goto label_370474;
        case 0x370480u: goto label_370480;
        case 0x3704c4u: goto label_3704c4;
        case 0x3705acu: goto label_3705ac;
        case 0x370628u: goto label_370628;
        case 0x3706a4u: goto label_3706a4;
        case 0x3706bcu: goto label_3706bc;
        case 0x3706c8u: goto label_3706c8;
        case 0x3706d4u: goto label_3706d4;
        case 0x3706e0u: goto label_3706e0;
        default: break;
    }

    ctx->pc = 0x3702f0u;

    // 0x3702f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3702f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3702f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3702f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3702f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3702f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3702fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3702fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370300: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x370300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x370304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370308: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x370308u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x37030c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370310: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x370310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x370314: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x370314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x370318: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37031c: 0x108300e3  beq         $a0, $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x37031Cu;
    {
        const bool branch_taken_0x37031c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37031c) {
            ctx->pc = 0x3706ACu;
            goto label_3706ac;
        }
    }
    ctx->pc = 0x370324u;
    // 0x370324: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x370324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370328: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x370328u;
    {
        const bool branch_taken_0x370328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370328) {
            ctx->pc = 0x3703FCu;
            goto label_3703fc;
        }
    }
    ctx->pc = 0x370330u;
    // 0x370330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370334: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x370334u;
    {
        const bool branch_taken_0x370334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370334) {
            ctx->pc = 0x370378u;
            goto label_370378;
        }
    }
    ctx->pc = 0x37033Cu;
    // 0x37033c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37033Cu;
    {
        const bool branch_taken_0x37033c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37033c) {
            ctx->pc = 0x37034Cu;
            goto label_37034c;
        }
    }
    ctx->pc = 0x370344u;
    // 0x370344: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x370344u;
    {
        const bool branch_taken_0x370344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370344) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x37034Cu;
label_37034c:
    // 0x37034c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370350: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370354: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370358: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37035c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37035cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370360: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370364: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x370364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x370368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37036c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37036cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370370: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370370u;
    SET_GPR_U32(ctx, 31, 0x370378u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370370u, 0x370378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370378u;
label_370378:
    // 0x370378: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37037c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37037cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370380: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370380u;
    SET_GPR_U32(ctx, 31, 0x370388u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370380u, 0x370388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370388u;
label_370388:
    // 0x370388: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37038c: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x37038Cu;
    SET_GPR_U32(ctx, 31, 0x370394u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x37038Cu, 0x370394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370394u;
label_370394:
    // 0x370394: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370398: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370398u;
    SET_GPR_U32(ctx, 31, 0x3703A0u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370398u, 0x3703A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703A0u;
label_3703a0:
    // 0x3703a0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3703a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703a4: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3703A4u;
    SET_GPR_U32(ctx, 31, 0x3703ACu);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3703A4u, 0x3703ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703ACu;
label_3703ac:
    // 0x3703ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3703acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3703b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3703b4: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3703B4u;
    {
        const bool branch_taken_0x3703b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703b4) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x3703BCu;
    // 0x3703bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3703bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3703c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3703c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703c4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3703c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3703c8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3703c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3703cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3703ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3703d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3703d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3703d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3703dc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3703dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3703e0: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x3703e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x3703e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3703e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3703e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3703e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3703ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3703ECu;
    SET_GPR_U32(ctx, 31, 0x3703F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3703ECu, 0x3703F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3703F4u;
label_3703f4:
    // 0x3703f4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x3703F4u;
    {
        const bool branch_taken_0x3703f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703f4) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x3703FCu;
label_3703fc:
    // 0x3703fc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3703fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x370400: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x370400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x370404: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370408: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37040c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370410: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x370410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x370414: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x370414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x370418: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x370418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37041c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x370420: 0xc05c848  jal         func_172120
    ctx->pc = 0x370420u;
    SET_GPR_U32(ctx, 31, 0x370428u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x370420u, 0x370428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370428u;
label_370428:
    // 0x370428: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x370428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x37042c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370430: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x370430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370434: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x370434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370438: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x370438u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37043c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37043Cu;
    SET_GPR_U32(ctx, 31, 0x370444u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37043Cu, 0x370444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370444u;
label_370444:
    // 0x370444: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370448: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x370448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x37044c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37044cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370454u;
    SET_GPR_U32(ctx, 31, 0x37045Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370454u, 0x37045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37045Cu;
label_37045c:
    // 0x37045c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370460: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370460u;
    SET_GPR_U32(ctx, 31, 0x370468u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370460u, 0x370468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370468u;
label_370468:
    // 0x370468: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37046c: 0xc0dd008  jal         func_374020
    ctx->pc = 0x37046Cu;
    SET_GPR_U32(ctx, 31, 0x370474u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x37046Cu, 0x370474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370474u;
label_370474:
    // 0x370474: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370478: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370478u;
    SET_GPR_U32(ctx, 31, 0x370480u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370478u, 0x370480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370480u;
label_370480:
    // 0x370480: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x370480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370484: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x370484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x370488: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x370488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37048c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x37048cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370490: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x370490u;
    {
        const bool branch_taken_0x370490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x370490) {
            ctx->pc = 0x3704C4u;
            goto label_3704c4;
        }
    }
    ctx->pc = 0x370498u;
    // 0x370498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37049c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704a0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3704a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3704a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3704a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3704acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3704b0: 0x24061e06  addiu       $a2, $zero, 0x1E06
    ctx->pc = 0x3704b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7686));
    // 0x3704b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3704b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3704b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3704b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3704bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3704BCu;
    SET_GPR_U32(ctx, 31, 0x3704C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3704BCu, 0x3704C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3704C4u;
label_3704c4:
    // 0x3704c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3704c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704c8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3704c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3704cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3704ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3704d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3704d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3704d4: 0x28630064  slti        $v1, $v1, 0x64
    ctx->pc = 0x3704d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x3704d8: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x3704D8u;
    {
        const bool branch_taken_0x3704d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3704d8) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x3704E0u;
    // 0x3704e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3704e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3704e4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3704e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3704e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3704e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3704ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3704ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3704f0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3704f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3704f4: 0x146000a4  bnez        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3704F4u;
    {
        const bool branch_taken_0x3704f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3704f4) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x3704FCu;
    // 0x3704fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3704fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370500: 0x0  nop
    ctx->pc = 0x370500u;
    // NOP
    // 0x370504: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x370504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x370508: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37050c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x37050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370510: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x370510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x370514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370518: 0x0  nop
    ctx->pc = 0x370518u;
    // NOP
    // 0x37051c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x37051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x370520: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x370524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370528: 0x0  nop
    ctx->pc = 0x370528u;
    // NOP
    // 0x37052c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x37052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x370530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370534: 0x0  nop
    ctx->pc = 0x370534u;
    // NOP
    // 0x370538: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x370538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x37053c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x37053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x370540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370544: 0x0  nop
    ctx->pc = 0x370544u;
    // NOP
    // 0x370548: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x370548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x37054c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37054cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370550: 0x0  nop
    ctx->pc = 0x370550u;
    // NOP
    // 0x370554: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x370554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x370558: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37055c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37055cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370560: 0x0  nop
    ctx->pc = 0x370560u;
    // NOP
    // 0x370564: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x370564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x370568: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37056c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370570: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370574: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370578: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37057c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370588: 0x34440103  ori         $a0, $v0, 0x103
    ctx->pc = 0x370588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)259);
    // 0x37058c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370590: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370594: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x370594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370598: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x370598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37059c: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x37059cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x3705a0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3705a0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3705a4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3705A4u;
    SET_GPR_U32(ctx, 31, 0x3705ACu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3705A4u, 0x3705ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3705ACu;
label_3705ac:
    // 0x3705ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3705acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705b0: 0x0  nop
    ctx->pc = 0x3705b0u;
    // NOP
    // 0x3705b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3705b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3705b8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3705b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3705bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3705bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705c0: 0x0  nop
    ctx->pc = 0x3705c0u;
    // NOP
    // 0x3705c4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3705c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3705c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3705c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705cc: 0x0  nop
    ctx->pc = 0x3705ccu;
    // NOP
    // 0x3705d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3705d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3705d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3705d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3705d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3705d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3705dc: 0x0  nop
    ctx->pc = 0x3705dcu;
    // NOP
    // 0x3705e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3705e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3705e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3705e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3705e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3705ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3705ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3705f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3705f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3705f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3705f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3705f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3705f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3705fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3705fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370604: 0x34440103  ori         $a0, $v0, 0x103
    ctx->pc = 0x370604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)259);
    // 0x370608: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37060c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x37060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370610: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x370610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370614: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x370614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x370618: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x370618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x37061c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x37061cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370620: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370620u;
    SET_GPR_U32(ctx, 31, 0x370628u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370620u, 0x370628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370628u;
label_370628:
    // 0x370628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37062c: 0x0  nop
    ctx->pc = 0x37062cu;
    // NOP
    // 0x370630: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x370630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x370634: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x370634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x370638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37063c: 0x0  nop
    ctx->pc = 0x37063cu;
    // NOP
    // 0x370640: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x370640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x370644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x370644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370648: 0x0  nop
    ctx->pc = 0x370648u;
    // NOP
    // 0x37064c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x37064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x370650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x370654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x370654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x370658: 0x0  nop
    ctx->pc = 0x370658u;
    // NOP
    // 0x37065c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x37065cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x370660: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370664: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370668: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x37066c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37066cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370674: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37067c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370680: 0x34440103  ori         $a0, $v0, 0x103
    ctx->pc = 0x370680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)259);
    // 0x370684: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370688: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37068c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x37068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370690: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x370690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x370694: 0x24470100  addiu       $a3, $v0, 0x100
    ctx->pc = 0x370694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x370698: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370698u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37069c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x37069Cu;
    SET_GPR_U32(ctx, 31, 0x3706A4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x37069Cu, 0x3706A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706A4u;
label_3706a4:
    // 0x3706a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3706A4u;
    {
        const bool branch_taken_0x3706a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3706a4) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x3706ACu;
label_3706ac:
    // 0x3706ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3706b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3706b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3706B4u;
    SET_GPR_U32(ctx, 31, 0x3706BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3706B4u, 0x3706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706BCu;
label_3706bc:
    // 0x3706bc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706c0: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3706C0u;
    SET_GPR_U32(ctx, 31, 0x3706C8u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3706C0u, 0x3706C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706C8u;
label_3706c8:
    // 0x3706c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706cc: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3706CCu;
    SET_GPR_U32(ctx, 31, 0x3706D4u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3706CCu, 0x3706D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706D4u;
label_3706d4:
    // 0x3706d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3706d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706d8: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3706D8u;
    SET_GPR_U32(ctx, 31, 0x3706E0u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3706D8u, 0x3706E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706E0u;
label_3706e0:
    // 0x3706e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3706e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3706e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3706e8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3706E8u;
    {
        const bool branch_taken_0x3706e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3706e8) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x3706F0u;
    // 0x3706f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3706f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3706f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3706f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3706f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3706f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3706fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3706fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370700: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370704: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370708: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37070c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370710: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370714: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370718: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37071c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370720: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370724: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x370724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37072c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37072Cu;
    {
        const bool branch_taken_0x37072c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37072c) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x370734u;
    // 0x370734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370738: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37073c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370740: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370744: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37074c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370750: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370754: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370758: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37075c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370760: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370764: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370768: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37076c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370770: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370774: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370778: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37077c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370780: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370784: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_370788:
    // 0x370788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37078c: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x37078cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370790: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370794: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x370798: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x370798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x37079c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x37079cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3707a0: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x3707a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x3707a4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3707a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3707a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3707a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3707ac: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x3707acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x3707b0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3707b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3707b4: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x3707b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3707b8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3707b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3707bc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3707bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3707c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3707c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3707c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3707c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3707c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3707c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3707cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3707CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3707CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3707D4u;
}
