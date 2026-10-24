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

// Function: entry_001183c0
// Address: 0x1183c0 - 0x118424
void entry_001183c0_0x1183c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001183c0_0x1183c0");
#endif

    ctx->pc = 0x1183c0u;

    // 0x1183c0: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x1183c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1183c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1183C4u;
    {
        const bool branch_taken_0x1183c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1183C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1183C4u;
        // 0x1183c8: 0x830c2  srl         $a2, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1183c4) {
            ctx->pc = 0x118424u;
            return;
        }
    }
    ctx->pc = 0x1183CCu;
    // 0x1183cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1183ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1183d0: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1183d4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1183d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1183d8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1183d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1183dc: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1183dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1183e0: 0x855021  addu        $t2, $a0, $a1
    ctx->pc = 0x1183e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1183e4: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1183e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1183e8: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x1183e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1183ec: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1183ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1183f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1183f4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1183f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1183f8: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x1183f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1183fc: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x1183fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x118400: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x118400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x118404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118408: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x118408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11840c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x11840cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x118410: 0xad500008  sw          $s0, 0x8($t2)
    ctx->pc = 0x118410u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x118414: 0xad30000c  sw          $s0, 0xC($t1)
    ctx->pc = 0x118414u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
    // 0x118418: 0x25660003  addiu       $a2, $t3, 0x3
    ctx->pc = 0x118418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x11841c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x11841Cu;
    {
        const bool branch_taken_0x11841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11841Cu;
        // 0x118420: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11841c) {
            ctx->pc = 0x118540u;
            return;
        }
    }
    ctx->pc = 0x118424u;
}
