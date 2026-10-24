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

// Function: _getAllRefs
// Address: 0x104048 - 0x1046f8
void _getAllRefs_0x104048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getAllRefs_0x104048");
#endif

    switch (ctx->pc) {
        case 0x104164u: goto label_104164;
        case 0x10419cu: goto label_10419c;
        case 0x1041c8u: goto label_1041c8;
        case 0x104200u: goto label_104200;
        case 0x104234u: goto label_104234;
        case 0x10426cu: goto label_10426c;
        case 0x1042a8u: goto label_1042a8;
        case 0x1043b4u: goto label_1043b4;
        case 0x104454u: goto label_104454;
        case 0x104494u: goto label_104494;
        case 0x1044d8u: goto label_1044d8;
        case 0x1044ecu: goto label_1044ec;
        case 0x104578u: goto label_104578;
        case 0x1045b0u: goto label_1045b0;
        case 0x10460cu: goto label_10460c;
        case 0x104668u: goto label_104668;
        case 0x1046b4u: goto label_1046b4;
        case 0x1046c8u: goto label_1046c8;
        default: break;
    }

    ctx->pc = 0x104048u;

    // 0x104048: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x104048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x10404c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10404cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104050: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x104050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x104054: 0x244241f8  addiu       $v0, $v0, 0x41F8
    ctx->pc = 0x104054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16888));
    // 0x104058: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x104058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x10405c: 0x240b0140  addiu       $t3, $zero, 0x140
    ctx->pc = 0x10405cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104060: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x104060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x104064: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x104064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104068: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x104068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x10406c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10406cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104070: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x104070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x104074: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x104074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104078: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x104078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10407c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10407cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104080: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x104080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x104084: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x104084u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104088: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x104088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10408c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x10408cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104090: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x104090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x104094: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x104094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104098: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x104098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x10409c: 0x30cc0008  andi        $t4, $a2, 0x8
    ctx->pc = 0x10409cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1040a0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1040a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1040a4: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x1040a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x384478u));
    // 0x1040a8: 0x6b2018  mult        $a0, $v1, $t3
    ctx->pc = 0x1040a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1040ac: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1040acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1040b0: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1040B0u;
    {
        const bool branch_taken_0x1040b0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B0u;
        // 0x1040b4: 0xac60012c  sw          $zero, 0x12C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040b0) {
            ctx->pc = 0x1040CCu;
            goto label_1040cc;
        }
    }
    ctx->pc = 0x1040B8u;
    // 0x1040b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1040b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1040bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1040bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1040c0: 0x8c433d7c  lw          $v1, 0x3D7C($v0)
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1040c4: 0x1464010b  bne         $v1, $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x1040C4u;
    {
        const bool branch_taken_0x1040c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1040C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040C4u;
        // 0x1040c8: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040c4) {
            ctx->pc = 0x1044F4u;
            goto label_1044f4;
        }
    }
    ctx->pc = 0x1040CCu;
label_1040cc:
    // 0x1040cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1040d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1040d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1040d4: 0x8c463dac  lw          $a2, 0x3DAC($v0)
    ctx->pc = 0x1040d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383DACu));
    // 0x1040d8: 0x14c30075  bne         $a2, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1040D8u;
    {
        const bool branch_taken_0x1040d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1040DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040D8u;
        // 0x1040dc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040d8) {
            ctx->pc = 0x1042B0u;
            goto label_1042b0;
        }
    }
    ctx->pc = 0x1040E0u;
    // 0x1040e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1040e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1040e4: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1040E4u;
    {
        const bool branch_taken_0x1040e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1040e4) {
            ctx->pc = 0x1040E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1040E4u;
            // 0x1040e8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1040F8u;
            goto label_1040f8;
        }
    }
    ctx->pc = 0x1040ECu;
    // 0x1040ec: 0x1580000d  bnez        $t4, . + 4 + (0xD << 2)
    ctx->pc = 0x1040ECu;
    {
        const bool branch_taken_0x1040ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1040ec) {
            ctx->pc = 0x104124u;
            goto label_104124;
        }
    }
    ctx->pc = 0x1040F4u;
    // 0x1040f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1040f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1040f8:
    // 0x1040f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1040f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1040fc: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x1040fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104104: 0x8c443c00  lw          $a0, 0x3C00($v0)
    ctx->pc = 0x104104u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C00u));
    // 0x104108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10410c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x10410cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104114: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104118: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x104118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10411c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x10411Cu;
    {
        const bool branch_taken_0x10411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10411Cu;
        // 0x104120: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10411c) {
            ctx->pc = 0x1044CCu;
            goto label_1044cc;
        }
    }
    ctx->pc = 0x104124u;
label_104124:
    // 0x104124: 0x1677001f  bne         $s3, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x104124u;
    {
        const bool branch_taken_0x104124 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x104128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104124u;
        // 0x104128: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104124) {
            ctx->pc = 0x1041A4u;
            goto label_1041a4;
        }
    }
    ctx->pc = 0x10412Cu;
    // 0x10412c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104130: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x104130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x104134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104138: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x104138u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10413c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10413cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104140: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x104144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104148: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10414c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10414cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104150: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x104150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x104154: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104158: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10415c: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x10415Cu;
    SET_GPR_U32(ctx, 31, 0x104164u);
    ctx->pc = 0x104160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10415Cu;
    // 0x104160: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x10415Cu, 0x104164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104164u;
label_104164:
    // 0x104164: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x104164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x104168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10416c: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x104170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104174: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x104174u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104178: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10417c: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x104180: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104184: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104188: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10418c: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x10418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x104190: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104194: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104194u;
    SET_GPR_U32(ctx, 31, 0x10419Cu);
    ctx->pc = 0x104198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104194u;
    // 0x104198: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104194u, 0x10419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10419Cu;
label_10419c:
    // 0x10419c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x10419Cu;
    {
        const bool branch_taken_0x10419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10419Cu;
        // 0x1041a0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10419c) {
            ctx->pc = 0x1044F0u;
            goto label_1044f0;
        }
    }
    ctx->pc = 0x1041A4u;
label_1041a4:
    // 0x1041a4: 0x1666003d  bne         $s3, $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1041A4u;
    {
        const bool branch_taken_0x1041a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x1041A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041A4u;
        // 0x1041a8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041a4) {
            ctx->pc = 0x10429Cu;
            goto label_10429c;
        }
    }
    ctx->pc = 0x1041ACu;
    // 0x1041ac: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1041b0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1041b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041b4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1041b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1041b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1041b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1041bc: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1041bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1041c0: 0xc041730  jal         func_105CC0
    ctx->pc = 0x1041C0u;
    SET_GPR_U32(ctx, 31, 0x1041C8u);
    ctx->pc = 0x1041C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041C0u;
    // 0x1041c4: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CC0u, 0x1041C0u, 0x1041C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041C8u;
label_1041c8:
    // 0x1041c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1041c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1041cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041d0: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x1041d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1041d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1041d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1041d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1041dc: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x1041dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x1041e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1041e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1041e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1041e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041e8: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1041e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1041ec: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1041f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1041f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1041f4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1041f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1041f8: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1041F8u;
    SET_GPR_U32(ctx, 31, 0x104200u);
    ctx->pc = 0x1041FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041F8u;
    // 0x1041fc: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1041F8u, 0x104200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104200u;
label_104200:
    // 0x104200: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x104200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x104204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x104204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104208: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x10420c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10420cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104210: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x104210u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104218: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10421c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10421cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104220: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x104220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x104224: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104228: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x104228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x10422c: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x10422Cu;
    SET_GPR_U32(ctx, 31, 0x104234u);
    ctx->pc = 0x104230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10422Cu;
    // 0x104230: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x10422Cu, 0x104234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104234u;
label_104234:
    // 0x104234: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104238: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10423c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x10423cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104240: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104244: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104248: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x10424c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104254: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x104254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x104258: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10425c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10425cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104260: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104264: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104264u;
    SET_GPR_U32(ctx, 31, 0x10426Cu);
    ctx->pc = 0x104268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104264u;
    // 0x104268: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104264u, 0x10426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10426Cu;
label_10426c:
    // 0x10426c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x10426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x104270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104274: 0x8e043c00  lw          $a0, 0x3C00($s0)
    ctx->pc = 0x104274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15360)));
    // 0x104278: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10427c: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x10427cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104284: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104288: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10428c: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x10428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x104290: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104290u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104294: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x104294u;
    {
        const bool branch_taken_0x104294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104294u;
        // 0x104298: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104294) {
            ctx->pc = 0x1044D0u;
            goto label_1044d0;
        }
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042a0: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1042A0u;
    SET_GPR_U32(ctx, 31, 0x1042A8u);
    ctx->pc = 0x1042A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042A0u;
    // 0x1042a4: 0x2484c5e8  addiu       $a0, $a0, -0x3A18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1042A0u, 0x1042A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042A8u;
label_1042a8:
    // 0x1042a8: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1042A8u;
    {
        const bool branch_taken_0x1042a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042A8u;
        // 0x1042ac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042a8) {
            ctx->pc = 0x1044F0u;
            goto label_1044f0;
        }
    }
    ctx->pc = 0x1042B0u;
label_1042b0:
    // 0x1042b0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1042b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1042b4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1042b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1042b8: 0x8c483c0c  lw          $t0, 0x3C0C($v0)
    ctx->pc = 0x1042b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15372)));
    // 0x1042bc: 0x8c673c18  lw          $a3, 0x3C18($v1)
    ctx->pc = 0x1042bcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383C18u));
    // 0x1042c0: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x1042c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
    // 0x1042c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1042c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1042c8: 0x8ca33c1c  lw          $v1, 0x3C1C($a1)
    ctx->pc = 0x1042c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C1Cu));
    // 0x1042cc: 0x8c863c10  lw          $a2, 0x3C10($a0)
    ctx->pc = 0x1042ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383C10u));
    // 0x1042d0: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x1042d0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1042d4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1042d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1042d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1042d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1042dc: 0x8ca23d7c  lw          $v0, 0x3D7C($a1)
    ctx->pc = 0x1042dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1042e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1042e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042e4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1042e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x1042e8: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x1042e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
    // 0x1042ec: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1042ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1042f0: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1042F0u;
    {
        const bool branch_taken_0x1042f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1042F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042F0u;
        // 0x1042f4: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1042f0) {
            ctx->pc = 0x104314u;
            goto label_104314;
        }
    }
    ctx->pc = 0x1042F8u;
    // 0x1042f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1042f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1042fc: 0x8c433d1c  lw          $v1, 0x3D1C($v0)
    ctx->pc = 0x1042fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x104300: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x104300u;
    {
        const bool branch_taken_0x104300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104300u;
        // 0x104304: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104300) {
            ctx->pc = 0x104318u;
            goto label_104318;
        }
    }
    ctx->pc = 0x104308u;
    // 0x104308: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x104308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10430c: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x10430cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x104310: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x104310u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_104314:
    // 0x104314: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x104314u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104318:
    // 0x104318: 0x527e0004  beql        $s3, $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x104318u;
    {
        const bool branch_taken_0x104318 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 30));
        if (branch_taken_0x104318) {
            ctx->pc = 0x10431Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104318u;
            // 0x10431c: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10432Cu;
            goto label_10432c;
        }
    }
    ctx->pc = 0x104320u;
    // 0x104320: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x104320u;
    {
        const bool branch_taken_0x104320 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x104324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104320u;
        // 0x104324: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104320) {
            ctx->pc = 0x104360u;
            goto label_104360;
        }
    }
    ctx->pc = 0x104328u;
    // 0x104328: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x104328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_10432c:
    // 0x10432c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x10432cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x104330: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x104330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104338: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x104338u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10433c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10433cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x104340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104344: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104348: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x104348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10434c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x10434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x104350: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x104350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x104354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104358: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104358u;
        // 0x10435c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104358) {
            ctx->pc = 0x1044C4u;
            goto label_1044c4;
        }
    }
    ctx->pc = 0x104360u;
label_104360:
    // 0x104360: 0x16620031  bne         $s3, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x104360u;
    {
        const bool branch_taken_0x104360 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x104364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104360u;
        // 0x104364: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104360) {
            ctx->pc = 0x104428u;
            goto label_104428;
        }
    }
    ctx->pc = 0x104368u;
    // 0x104368: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x104368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10436c: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x10436cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x104370: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x104370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104374: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104378: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x104378u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10437c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10437cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x104384: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104388: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10438c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104398: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10439c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10439cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1043a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1043a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1043a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1043a8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1043a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043ac: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1043ACu;
    SET_GPR_U32(ctx, 31, 0x1043B4u);
    ctx->pc = 0x1043B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043ACu;
    // 0x1043b0: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1043ACu, 0x1043B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043B4u;
label_1043b4:
    // 0x1043b4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1043b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1043b8: 0x8cc23d7c  lw          $v0, 0x3D7C($a2)
    ctx->pc = 0x1043b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1043bc: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1043BCu;
    {
        const bool branch_taken_0x1043bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043BCu;
        // 0x1043c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043bc) {
            ctx->pc = 0x1043E4u;
            goto label_1043e4;
        }
    }
    ctx->pc = 0x1043C4u;
    // 0x1043c4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1043c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1043c8: 0x8c433d1c  lw          $v1, 0x3D1C($v0)
    ctx->pc = 0x1043c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x1043cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1043CCu;
    {
        const bool branch_taken_0x1043cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043CCu;
        // 0x1043d0: 0x8ec30008  lw          $v1, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043cc) {
            ctx->pc = 0x1043E8u;
            goto label_1043e8;
        }
    }
    ctx->pc = 0x1043D4u;
    // 0x1043d4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x1043d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043d8: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x1043d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x1043dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1043DCu;
    {
        const bool branch_taken_0x1043dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043DCu;
        // 0x1043e0: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043dc) {
            ctx->pc = 0x1043E8u;
            goto label_1043e8;
        }
    }
    ctx->pc = 0x1043E4u;
label_1043e4:
    // 0x1043e4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x1043e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1043e8:
    // 0x1043e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1043ec: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x1043ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1043f0: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1043f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1043f4: 0x8e2b0010  lw          $t3, 0x10($s1)
    ctx->pc = 0x1043f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1043f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1043f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1043fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1043fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104400: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104404: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x104404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104408: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10440c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x10440cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104410: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x104410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x104414: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10441c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10441cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104420: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x104420u;
    {
        const bool branch_taken_0x104420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104420u;
        // 0x104424: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104420) {
            ctx->pc = 0x1044D0u;
            goto label_1044d0;
        }
    }
    ctx->pc = 0x104428u;
label_104428:
    // 0x104428: 0x1662002d  bne         $s3, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x104428u;
    {
        const bool branch_taken_0x104428 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x10442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104428u;
        // 0x10442c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104428) {
            ctx->pc = 0x1044E0u;
            goto label_1044e0;
        }
    }
    ctx->pc = 0x104430u;
    // 0x104430: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104434: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x104434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104438: 0x8c433d1c  lw          $v1, 0x3D1C($v0)
    ctx->pc = 0x104438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x10443c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x10443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104440: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x104440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104444: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x104444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x104448: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x104448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10444c: 0xc041730  jal         func_105CC0
    ctx->pc = 0x10444Cu;
    SET_GPR_U32(ctx, 31, 0x104454u);
    ctx->pc = 0x104450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10444Cu;
    // 0x104450: 0x3900a  movz        $s2, $zero, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CC0u, 0x10444Cu, 0x104454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104454u;
label_104454:
    // 0x104454: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104458: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x104458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x10445c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104460: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x104460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x104464: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10446c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x10446cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104474: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x104474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x104478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10447c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10447cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104480: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x104480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104484: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x104484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104488: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10448c: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x10448Cu;
    SET_GPR_U32(ctx, 31, 0x104494u);
    ctx->pc = 0x104490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10448Cu;
    // 0x104490: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x10448Cu, 0x104494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104494u;
label_104494:
    // 0x104494: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x104494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x104498: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10449c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x10449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1044a0: 0xafbe0010  sw          $fp, 0x10($sp)
    ctx->pc = 0x1044a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 30));
    // 0x1044a4: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x1044a4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1044a8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1044a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1044ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1044acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1044b0: 0x8fab0020  lw          $t3, 0x20($sp)
    ctx->pc = 0x1044b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1044b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1044b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1044b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1044b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1044bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1044c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1044c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1044c4:
    // 0x1044c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1044c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044c8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1044c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1044cc:
    // 0x1044cc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1044ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1044d0:
    // 0x1044d0: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1044D0u;
    SET_GPR_U32(ctx, 31, 0x1044D8u);
    ctx->pc = 0x1044D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044D0u;
    // 0x1044d4: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1044D0u, 0x1044D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044D8u;
label_1044d8:
    // 0x1044d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1044D8u;
    {
        const bool branch_taken_0x1044d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044D8u;
        // 0x1044dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044d8) {
            ctx->pc = 0x1044F0u;
            goto label_1044f0;
        }
    }
    ctx->pc = 0x1044E0u;
label_1044e0:
    // 0x1044e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1044e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044e4: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1044E4u;
    SET_GPR_U32(ctx, 31, 0x1044ECu);
    ctx->pc = 0x1044E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044E4u;
    // 0x1044e8: 0x2484c608  addiu       $a0, $a0, -0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1044E4u, 0x1044ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044ECu;
label_1044ec:
    // 0x1044ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1044ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1044f0:
    // 0x1044f0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1044f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1044f4:
    // 0x1044f4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1044f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1044f8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1044F8u;
    {
        const bool branch_taken_0x1044f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044F8u;
        // 0x1044fc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044f8) {
            ctx->pc = 0x1046C8u;
            goto label_1046c8;
        }
    }
    ctx->pc = 0x104500u;
    // 0x104500: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x104500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104504: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x104504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15788)));
    // 0x104508: 0x1464002b  bne         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x104508u;
    {
        const bool branch_taken_0x104508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104508u;
        // 0x10450c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104508) {
            ctx->pc = 0x1045B8u;
            goto label_1045b8;
        }
    }
    ctx->pc = 0x104510u;
    // 0x104510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104514: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104514u;
    {
        const bool branch_taken_0x104514 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x104518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104514u;
        // 0x104518: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104514) {
            ctx->pc = 0x10453Cu;
            goto label_10453c;
        }
    }
    ctx->pc = 0x10451Cu;
    // 0x10451c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x10451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x104520: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104524: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x104524u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104528: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10452c: 0x8c443c04  lw          $a0, 0x3C04($v0)
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C04u));
    // 0x104530: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104530u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104534: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x104534u;
    {
        const bool branch_taken_0x104534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104534u;
        // 0x104538: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104534) {
            ctx->pc = 0x1045F0u;
            goto label_1045f0;
        }
    }
    ctx->pc = 0x10453Cu;
label_10453c:
    // 0x10453c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x10453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x104540: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x104540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x104544: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x104548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10454c: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x10454cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104550: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x104550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104554: 0x8e043c04  lw          $a0, 0x3C04($s0)
    ctx->pc = 0x104554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15364)));
    // 0x104558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10455c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104560: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104564: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x104564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x104568: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10456c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x10456cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x104570: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104570u;
    SET_GPR_U32(ctx, 31, 0x104578u);
    ctx->pc = 0x104574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104570u;
    // 0x104574: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104570u, 0x104578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104578u;
label_104578:
    // 0x104578: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10457c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10457cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104580: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x104580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x104584: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104588: 0x8e2b0018  lw          $t3, 0x18($s1)
    ctx->pc = 0x104588u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10458c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x104590: 0x8e043c04  lw          $a0, 0x3C04($s0)
    ctx->pc = 0x104590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15364)));
    // 0x104594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x104594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104598: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10459c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10459cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045a0: 0xafb70008  sw          $s7, 0x8($sp)
    ctx->pc = 0x1045a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x1045a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1045a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1045a8: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1045A8u;
    SET_GPR_U32(ctx, 31, 0x1045B0u);
    ctx->pc = 0x1045ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045A8u;
    // 0x1045ac: 0xafb20010  sw          $s2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1045A8u, 0x1045B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045B0u;
label_1045b0:
    // 0x1045b0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1045B0u;
    {
        const bool branch_taken_0x1045b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B0u;
        // 0x1045b4: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045b0) {
            ctx->pc = 0x1046CCu;
            goto label_1046cc;
        }
    }
    ctx->pc = 0x1045B8u;
label_1045b8:
    // 0x1045b8: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1045B8u;
    {
        const bool branch_taken_0x1045b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1045BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B8u;
        // 0x1045bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045b8) {
            ctx->pc = 0x104614u;
            goto label_104614;
        }
    }
    ctx->pc = 0x1045C0u;
    // 0x1045c0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1045c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1045C4u;
    {
        const bool branch_taken_0x1045c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045C4u;
        // 0x1045c8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045c4) {
            ctx->pc = 0x1045D4u;
            goto label_1045d4;
        }
    }
    ctx->pc = 0x1045CCu;
    // 0x1045cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1045CCu;
    {
        const bool branch_taken_0x1045cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045CCu;
        // 0x1045d0: 0x8c443c1c  lw          $a0, 0x3C1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045cc) {
            ctx->pc = 0x1045DCu;
            goto label_1045dc;
        }
    }
    ctx->pc = 0x1045D4u;
label_1045d4:
    // 0x1045d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1045d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1045d8: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x1045d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C10u));
label_1045dc:
    // 0x1045dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1045e0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1045e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045e4: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x1045e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1045e8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1045e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1045ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1045f0:
    // 0x1045f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1045f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045f4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1045f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1045f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1045f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1045fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104604: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104604u;
    SET_GPR_U32(ctx, 31, 0x10460Cu);
    ctx->pc = 0x104608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104604u;
    // 0x104608: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104604u, 0x10460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10460Cu;
label_10460c:
    // 0x10460c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10460Cu;
    {
        const bool branch_taken_0x10460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10460Cu;
        // 0x104610: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10460c) {
            ctx->pc = 0x1046CCu;
            goto label_1046cc;
        }
    }
    ctx->pc = 0x104614u;
label_104614:
    // 0x104614: 0x16620029  bne         $s3, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x104614u;
    {
        const bool branch_taken_0x104614 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x104618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104614u;
        // 0x104618: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104614) {
            ctx->pc = 0x1046BCu;
            goto label_1046bc;
        }
    }
    ctx->pc = 0x10461Cu;
    // 0x10461c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x10461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x104620: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104620u;
    {
        const bool branch_taken_0x104620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104620u;
        // 0x104624: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104620) {
            ctx->pc = 0x104630u;
            goto label_104630;
        }
    }
    ctx->pc = 0x104628u;
    // 0x104628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104628u;
    {
        const bool branch_taken_0x104628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104628u;
        // 0x10462c: 0x8c443c1c  lw          $a0, 0x3C1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104628) {
            ctx->pc = 0x104638u;
            goto label_104638;
        }
    }
    ctx->pc = 0x104630u;
label_104630:
    // 0x104630: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104634: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x104634u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C10u));
label_104638:
    // 0x104638: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x10463c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104640: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x104640u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x104644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104648: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10464c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10464cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104650: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104654: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x104654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104658: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x104658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x10465c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x10465cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104660: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104660u;
    SET_GPR_U32(ctx, 31, 0x104668u);
    ctx->pc = 0x104664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104660u;
    // 0x104664: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104660u, 0x104668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104668u;
label_104668:
    // 0x104668: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10466c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10466Cu;
    {
        const bool branch_taken_0x10466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10466Cu;
        // 0x104670: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10466c) {
            ctx->pc = 0x10467Cu;
            goto label_10467c;
        }
    }
    ctx->pc = 0x104674u;
    // 0x104674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x104674u;
    {
        const bool branch_taken_0x104674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104674u;
        // 0x104678: 0x8c443c1c  lw          $a0, 0x3C1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104674) {
            ctx->pc = 0x104684u;
            goto label_104684;
        }
    }
    ctx->pc = 0x10467Cu;
label_10467c:
    // 0x10467c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104680: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x104680u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C10u));
label_104684:
    // 0x104684: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x104684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x104688: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x104688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10468c: 0x8e2b0018  lw          $t3, 0x18($s1)
    ctx->pc = 0x10468cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x104690: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x104690u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104694: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x104694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x104698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10469c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x10469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1046a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1046a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1046a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1046a8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1046a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1046ac: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x1046ACu;
    SET_GPR_U32(ctx, 31, 0x1046B4u);
    ctx->pc = 0x1046B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046ACu;
    // 0x1046b0: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x1046ACu, 0x1046B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046B4u;
label_1046b4:
    // 0x1046b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1046B4u;
    {
        const bool branch_taken_0x1046b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046B4u;
        // 0x1046b8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046b4) {
            ctx->pc = 0x1046CCu;
            goto label_1046cc;
        }
    }
    ctx->pc = 0x1046BCu;
label_1046bc:
    // 0x1046bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1046bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046c0: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1046C0u;
    SET_GPR_U32(ctx, 31, 0x1046C8u);
    ctx->pc = 0x1046C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1046C0u;
    // 0x1046c4: 0x2484c628  addiu       $a0, $a0, -0x39D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1046C0u, 0x1046C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1046C8u;
label_1046c8:
    // 0x1046c8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1046c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1046cc:
    // 0x1046cc: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1046ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1046d0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1046d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1046d4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1046d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1046d8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1046d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1046dc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1046dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1046e0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1046e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1046e4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1046e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1046e8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1046e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1046ec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1046ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1046f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1046F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1046F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046F0u;
        // 0x1046f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1046F8u;
}
