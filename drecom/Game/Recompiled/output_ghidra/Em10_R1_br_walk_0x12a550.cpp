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

// Function: Em10_R1_br_walk
// Address: 0x12a550 - 0x12a800
void Em10_R1_br_walk_0x12a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_walk_0x12a550");
#endif

    switch (ctx->pc) {
        case 0x12a680u: goto label_12a680;
        case 0x12a724u: goto label_12a724;
        case 0x12a738u: goto label_12a738;
        case 0x12a74cu: goto label_12a74c;
        case 0x12a760u: goto label_12a760;
        case 0x12a774u: goto label_12a774;
        case 0x12a788u: goto label_12a788;
        case 0x12a79cu: goto label_12a79c;
        case 0x12a7b0u: goto label_12a7b0;
        case 0x12a7c4u: goto label_12a7c4;
        case 0x12a7d8u: goto label_12a7d8;
        case 0x12a7ecu: goto label_12a7ec;
        default: break;
    }

    ctx->pc = 0x12a550u;

    // 0x12a550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a554: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12a558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a55c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x12a560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a564: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12a564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12a568: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a56c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a570: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x12a570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x12a574: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a578: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12A578u;
    {
        const bool branch_taken_0x12a578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a578) {
            ctx->pc = 0x12A5E8u;
            goto label_12a5e8;
        }
    }
    ctx->pc = 0x12A580u;
    // 0x12a580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a584: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12a584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12a588: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12A588u;
    {
        const bool branch_taken_0x12a588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a588) {
            ctx->pc = 0x12A5E0u;
            goto label_12a5e0;
        }
    }
    ctx->pc = 0x12A590u;
    // 0x12a590: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a594: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12a594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a598: 0x3c030300  lui         $v1, 0x300
    ctx->pc = 0x12a598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)768 << 16));
    // 0x12a59c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a5a0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12A5A0u;
    {
        const bool branch_taken_0x12a5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a5a0) {
            ctx->pc = 0x12A5E0u;
            goto label_12a5e0;
        }
    }
    ctx->pc = 0x12A5A8u;
    // 0x12a5a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a5ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a5b4: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x12a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12a5b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a5c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a5c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a5d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x12a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a5d8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x12A5D8u;
    {
        const bool branch_taken_0x12a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a5d8) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A5E0u;
label_12a5e0:
    // 0x12a5e0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x12A5E0u;
    {
        const bool branch_taken_0x12a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a5e0) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A5E8u;
label_12a5e8:
    // 0x12a5e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12a5ec: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x12a5ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x12a5f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A5F0u;
    {
        const bool branch_taken_0x12a5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a5f0) {
            ctx->pc = 0x12A610u;
            goto label_12a610;
        }
    }
    ctx->pc = 0x12A5F8u;
    // 0x12a5f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12a5fc: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x12a5fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x12a600: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12a600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12a604: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12a604u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12a608: 0x4600078  bltz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x12A608u;
    {
        const bool branch_taken_0x12a608 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x12a608) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A610u;
label_12a610:
    // 0x12a610: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a614: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x12a614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12a618: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12a61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A61Cu;
    {
        const bool branch_taken_0x12a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a61c) {
            ctx->pc = 0x12A630u;
            goto label_12a630;
        }
    }
    ctx->pc = 0x12A624u;
    // 0x12a624: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12a624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a628: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12A628u;
    {
        const bool branch_taken_0x12a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a628) {
            ctx->pc = 0x12A664u;
            goto label_12a664;
        }
    }
    ctx->pc = 0x12A630u;
label_12a630:
    // 0x12a630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a634: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x12a634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12a638: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12a638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x12a63c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A63Cu;
    {
        const bool branch_taken_0x12a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a63c) {
            ctx->pc = 0x12A64Cu;
            goto label_12a64c;
        }
    }
    ctx->pc = 0x12A644u;
    // 0x12a644: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x12a648: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x12a648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
label_12a64c:
    // 0x12a64c: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x12a64cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x12a650: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A650u;
    {
        const bool branch_taken_0x12a650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a650) {
            ctx->pc = 0x12A664u;
            goto label_12a664;
        }
    }
    ctx->pc = 0x12A658u;
    // 0x12a658: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x12a658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x12a65c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12a660: 0xa602007c  sh          $v0, 0x7C($s0)
    ctx->pc = 0x12a660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 2));
label_12a664:
    // 0x12a664: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a668: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x12a668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x12a66c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A66Cu;
    {
        const bool branch_taken_0x12a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a66c) {
            ctx->pc = 0x12A680u;
            goto label_12a680;
        }
    }
    ctx->pc = 0x12A674u;
    // 0x12a674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a678: 0xc04d934  jal         func_1364D0
    ctx->pc = 0x12A678u;
    SET_GPR_U32(ctx, 31, 0x12A680u);
    ctx->pc = 0x1364D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D0u, 0x12A678u, 0x12A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A680u;
label_12a680:
    // 0x12a680: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a684: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12a684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12a688: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12a688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12a68c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12a690: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x12a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x12a694: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x12A694u;
    {
        const bool branch_taken_0x12a694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a694) {
            ctx->pc = 0x12A7E0u;
            goto label_12a7e0;
        }
    }
    ctx->pc = 0x12A69Cu;
    // 0x12a69c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x12a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x12a6a0: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x12A6A0u;
    {
        const bool branch_taken_0x12a6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6a0) {
            ctx->pc = 0x12A7CCu;
            goto label_12a7cc;
        }
    }
    ctx->pc = 0x12A6A8u;
    // 0x12a6a8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a6ac: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x12A6ACu;
    {
        const bool branch_taken_0x12a6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6ac) {
            ctx->pc = 0x12A7B8u;
            goto label_12a7b8;
        }
    }
    ctx->pc = 0x12A6B4u;
    // 0x12a6b4: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x12a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x12a6b8: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x12A6B8u;
    {
        const bool branch_taken_0x12a6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6b8) {
            ctx->pc = 0x12A7A4u;
            goto label_12a7a4;
        }
    }
    ctx->pc = 0x12A6C0u;
    // 0x12a6c0: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x12a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x12a6c4: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12A6C4u;
    {
        const bool branch_taken_0x12a6c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6c4) {
            ctx->pc = 0x12A790u;
            goto label_12a790;
        }
    }
    ctx->pc = 0x12A6CCu;
    // 0x12a6cc: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x12a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x12a6d0: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x12A6D0u;
    {
        const bool branch_taken_0x12a6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6d0) {
            ctx->pc = 0x12A77Cu;
            goto label_12a77c;
        }
    }
    ctx->pc = 0x12A6D8u;
    // 0x12a6d8: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x12a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x12a6dc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12A6DCu;
    {
        const bool branch_taken_0x12a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6dc) {
            ctx->pc = 0x12A768u;
            goto label_12a768;
        }
    }
    ctx->pc = 0x12A6E4u;
    // 0x12a6e4: 0x24023000  addiu       $v0, $zero, 0x3000
    ctx->pc = 0x12a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x12a6e8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12A6E8u;
    {
        const bool branch_taken_0x12a6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6e8) {
            ctx->pc = 0x12A754u;
            goto label_12a754;
        }
    }
    ctx->pc = 0x12A6F0u;
    // 0x12a6f0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x12a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x12a6f4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A6F4u;
    {
        const bool branch_taken_0x12a6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a6f4) {
            ctx->pc = 0x12A740u;
            goto label_12a740;
        }
    }
    ctx->pc = 0x12A6FCu;
    // 0x12a6fc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x12a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x12a700: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12A700u;
    {
        const bool branch_taken_0x12a700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a700) {
            ctx->pc = 0x12A72Cu;
            goto label_12a72c;
        }
    }
    ctx->pc = 0x12A708u;
    // 0x12a708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A708u;
    {
        const bool branch_taken_0x12a708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a708) {
            ctx->pc = 0x12A718u;
            goto label_12a718;
        }
    }
    ctx->pc = 0x12A710u;
    // 0x12a710: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12A710u;
    {
        const bool branch_taken_0x12a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a710) {
            ctx->pc = 0x12A718u;
            goto label_12a718;
        }
    }
    ctx->pc = 0x12A718u;
label_12a718:
    // 0x12a718: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a71c: 0xc0495b8  jal         func_1256E0
    ctx->pc = 0x12A71Cu;
    SET_GPR_U32(ctx, 31, 0x12A724u);
    ctx->pc = 0x1256E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1256E0u, 0x12A71Cu, 0x12A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A724u;
label_12a724:
    // 0x12a724: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12A724u;
    {
        const bool branch_taken_0x12a724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a724) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A72Cu;
label_12a72c:
    // 0x12a72c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a730: 0xc049ea0  jal         func_127A80
    ctx->pc = 0x12A730u;
    SET_GPR_U32(ctx, 31, 0x12A738u);
    ctx->pc = 0x127A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A80u, 0x12A730u, 0x12A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A738u;
label_12a738:
    // 0x12a738: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12A738u;
    {
        const bool branch_taken_0x12a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a738) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A740u;
label_12a740:
    // 0x12a740: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a744: 0xc04a35c  jal         func_128D70
    ctx->pc = 0x12A744u;
    SET_GPR_U32(ctx, 31, 0x12A74Cu);
    ctx->pc = 0x128D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128D70u, 0x12A744u, 0x12A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A74Cu;
label_12a74c:
    // 0x12a74c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12A74Cu;
    {
        const bool branch_taken_0x12a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a74c) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A754u;
label_12a754:
    // 0x12a754: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a758: 0xc04a574  jal         func_1295D0
    ctx->pc = 0x12A758u;
    SET_GPR_U32(ctx, 31, 0x12A760u);
    ctx->pc = 0x1295D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1295D0u, 0x12A758u, 0x12A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A760u;
label_12a760:
    // 0x12a760: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12A760u;
    {
        const bool branch_taken_0x12a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a760) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A768u;
label_12a768:
    // 0x12a768: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a76c: 0xc04a764  jal         func_129D90
    ctx->pc = 0x12A76Cu;
    SET_GPR_U32(ctx, 31, 0x12A774u);
    ctx->pc = 0x129D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129D90u, 0x12A76Cu, 0x12A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A774u;
label_12a774:
    // 0x12a774: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12A774u;
    {
        const bool branch_taken_0x12a774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a774) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A77Cu;
label_12a77c:
    // 0x12a77c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a780: 0xc049770  jal         func_125DC0
    ctx->pc = 0x12A780u;
    SET_GPR_U32(ctx, 31, 0x12A788u);
    ctx->pc = 0x125DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125DC0u, 0x12A780u, 0x12A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A788u;
label_12a788:
    // 0x12a788: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12A788u;
    {
        const bool branch_taken_0x12a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a788) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A790u;
label_12a790:
    // 0x12a790: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a794: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A794u;
    SET_GPR_U32(ctx, 31, 0x12A79Cu);
    ctx->pc = 0x127390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127390u, 0x12A794u, 0x12A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A79Cu;
label_12a79c:
    // 0x12a79c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12A79Cu;
    {
        const bool branch_taken_0x12a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a79c) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A7A4u;
label_12a7a4:
    // 0x12a7a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7a8: 0xc04a0fc  jal         func_1283F0
    ctx->pc = 0x12A7A8u;
    SET_GPR_U32(ctx, 31, 0x12A7B0u);
    ctx->pc = 0x1283F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1283F0u, 0x12A7A8u, 0x12A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7B0u;
label_12a7b0:
    // 0x12a7b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12A7B0u;
    {
        const bool branch_taken_0x12a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7b0) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A7B8u;
label_12a7b8:
    // 0x12a7b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7bc: 0xc04995c  jal         func_126570
    ctx->pc = 0x12A7BCu;
    SET_GPR_U32(ctx, 31, 0x12A7C4u);
    ctx->pc = 0x126570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126570u, 0x12A7BCu, 0x12A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7C4u;
label_12a7c4:
    // 0x12a7c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12A7C4u;
    {
        const bool branch_taken_0x12a7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7c4) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A7CCu;
label_12a7cc:
    // 0x12a7cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7d0: 0xc049b80  jal         func_126E00
    ctx->pc = 0x12A7D0u;
    SET_GPR_U32(ctx, 31, 0x12A7D8u);
    ctx->pc = 0x126E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E00u, 0x12A7D0u, 0x12A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7D8u;
label_12a7d8:
    // 0x12a7d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A7D8u;
    {
        const bool branch_taken_0x12a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7d8) {
            ctx->pc = 0x12A7ECu;
            goto label_12a7ec;
        }
    }
    ctx->pc = 0x12A7E0u;
label_12a7e0:
    // 0x12a7e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7e4: 0xc049770  jal         func_125DC0
    ctx->pc = 0x12A7E4u;
    SET_GPR_U32(ctx, 31, 0x12A7ECu);
    ctx->pc = 0x125DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125DC0u, 0x12A7E4u, 0x12A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7ECu;
label_12a7ec:
    // 0x12a7ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12a7ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12a7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a7f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12a7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A800u;
}
