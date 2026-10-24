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

// Function: entry_00216a48
// Address: 0x216a48 - 0x216a98
void entry_00216a48_0x216a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216a48_0x216a48");
#endif

    ctx->pc = 0x216a48u;

    // 0x216a48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x216a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216a4c: 0x2493ca80  addiu       $s3, $a0, -0x3580
    ctx->pc = 0x216a4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
    // 0x216a50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x216a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x216a54: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x216a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x216a58: 0x2451c8c0  addiu       $s1, $v0, -0x3740
    ctx->pc = 0x216a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x216a5c: 0xac91ca80  sw          $s1, -0x3580($a0)
    ctx->pc = 0x216a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953600), GPR_U32(ctx, 17));
    // 0x216a60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216a64: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x216a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
    // 0x216a68: 0xaec2bc40  sw          $v0, -0x43C0($s6)
    ctx->pc = 0x216a68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294949952), GPR_U32(ctx, 2));
    // 0x216a6c: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x216a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x216a70: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x216a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
    // 0x216a74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x216a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216a78: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x216a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x216a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216A7Cu;
    {
        const bool branch_taken_0x216a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A7Cu;
        // 0x216a80: 0x3c162000  lui         $s6, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a7c) {
            ctx->pc = 0x216A98u;
            return;
        }
    }
    ctx->pc = 0x216A84u;
    // 0x216a84: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x216a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x216a88: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216a8c: 0x8c62aaec  lw          $v0, -0x5514($v1)
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AAECu));
    // 0x216a90: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x216a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x216a94: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x216a98u;
}
