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

// Function: entry_001042b0
// Address: 0x1042b0 - 0x104314
void entry_001042b0_0x1042b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001042b0_0x1042b0");
#endif

    ctx->pc = 0x1042b0u;

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
            return;
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
            return;
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
    ctx->pc = 0x104314u;
}
