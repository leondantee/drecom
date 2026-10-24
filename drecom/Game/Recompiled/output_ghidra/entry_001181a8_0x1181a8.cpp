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

// Function: entry_001181a8
// Address: 0x1181a8 - 0x118208
void entry_001181a8_0x1181a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001181a8_0x1181a8");
#endif

    switch (ctx->pc) {
        case 0x1181b0u: goto label_1181b0;
        default: break;
    }

    ctx->pc = 0x1181a8u;

    // 0x1181a8: 0xc046344  jal         func_118D10
    ctx->pc = 0x1181A8u;
    SET_GPR_U32(ctx, 31, 0x1181B0u);
    ctx->pc = 0x1181ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1181A8u;
    // 0x1181ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D10u;
    {
        ctx->pc = 0x1181B0u;
        ps2_stubs::__malloc_lock(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1181B0u) { return; }
    ctx->pc = 0x1181B0u;
label_1181b0:
    // 0x1181b0: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x1181b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x1181b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1181B4u;
    {
        const bool branch_taken_0x1181b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181B4u;
        // 0x1181b8: 0x3c140038  lui         $s4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181b4) {
            ctx->pc = 0x118210u;
            return;
        }
    }
    ctx->pc = 0x1181BCu;
    // 0x1181bc: 0x26824928  addiu       $v0, $s4, 0x4928
    ctx->pc = 0x1181bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
    // 0x1181c0: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1181c4: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x1181c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1181c8: 0x1209000f  beq         $s0, $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1181C8u;
    {
        const bool branch_taken_0x1181c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x1181CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181C8u;
        // 0x1181cc: 0x1158c2  srl         $t3, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181c8) {
            ctx->pc = 0x118208u;
            return;
        }
    }
    ctx->pc = 0x1181D0u;
    // 0x1181d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1181d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1181d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1181d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1181d8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1181d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1181dc: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x1181dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1181e0: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x1181e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1181e4: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1181e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1181e8: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x1181e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1181ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1181ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1181f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1181f4: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x1181f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
    // 0x1181f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1181f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1181fc: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x1181fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x118200: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x118200u;
    {
        const bool branch_taken_0x118200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118200u;
        // 0x118204: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118200) {
            ctx->pc = 0x1188B4u;
            return;
        }
    }
    ctx->pc = 0x118208u;
}
