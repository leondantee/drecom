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

// Function: _getPtsDtsFlags
// Address: 0x108620 - 0x1087b4
void _getPtsDtsFlags_0x108620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getPtsDtsFlags_0x108620");
#endif

    switch (ctx->pc) {
        case 0x1086a8u: goto label_1086a8;
        case 0x1086b8u: goto label_1086b8;
        case 0x1086ccu: goto label_1086cc;
        case 0x1086f0u: goto label_1086f0;
        default: break;
    }

    ctx->pc = 0x108620u;

    // 0x108620: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x108620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x108624: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108628: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x108628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10862c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x108630: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x108630u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108634: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x108634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x108638: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x108638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10863c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x108640: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x108640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x108644: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x108644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x108648: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x108648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10864c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x108650: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x108650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x108654: 0x8c433bf4  lw          $v1, 0x3BF4($v0)
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383BF4u));
    // 0x108658: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x108658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x10865c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x108660: 0x8c730040  lw          $s3, 0x40($v1)
    ctx->pc = 0x108660u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x108664: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x108668: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x108668u;
    {
        const bool branch_taken_0x108668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108668u;
        // 0x10866c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108668) {
            ctx->pc = 0x108700u;
            goto label_108700;
        }
    }
    ctx->pc = 0x108670u;
    // 0x108670: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x108670u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x108674: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x108674u;
    {
        const bool branch_taken_0x108674 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x108674) {
            ctx->pc = 0x108678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108674u;
            // 0x108678: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108708u;
            goto label_108708;
        }
    }
    ctx->pc = 0x10867Cu;
    // 0x10867c: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x10867cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x108680: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x108680u;
    {
        const bool branch_taken_0x108680 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x108680) {
            ctx->pc = 0x108684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108680u;
            // 0x108684: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108708u;
            goto label_108708;
        }
    }
    ctx->pc = 0x108688u;
    // 0x108688: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x108688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x10868c: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x10868cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x108690: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x108690u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x108694: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x108694u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x108698: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x108698u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10869c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x10869cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1086a0: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x1086A0u;
    SET_GPR_U32(ctx, 31, 0x1086A8u);
    ctx->pc = 0x1086A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086A0u;
    // 0x1086a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x1086A0u, 0x1086A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086A8u;
label_1086a8:
    // 0x1086a8: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1086ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1086acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086b0: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x1086B0u;
    SET_GPR_U32(ctx, 31, 0x1086B8u);
    ctx->pc = 0x1086B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086B0u;
    // 0x1086b4: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x1086B0u, 0x1086B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086B8u;
label_1086b8:
    // 0x1086b8: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x1086b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1086bc: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1086bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1086c0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1086c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1086c4: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x1086C4u;
    SET_GPR_U32(ctx, 31, 0x1086CCu);
    ctx->pc = 0x1086C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086C4u;
    // 0x1086c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x1086C4u, 0x1086CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086CCu;
label_1086cc:
    // 0x1086cc: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x1086ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x1086d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1086d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1086d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1086d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1086d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1086dc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1086e0: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1086e0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1086e4: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1086e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1086e8: 0xc0476e0  jal         func_11DB80
    ctx->pc = 0x1086E8u;
    SET_GPR_U32(ctx, 31, 0x1086F0u);
    ctx->pc = 0x1086ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086E8u;
    // 0x1086ec: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB80u, 0x1086E8u, 0x1086F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086F0u;
label_1086f0:
    // 0x1086f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1086F0u;
    {
        const bool branch_taken_0x1086f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086F0u;
        // 0x1086f4: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086f0) {
            ctx->pc = 0x108708u;
            goto label_108708;
        }
    }
    ctx->pc = 0x1086F8u;
    // 0x1086f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1086F8u;
    {
        const bool branch_taken_0x1086f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086F8u;
        // 0x1086fc: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086f8) {
            ctx->pc = 0x108708u;
            goto label_108708;
        }
    }
    ctx->pc = 0x108700u;
label_108700:
    // 0x108700: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x108700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x108704: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x108704u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_108708:
    // 0x108708: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x10870c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108710: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108710u;
    {
        const bool branch_taken_0x108710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x108710) {
            ctx->pc = 0x108714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108710u;
            // 0x108714: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108738u;
            goto label_108738;
        }
    }
    ctx->pc = 0x108718u;
    // 0x108718: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x108718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x10871c: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10871Cu;
    {
        const bool branch_taken_0x10871c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10871c) {
            ctx->pc = 0x108720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10871Cu;
            // 0x108720: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108738u;
            goto label_108738;
        }
    }
    ctx->pc = 0x108724u;
    // 0x108724: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x108724u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x108728: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x108728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10872c: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x10872cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x108730: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x108730u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x108734: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x108734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_108738:
    // 0x108738: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x108738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x10873c: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x10873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x108740: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x108740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x108744: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x108744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x108748: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x108748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x10874c: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x10874cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x108750: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x108750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x108754: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x108754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x108758: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x108758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10875c: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x10875cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x108760: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x108760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x108764: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x108764u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x108768: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x108768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x10876c: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x10876cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x108770: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x108770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x108774: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x108774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x108778: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x108778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10877c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x108780: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x108780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x108784: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x108784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108788: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x108788u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10878c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10878cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108790: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x108790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108794: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x108794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108798: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x108798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10879c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10879cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1087a0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1087a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1087a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1087a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1087a8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1087a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1087ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1087ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087ACu;
        // 0x1087b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087B4u;
}
