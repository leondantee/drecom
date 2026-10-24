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

// Function: entry_00108194
// Address: 0x108194 - 0x1081e4
void entry_00108194_0x108194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108194_0x108194");
#endif

    ctx->pc = 0x108194u;

    // 0x108194: 0x8d823c04  lw          $v0, 0x3C04($t4)
    ctx->pc = 0x108194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15364)));
    // 0x108198: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x108198u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10819c: 0x8d653c10  lw          $a1, 0x3C10($t3)
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 15376)));
    // 0x1081a0: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1081a4: 0x8d243c1c  lw          $a0, 0x3C1C($t1)
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15388)));
    // 0x1081a8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1081a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1081ac: 0xae823e44  sw          $v0, 0x3E44($s4)
    ctx->pc = 0x1081acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383E44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383E44u, _value); } while (0);
    // 0x1081b0: 0xad853e48  sw          $a1, 0x3E48($t4)
    ctx->pc = 0x1081b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x383E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383E48u, _value); } while (0);
    // 0x1081b4: 0x15f0000b  bne         $t7, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1081B4u;
    {
        const bool branch_taken_0x1081b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x1081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081B4u;
        // 0x1081b8: 0xad043e4c  sw          $a0, 0x3E4C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 15948), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081b4) {
            ctx->pc = 0x1081E4u;
            return;
        }
    }
    ctx->pc = 0x1081BCu;
    // 0x1081bc: 0x55b1001e  bnel        $t5, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1081BCu;
    {
        const bool branch_taken_0x1081bc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 17));
        if (branch_taken_0x1081bc) {
            ctx->pc = 0x1081C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1081BCu;
            // 0x1081c0: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108238u;
            return;
        }
    }
    ctx->pc = 0x1081C4u;
    // 0x1081c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1081c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1081c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1081c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081cc: 0x8c823c00  lw          $v0, 0x3C00($a0)
    ctx->pc = 0x1081ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C00u));
    // 0x1081d0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1081d4: 0x14650019  bne         $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x1081DCu;
    // 0x1081dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1081DCu;
    {
        const bool branch_taken_0x1081dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081DCu;
        // 0x1081e0: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081dc) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x1081E4u;
}
