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

// Function: entry_00117480
// Address: 0x117480 - 0x1174f0
void entry_00117480_0x117480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117480_0x117480");
#endif

    ctx->pc = 0x117480u;

    // 0x117480: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x117480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x117484: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x117484u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x117488: 0x1480005d  bnez        $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x117488u;
    {
        const bool branch_taken_0x117488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117488u;
        // 0x11748c: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117488) {
            ctx->pc = 0x117600u;
            return;
        }
    }
    ctx->pc = 0x117490u;
    // 0x117490: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x117490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x117494: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x117494u;
    {
        const bool branch_taken_0x117494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117494u;
        // 0x117498: 0x930c2  srl         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117494) {
            ctx->pc = 0x1174F0u;
            return;
        }
    }
    ctx->pc = 0x11749Cu;
    // 0x11749c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1174a0: 0x25a54928  addiu       $a1, $t5, 0x4928
    ctx->pc = 0x1174a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 18728));
    // 0x1174a4: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1174a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1174a8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1174a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1174ac: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1174b0: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x1174b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1174b4: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1174b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1174b8: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1174b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1174bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1174c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1174c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1174c4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1174c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1174c8: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x1174c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1174cc: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1174ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1174d0: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x1174d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x1174d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1174d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1174d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1174d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1174dc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1174dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1174e0: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1174e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x1174e4: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1174e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x1174e8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1174E8u;
    {
        const bool branch_taken_0x1174e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174E8u;
        // 0x1174ec: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174e8) {
            ctx->pc = 0x117600u;
            return;
        }
    }
    ctx->pc = 0x1174F0u;
}
