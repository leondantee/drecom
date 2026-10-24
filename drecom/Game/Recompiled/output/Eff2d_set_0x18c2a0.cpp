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

// Function: Eff2d_set
// Address: 0x18c2a0 - 0x18c7b8
void Eff2d_set_0x18c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_set_0x18c2a0");
#endif

    switch (ctx->pc) {
        case 0x18c36cu: goto label_18c36c;
        case 0x18c3dcu: goto label_18c3dc;
        case 0x18c41cu: goto label_18c41c;
        case 0x18c430u: goto label_18c430;
        case 0x18c66cu: goto label_18c66c;
        case 0x18c6fcu: goto label_18c6fc;
        default: break;
    }

    ctx->pc = 0x18c2a0u;

    // 0x18c2a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18c2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x18c2a4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x18c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x18c2a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18c2ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18c2b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c2b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c2b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c2bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c2c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c2c4: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x18c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x18c2c8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18c2cc: 0x2452a630  addiu       $s2, $v0, -0x59D0
    ctx->pc = 0x18c2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18c2d0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18c2d4: 0x2451e890  addiu       $s1, $v0, -0x1770
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18c2d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18c2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18c2dc: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x18c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x18c2e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x18c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x18c2e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c2e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C2E8u;
    {
        const bool branch_taken_0x18c2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c2e8) {
            ctx->pc = 0x18C300u;
            goto label_18c300;
        }
    }
    ctx->pc = 0x18C2F0u;
    // 0x18c2f0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c2f4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c2f8: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x18C2F8u;
    {
        const bool branch_taken_0x18c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c2f8) {
            ctx->pc = 0x18C78Cu;
            goto label_18c78c;
        }
    }
    ctx->pc = 0x18C300u;
label_18c300:
    // 0x18c300: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18c304: 0x8c550120  lw          $s5, 0x120($v0)
    ctx->pc = 0x18c304u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x18c308: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18c30c: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C30Cu;
    {
        const bool branch_taken_0x18c30c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c30c) {
            ctx->pc = 0x18C324u;
            goto label_18c324;
        }
    }
    ctx->pc = 0x18C314u;
    // 0x18c314: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c318: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c31c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x18C31Cu;
    {
        const bool branch_taken_0x18c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c31c) {
            ctx->pc = 0x18C78Cu;
            goto label_18c78c;
        }
    }
    ctx->pc = 0x18C324u;
label_18c324:
    // 0x18c324: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x18c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x18c328: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x18c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18c32c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18c330: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x18c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x18c334: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18c334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18c338: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18c338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18c33c: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18c340: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18c340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c344: 0x92220097  lbu         $v0, 0x97($s1)
    ctx->pc = 0x18c344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 151)));
    // 0x18c348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c34c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C34Cu;
    {
        const bool branch_taken_0x18c34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c34c) {
            ctx->pc = 0x18C364u;
            goto label_18c364;
        }
    }
    ctx->pc = 0x18C354u;
    // 0x18c354: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c358: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c35c: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x18C35Cu;
    {
        const bool branch_taken_0x18c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c35c) {
            ctx->pc = 0x18C78Cu;
            goto label_18c78c;
        }
    }
    ctx->pc = 0x18C364u;
label_18c364:
    // 0x18c364: 0xc062ef0  jal         func_18BBC0
    ctx->pc = 0x18C364u;
    SET_GPR_U32(ctx, 31, 0x18C36Cu);
    ctx->pc = 0x18BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BBC0u, 0x18C364u, 0x18C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C36Cu;
label_18c36c:
    // 0x18c36c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18c36cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18c370: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c374: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c378: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C378u;
    {
        const bool branch_taken_0x18c378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c378) {
            ctx->pc = 0x18C390u;
            goto label_18c390;
        }
    }
    ctx->pc = 0x18C380u;
    // 0x18c380: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c384: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c388: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x18C388u;
    {
        const bool branch_taken_0x18c388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c388) {
            ctx->pc = 0x18C78Cu;
            goto label_18c78c;
        }
    }
    ctx->pc = 0x18C390u;
label_18c390:
    // 0x18c390: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18c394: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C394u;
    {
        const bool branch_taken_0x18c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c394) {
            ctx->pc = 0x18C3B0u;
            goto label_18c3b0;
        }
    }
    ctx->pc = 0x18C39Cu;
    // 0x18c39c: 0xae50003c  sw          $s0, 0x3C($s2)
    ctx->pc = 0x18c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
    // 0x18c3a0: 0xae500038  sw          $s0, 0x38($s2)
    ctx->pc = 0x18c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
    // 0x18c3a4: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x18c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x18c3a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C3A8u;
    {
        const bool branch_taken_0x18c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3a8) {
            ctx->pc = 0x18C3C4u;
            goto label_18c3c4;
        }
    }
    ctx->pc = 0x18C3B0u;
label_18c3b0:
    // 0x18c3b0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x18c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x18c3b4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18c3b8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x18c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x18c3bc: 0xac500218  sw          $s0, 0x218($v0)
    ctx->pc = 0x18c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 16));
    // 0x18c3c0: 0xae50003c  sw          $s0, 0x3C($s2)
    ctx->pc = 0x18c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
label_18c3c4:
    // 0x18c3c4: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x18c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x18c3c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18c3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18c3cc: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x18c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18c3d0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x18c3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x18c3d4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x18C3D4u;
    SET_GPR_U32(ctx, 31, 0x18C3DCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x18C3DCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C3DCu) { return; }
    ctx->pc = 0x18C3DCu;
label_18c3dc:
    // 0x18c3dc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18c3e0: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x18c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x18c3e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18c3e8: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x18c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x18c3ec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18c3f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c3f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C3F4u;
    {
        const bool branch_taken_0x18c3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3f4) {
            ctx->pc = 0x18C408u;
            goto label_18c408;
        }
    }
    ctx->pc = 0x18C3FCu;
    // 0x18c3fc: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x18c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x18c400: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x18c404: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x18c404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
label_18c408:
    // 0x18c408: 0xae1101fc  sw          $s1, 0x1FC($s0)
    ctx->pc = 0x18c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 17));
    // 0x18c40c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x18c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x18c410: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18c410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18c414: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x18C414u;
    SET_GPR_U32(ctx, 31, 0x18C41Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x18C41Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C41Cu) { return; }
    ctx->pc = 0x18C41Cu;
label_18c41c:
    // 0x18c41c: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x18c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x18c420: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18c420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18c424: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18c428: 0xc040c92  jal         func_103248
    ctx->pc = 0x18C428u;
    SET_GPR_U32(ctx, 31, 0x18C430u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x18C430u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C430u) { return; }
    ctx->pc = 0x18C430u;
label_18c430:
    // 0x18c430: 0x92020139  lbu         $v0, 0x139($s0)
    ctx->pc = 0x18c430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 313)));
    // 0x18c434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c438: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18C438u;
    {
        const bool branch_taken_0x18c438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c438) {
            ctx->pc = 0x18C4B4u;
            goto label_18c4b4;
        }
    }
    ctx->pc = 0x18C440u;
    // 0x18c440: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18c440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18c444: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18c448: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18c448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18c44c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c458: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18c45c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18c45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18c460: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18c460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18c464: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18c464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18c468: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c470: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x18c474: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x18c474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x18c478: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18c47c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18c480: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x18c480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x18c484: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c488: 0x92020139  lbu         $v0, 0x139($s0)
    ctx->pc = 0x18c488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 313)));
    // 0x18c48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c494: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x18c494u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x18c498: 0x0  nop
    ctx->pc = 0x18c498u;
    // NOP
    // 0x18c49c: 0x0  nop
    ctx->pc = 0x18c49cu;
    // NOP
    // 0x18c4a0: 0x1010  mfhi        $v0
    ctx->pc = 0x18c4a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c4a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c4a8: 0x92020138  lbu         $v0, 0x138($s0)
    ctx->pc = 0x18c4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x18c4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c4b0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x18c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
label_18c4b4:
    // 0x18c4b4: 0x92020138  lbu         $v0, 0x138($s0)
    ctx->pc = 0x18c4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x18c4b8: 0xa2020210  sb          $v0, 0x210($s0)
    ctx->pc = 0x18c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 528), (uint8_t)GPR_U32(ctx, 2));
    // 0x18c4bc: 0xae0001f8  sw          $zero, 0x1F8($s0)
    ctx->pc = 0x18c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 0));
    // 0x18c4c0: 0xa2000212  sb          $zero, 0x212($s0)
    ctx->pc = 0x18c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 530), (uint8_t)GPR_U32(ctx, 0));
    // 0x18c4c4: 0x9202013a  lbu         $v0, 0x13A($s0)
    ctx->pc = 0x18c4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 314)));
    // 0x18c4c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c4cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c4d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c4d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18c4d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18c4dc: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18c4e0: 0xae160204  sw          $s6, 0x204($s0)
    ctx->pc = 0x18c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 22));
    // 0x18c4e4: 0x8ed30010  lw          $s3, 0x10($s6)
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x18c4e8: 0x92020210  lbu         $v0, 0x210($s0)
    ctx->pc = 0x18c4e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18c4ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c4f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18c4f4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x18c4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18c4f8: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x18c4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18c4fc: 0xa2020211  sb          $v0, 0x211($s0)
    ctx->pc = 0x18c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 529), (uint8_t)GPR_U32(ctx, 2));
    // 0x18c500: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x18c500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c504: 0x260201c0  addiu       $v0, $s0, 0x1C0
    ctx->pc = 0x18c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x18c508: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18c508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18c50c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c510: 0xfe0201d0  sd          $v0, 0x1D0($s0)
    ctx->pc = 0x18c510u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 464), GPR_U64(ctx, 2));
    // 0x18c514: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c514u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c518: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18c51c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x18c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x18c520: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C520u;
    {
        const bool branch_taken_0x18c520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c520) {
            ctx->pc = 0x18C544u;
            goto label_18c544;
        }
    }
    ctx->pc = 0x18C528u;
    // 0x18c528: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18c528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18c52c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c530: 0x24020368  addiu       $v0, $zero, 0x368
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 872));
    // 0x18c534: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18c538: 0xfe0201e8  sd          $v0, 0x1E8($s0)
    ctx->pc = 0x18c538u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 2));
    // 0x18c53c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C53Cu;
    {
        const bool branch_taken_0x18c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c53c) {
            ctx->pc = 0x18C558u;
            goto label_18c558;
        }
    }
    ctx->pc = 0x18C544u;
label_18c544:
    // 0x18c544: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18c548: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c54c: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x18c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x18c550: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18c554: 0xfe0201e8  sd          $v0, 0x1E8($s0)
    ctx->pc = 0x18c554u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 2));
label_18c558:
    // 0x18c558: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c55c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c560: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18c564: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18C564u;
    {
        const bool branch_taken_0x18c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c564) {
            ctx->pc = 0x18C5D4u;
            goto label_18c5d4;
        }
    }
    ctx->pc = 0x18C56Cu;
    // 0x18c56c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c570: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c574: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c578: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c580: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18c584: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c588: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c58c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c594: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c598: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c59c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c5a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5a8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18c5ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c5b4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c5b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c5c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5c8: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
    // 0x18c5cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18C5CCu;
    {
        const bool branch_taken_0x18c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5cc) {
            ctx->pc = 0x18C634u;
            goto label_18c634;
        }
    }
    ctx->pc = 0x18C5D4u;
label_18c5d4:
    // 0x18c5d4: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c5d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c5e0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c5e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5e8: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18c5ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5f0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c5f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c5fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c600: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c604: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c608: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c60c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c610: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18c614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c618: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c61c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c624: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c628: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c62c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c630: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c630u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
label_18c634:
    // 0x18c634: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c638: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c63c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18c640: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18C640u;
    {
        const bool branch_taken_0x18c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c640) {
            ctx->pc = 0x18C6CCu;
            goto label_18c6cc;
        }
    }
    ctx->pc = 0x18C648u;
    // 0x18c648: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18c648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18c64c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18c64cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c650: 0x92220096  lbu         $v0, 0x96($s1)
    ctx->pc = 0x18c650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x18c654: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c658: 0x9202011b  lbu         $v0, 0x11B($s0)
    ctx->pc = 0x18c658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
    // 0x18c65c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c660: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x18c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c664: 0xc05e9b0  jal         func_17A6C0
    ctx->pc = 0x18C664u;
    SET_GPR_U32(ctx, 31, 0x18C66Cu);
    ctx->pc = 0x17A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A6C0u, 0x18C664u, 0x18C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C66Cu;
label_18c66c:
    // 0x18c66c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18c66cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18c670: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c674: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c678: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c67c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c684: 0x3c020140  lui         $v0, 0x140
    ctx->pc = 0x18c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)320 << 16));
    // 0x18c688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c68c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c690: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c698: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c69c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c6a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c6a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6ac: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x18c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x18c6b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c6b4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c6b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c6c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c6c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c6c8: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
label_18c6cc:
    // 0x18c6cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c6d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c6d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18c6d8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18C6D8u;
    {
        const bool branch_taken_0x18c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c6d8) {
            ctx->pc = 0x18C75Cu;
            goto label_18c75c;
        }
    }
    ctx->pc = 0x18C6E0u;
    // 0x18c6e0: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18c6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18c6e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c6e8: 0x9202011b  lbu         $v0, 0x11B($s0)
    ctx->pc = 0x18c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 283)));
    // 0x18c6ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c6f0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c6f4: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18C6F4u;
    SET_GPR_U32(ctx, 31, 0x18C6FCu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18C6F4u, 0x18C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C6FCu;
label_18c6fc:
    // 0x18c6fc: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18c6fcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18c700: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c704: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c708: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c70c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c714: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18c714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18c718: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c71c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c72c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c730: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c73c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x18c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x18c740: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c744: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c74c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c754: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c758: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c758u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
label_18c75c:
    // 0x18c75c: 0x9202011d  lbu         $v0, 0x11D($s0)
    ctx->pc = 0x18c75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 285)));
    // 0x18c760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c764: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18c764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18c768: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18c768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x18c76c: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x18c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
    // 0x18c770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c774: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x18c774u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c778: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x18c778u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x18c77c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18c780: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x18c780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x18c784: 0xfe0201d8  sd          $v0, 0x1D8($s0)
    ctx->pc = 0x18c784u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 472), GPR_U64(ctx, 2));
    // 0x18c788: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c788u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18c78c:
    // 0x18c78c: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x18c78cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c790: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18c790u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c794: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18c794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c798: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18c798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c79c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c7a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c7a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c7a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c7ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x18c7acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18c7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18C7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C7B8u;
}
