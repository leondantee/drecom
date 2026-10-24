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

// Function: Em09_R1_mv10
// Address: 0x34b390 - 0x34b500
void Em09_R1_mv10_0x34b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv10_0x34b390");
#endif

    switch (ctx->pc) {
        case 0x34b410u: goto label_34b410;
        case 0x34b45cu: goto label_34b45c;
        case 0x34b468u: goto label_34b468;
        case 0x34b478u: goto label_34b478;
        case 0x34b484u: goto label_34b484;
        default: break;
    }

    ctx->pc = 0x34b390u;

    // 0x34b390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34b394: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34b398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b39c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x34b3a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3a4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34b3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34b3a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3ac: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34b3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b3b0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34b3b4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x34b3b8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34b3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3c0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34b3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34b3c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34b3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b3c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b3cc: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x34B3CCu;
    {
        const bool branch_taken_0x34b3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b3cc) {
            ctx->pc = 0x34B44Cu;
            goto label_34b44c;
        }
    }
    ctx->pc = 0x34B3D4u;
    // 0x34b3d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B3D4u;
    {
        const bool branch_taken_0x34b3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b3d4) {
            ctx->pc = 0x34B3E4u;
            goto label_34b3e4;
        }
    }
    ctx->pc = 0x34B3DCu;
    // 0x34b3dc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x34B3DCu;
    {
        const bool branch_taken_0x34b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b3dc) {
            ctx->pc = 0x34B4ECu;
            goto label_34b4ec;
        }
    }
    ctx->pc = 0x34B3E4u;
label_34b3e4:
    // 0x34b3e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b3e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3ec: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b3f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b3f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b3fc: 0x24060f1e  addiu       $a2, $zero, 0xF1E
    ctx->pc = 0x34b3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
    // 0x34b400: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b404: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b408: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B408u;
    SET_GPR_U32(ctx, 31, 0x34B410u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B408u, 0x34B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B410u;
label_34b410:
    // 0x34b410: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b414: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b418: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34b41c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34b420: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34b420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34b424: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34b424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34b428: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b42c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34b42cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b430: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b434: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34b438: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34b438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34b43c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34b440: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34b444: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34b444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34b448: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34b448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34b44c:
    // 0x34b44c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b450: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b454: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34B454u;
    SET_GPR_U32(ctx, 31, 0x34B45Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34B454u, 0x34B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B45Cu;
label_34b45c:
    // 0x34b45c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b460: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B460u;
    SET_GPR_U32(ctx, 31, 0x34B468u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B460u, 0x34B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B468u;
label_34b468:
    // 0x34b468: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b46c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b46cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b470: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B470u;
    SET_GPR_U32(ctx, 31, 0x34B478u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B470u, 0x34B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B478u;
label_34b478:
    // 0x34b478: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b47c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B47Cu;
    SET_GPR_U32(ctx, 31, 0x34B484u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B47Cu, 0x34B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B484u;
label_34b484:
    // 0x34b484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b488: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34b488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34b48c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34B48Cu;
    {
        const bool branch_taken_0x34b48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b48c) {
            ctx->pc = 0x34B4ECu;
            goto label_34b4ec;
        }
    }
    ctx->pc = 0x34B494u;
    // 0x34b494: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b498: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b49c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34b49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b4a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b4a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34b4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34b4ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34b4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b4b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34b4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b4bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34b4c4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34b4c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b4d0: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34b4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34b4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b4d8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b4dc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34b4e0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34b4e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34b4e8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_34b4ec:
    // 0x34b4ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34b4ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b4f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x34b4f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34b4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x34B4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B500u;
}
