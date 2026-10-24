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

// Function: _dispRefImageField
// Address: 0x1088d0 - 0x108a90
void _dispRefImageField_0x1088d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImageField_0x1088d0");
#endif

    switch (ctx->pc) {
        case 0x108954u: goto label_108954;
        case 0x108978u: goto label_108978;
        case 0x1089dcu: goto label_1089dc;
        case 0x108a1cu: goto label_108a1c;
        case 0x108a2cu: goto label_108a2c;
        default: break;
    }

    ctx->pc = 0x1088d0u;

    // 0x1088d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1088d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1088d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1088d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1088dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1088dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1088e0: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1088e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1088e4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1088e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1088e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1088e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088ec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1088ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1088f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1088f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1088f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1088f8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1088f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1088fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108900: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108908: 0x8ea33bf4  lw          $v1, 0x3BF4($s5)
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383BF4u));
    // 0x10890c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108910: 0x8c443dac  lw          $a0, 0x3DAC($v0)
    ctx->pc = 0x108910u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DACu));
    // 0x108914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108918: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108918u;
    {
        const bool branch_taken_0x108918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108918u;
        // 0x10891c: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108918) {
            ctx->pc = 0x108930u;
            goto label_108930;
        }
    }
    ctx->pc = 0x108920u;
    // 0x108920: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x108920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108924: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x108924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108928u;
    {
        const bool branch_taken_0x108928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108928u;
        // 0x10892c: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108928) {
            ctx->pc = 0x108938u;
            goto label_108938;
        }
    }
    ctx->pc = 0x108930u;
label_108930:
    // 0x108930: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x108930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108934: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x108934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_108938:
    // 0x108938: 0x8ea63bf4  lw          $a2, 0x3BF4($s5)
    ctx->pc = 0x108938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15348)));
    // 0x10893c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108940: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x108940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108944: 0x24c70020  addiu       $a3, $a2, 0x20
    ctx->pc = 0x108944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x108948: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x108948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x10894c: 0xc042188  jal         func_108620
    ctx->pc = 0x10894Cu;
    SET_GPR_U32(ctx, 31, 0x108954u);
    ctx->pc = 0x108950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10894Cu;
    // 0x108950: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108620u, 0x10894Cu, 0x108954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108954u;
label_108954:
    // 0x108954: 0x8ea63bf4  lw          $a2, 0x3BF4($s5)
    ctx->pc = 0x108954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15348)));
    // 0x108958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10895c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x10895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x108960: 0x24c70038  addiu       $a3, $a2, 0x38
    ctx->pc = 0x108960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x108964: 0x24c50028  addiu       $a1, $a2, 0x28
    ctx->pc = 0x108964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x108968: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x108968u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x10896c: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x10896cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x108970: 0xc042188  jal         func_108620
    ctx->pc = 0x108970u;
    SET_GPR_U32(ctx, 31, 0x108978u);
    ctx->pc = 0x108974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108970u;
    // 0x108974: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108620u, 0x108970u, 0x108978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108978u;
label_108978:
    // 0x108978: 0x8ea63bf4  lw          $a2, 0x3BF4($s5)
    ctx->pc = 0x108978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 15348)));
    // 0x10897c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x10897cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x108980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108984: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x108984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x108988: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x108988u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x10898c: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x10898cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x108990: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x108990u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x108994: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x108994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x108998: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x108998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10899c: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x10899cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1089a0: 0xae2500cc  sw          $a1, 0xCC($s1)
    ctx->pc = 0x1089a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 5));
    // 0x1089a4: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1089a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x1089a8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1089a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1089ac: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x1089acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1089b0: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x1089b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x1089b4: 0xae2500d0  sw          $a1, 0xD0($s1)
    ctx->pc = 0x1089b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x1089b8: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1089b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1089bc: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1089bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x1089c0: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1089c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1089c4: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x1089c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1089c8: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1089cc: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1089ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x1089d0: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x1089d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1089d4: 0xc0420d6  jal         func_108358
    ctx->pc = 0x1089D4u;
    SET_GPR_U32(ctx, 31, 0x1089DCu);
    ctx->pc = 0x1089D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089D4u;
    // 0x1089d8: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108358u, 0x1089D4u, 0x1089DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1089DCu;
label_1089dc:
    // 0x1089dc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1089DCu;
    {
        const bool branch_taken_0x1089dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089DCu;
        // 0x1089e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089dc) {
            ctx->pc = 0x108A64u;
            goto label_108a64;
        }
    }
    ctx->pc = 0x1089E4u;
    // 0x1089e4: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1089e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1089e8: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1089E8u;
    {
        const bool branch_taken_0x1089e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1089ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089E8u;
        // 0x1089ec: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089e8) {
            ctx->pc = 0x108A68u;
            goto label_108a68;
        }
    }
    ctx->pc = 0x1089F0u;
    // 0x1089f0: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x1089f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1089f4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1089F4u;
    {
        const bool branch_taken_0x1089f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1089F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089F4u;
        // 0x1089f8: 0xdfb70070  ld          $s7, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089f4) {
            ctx->pc = 0x108A6Cu;
            goto label_108a6c;
        }
    }
    ctx->pc = 0x1089FCu;
    // 0x1089fc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x108a00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x108a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x108a04: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x108a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x108a08: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x108a0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x108A0Cu;
    {
        const bool branch_taken_0x108a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x108a0c) {
            ctx->pc = 0x108A24u;
            goto label_108a24;
        }
    }
    ctx->pc = 0x108A14u;
    // 0x108a14: 0xc042378  jal         func_108DE0
    ctx->pc = 0x108A14u;
    SET_GPR_U32(ctx, 31, 0x108A1Cu);
    ctx->pc = 0x108A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A14u;
    // 0x108a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DE0u, 0x108A14u, 0x108A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A1Cu;
label_108a1c:
    // 0x108a1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108A1Cu;
    {
        const bool branch_taken_0x108a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A1Cu;
        // 0x108a20: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a1c) {
            ctx->pc = 0x108A30u;
            goto label_108a30;
        }
    }
    ctx->pc = 0x108A24u;
label_108a24:
    // 0x108a24: 0xc0420fe  jal         func_1083F8
    ctx->pc = 0x108A24u;
    SET_GPR_U32(ctx, 31, 0x108A2Cu);
    ctx->pc = 0x108A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A24u;
    // 0x108a28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083F8u, 0x108A24u, 0x108A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A2Cu;
label_108a2c:
    // 0x108a2c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x108a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_108a30:
    // 0x108a30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x108a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x108a34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x108a34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x108a38: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108a38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x108a3c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x108a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x108a40: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108a40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108a44: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108a44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108a48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108a4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108a50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108a54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108a54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a5c: 0x804217a  j           func_1085E8
    ctx->pc = 0x108A5Cu;
    ctx->pc = 0x108A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A5Cu;
    // 0x108a60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085E8u;
    _markOutput_0x1085e8(rdram, ctx, runtime); return;
    ctx->pc = 0x108A64u;
label_108a64:
    // 0x108a64: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x108a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_108a68:
    // 0x108a68: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108a68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_108a6c:
    // 0x108a6c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x108a6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108a70: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108a70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108a74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108a78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108a78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108a7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108a80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a88: 0x3e00008  jr          $ra
    ctx->pc = 0x108A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A88u;
        // 0x108a8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A90u;
}
