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

// Function: Om82_R1_dm00
// Address: 0x35b300 - 0x35b488
void Om82_R1_dm00_0x35b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om82_R1_dm00_0x35b300");
#endif

    switch (ctx->pc) {
        case 0x35b388u: goto label_35b388;
        case 0x35b3bcu: goto label_35b3bc;
        case 0x35b40cu: goto label_35b40c;
        case 0x35b418u: goto label_35b418;
        default: break;
    }

    ctx->pc = 0x35b300u;

    // 0x35b300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35b304: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x35b308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b30c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x35b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x35b310: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35b310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35b314: 0x2463a9b0  addiu       $v1, $v1, -0x5650
    ctx->pc = 0x35b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945200));
    // 0x35b318: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35b31c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35b31cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA9B0u));
    // 0x35b320: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35b320u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35b324: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b328: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x35b328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x35b32c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b330: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x35b330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b334: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b338: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x35b338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b33c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b340: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35b340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35b344: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35b348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b34c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x35B34Cu;
    {
        const bool branch_taken_0x35b34c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b34c) {
            ctx->pc = 0x35B3ECu;
            goto label_35b3ec;
        }
    }
    ctx->pc = 0x35B354u;
    // 0x35b354: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B354u;
    {
        const bool branch_taken_0x35b354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b354) {
            ctx->pc = 0x35B364u;
            goto label_35b364;
        }
    }
    ctx->pc = 0x35B35Cu;
    // 0x35b35c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x35B35Cu;
    {
        const bool branch_taken_0x35b35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b35c) {
            ctx->pc = 0x35B474u;
            goto label_35b474;
        }
    }
    ctx->pc = 0x35B364u;
label_35b364:
    // 0x35b364: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35b368: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35b368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35b36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35b36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35b370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b374: 0x2404042f  addiu       $a0, $zero, 0x42F
    ctx->pc = 0x35b374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1071));
    // 0x35b378: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x35b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x35b37c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35b37cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b380: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35B380u;
    SET_GPR_U32(ctx, 31, 0x35B388u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35B380u, 0x35B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B388u;
label_35b388:
    // 0x35b388: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b38c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35b390: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b394: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35B394u;
    {
        const bool branch_taken_0x35b394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b394) {
            ctx->pc = 0x35B3BCu;
            goto label_35b3bc;
        }
    }
    ctx->pc = 0x35B39Cu;
    // 0x35b39c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x35b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35b3a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35b3a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b3ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35b3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b3b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35b3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35b3b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35B3B4u;
    SET_GPR_U32(ctx, 31, 0x35B3BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35B3B4u, 0x35B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3BCu;
label_35b3bc:
    // 0x35b3bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x35b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3c0: 0x8ca4133c  lw          $a0, 0x133C($a1)
    ctx->pc = 0x35b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4924)));
    // 0x35b3c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x35b3c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35b3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35b3cc: 0xaca3133c  sw          $v1, 0x133C($a1)
    ctx->pc = 0x35b3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4924), GPR_U32(ctx, 3));
    // 0x35b3d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x35b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35b3d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3d8: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x35b3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b3dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35b3e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35b3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b3e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35b3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_35b3ec:
    // 0x35b3ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b3f0: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35b3f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b3f8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B3F8u;
    {
        const bool branch_taken_0x35b3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b3f8) {
            ctx->pc = 0x35B418u;
            goto label_35b418;
        }
    }
    ctx->pc = 0x35B400u;
    // 0x35b400: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b404: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35B404u;
    SET_GPR_U32(ctx, 31, 0x35B40Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35B404u, 0x35B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B40Cu;
label_35b40c:
    // 0x35b40c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b410: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35B410u;
    SET_GPR_U32(ctx, 31, 0x35B418u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35B410u, 0x35B418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B418u;
label_35b418:
    // 0x35b418: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x35b418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b41c: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x35b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x35b420: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b424: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x35b424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    // 0x35b428: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x35b428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b42c: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x35B42Cu;
    {
        const bool branch_taken_0x35b42c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b42c) {
            ctx->pc = 0x35B474u;
            goto label_35b474;
        }
    }
    ctx->pc = 0x35B434u;
    // 0x35b434: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35b438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b43c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b444: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35b444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b448: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b44c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b450: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b454: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35b454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b458: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b45c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35b45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35b460: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b464: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b468: 0xa06411ec  sb          $a0, 0x11EC($v1)
    ctx->pc = 0x35b468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 4));
    // 0x35b46c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x35b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b470: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x35b470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
label_35b474:
    // 0x35b474: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35b474u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35b478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b47c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35b47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35b480: 0x3e00008  jr          $ra
    ctx->pc = 0x35B480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B488u;
}
