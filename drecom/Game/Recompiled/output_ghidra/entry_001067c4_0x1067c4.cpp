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

// Function: entry_001067c4
// Address: 0x1067c4 - 0x106878
void entry_001067c4_0x1067c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001067c4_0x1067c4");
#endif

    switch (ctx->pc) {
        case 0x10682cu: goto label_10682c;
        case 0x106870u: goto label_106870;
        default: break;
    }

    ctx->pc = 0x1067c4u;

    // 0x1067c4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1067C4u;
    {
        const bool branch_taken_0x1067c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067C4u;
        // 0x1067c8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067c4) {
            ctx->pc = 0x106878u;
            return;
        }
    }
    ctx->pc = 0x1067CCu;
    // 0x1067cc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1067d0: 0x244241f8  addiu       $v0, $v0, 0x41F8
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16888));
    // 0x1067d4: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x1067d8: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x1067d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1067dc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1067dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1067e0: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1067e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x1067e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1067e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1067e8: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x1067e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1067ec: 0x34c6b010  ori         $a2, $a2, 0xB010
    ctx->pc = 0x1067ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45072);
    // 0x1067f0: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x1067f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1067f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1067f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1067f8: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1067f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x1067fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1067fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106800: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x106800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x106804: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x106804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x106808: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x106808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10680c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10680cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x106810: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x106810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x106814: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x106814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x106818: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x106818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x10681c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10681cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x106820: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x106820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x106824: 0xc041b46  jal         func_106D18
    ctx->pc = 0x106824u;
    SET_GPR_U32(ctx, 31, 0x10682Cu);
    ctx->pc = 0x106828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106824u;
    // 0x106828: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x106824u, 0x10682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10682Cu;
label_10682c:
    // 0x10682c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106830: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106834: 0x8c453e40  lw          $a1, 0x3E40($v0)
    ctx->pc = 0x106834u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383E40u));
    // 0x106838: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x106838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x10683c: 0x8e033e3c  lw          $v1, 0x3E3C($s0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15932)));
    // 0x106840: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x106840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x106844: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106848: 0x426c0  sll         $a0, $a0, 27
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 27));
    // 0x10684c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x10684cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x106850: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x106854: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x106854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x106858: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x106858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10685c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x10685cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x106860: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x106860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x106864: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x106864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x106868: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x106868u;
    SET_GPR_U32(ctx, 31, 0x106870u);
    ctx->pc = 0x10686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106868u;
    // 0x10686c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x106868u, 0x106870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106870u;
label_106870:
    // 0x106870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106870u;
    {
        const bool branch_taken_0x106870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106870u;
        // 0x106874: 0x8fc23d08  lw          $v0, 0x3D08($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 15624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106870) {
            ctx->pc = 0x1068A0u;
            return;
        }
    }
    ctx->pc = 0x106878u;
}
