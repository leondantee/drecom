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

// Function: entry_00108938
// Address: 0x108938 - 0x108a24
void entry_00108938_0x108938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108938_0x108938");
#endif

    switch (ctx->pc) {
        case 0x108954u: goto label_108954;
        case 0x108978u: goto label_108978;
        case 0x1089dcu: goto label_1089dc;
        case 0x108a1cu: goto label_108a1c;
        default: break;
    }

    ctx->pc = 0x108938u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x108A24u;
}
