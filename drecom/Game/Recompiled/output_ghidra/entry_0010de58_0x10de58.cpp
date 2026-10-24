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

// Function: entry_0010de58
// Address: 0x10de58 - 0x10de8c
void entry_0010de58_0x10de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de58_0x10de58");
#endif

    switch (ctx->pc) {
        case 0x10de88u: goto label_10de88;
        default: break;
    }

    ctx->pc = 0x10de58u;

    // 0x10de58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10de58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10de5c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x10de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10de60: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10DE60u;
    {
        const bool branch_taken_0x10de60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10de60) {
            ctx->pc = 0x10DE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DE60u;
            // 0x10de64: 0x26310003  addiu       $s1, $s1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DEA0u;
            return;
        }
    }
    ctx->pc = 0x10DE68u;
    // 0x10de68: 0x8ea245a8  lw          $v0, 0x45A8($s5)
    ctx->pc = 0x10de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
    // 0x10de6c: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DE6Cu;
    {
        const bool branch_taken_0x10de6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10de6c) {
            ctx->pc = 0x10DE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DE6Cu;
            // 0x10de70: 0x8e05fffc  lw          $a1, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DE8Cu;
            return;
        }
    }
    ctx->pc = 0x10DE74u;
    // 0x10de74: 0x8e06fffc  lw          $a2, -0x4($s0)
    ctx->pc = 0x10de74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x10de78: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x10de78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10de7c: 0x3012  mflo        $a2
    ctx->pc = 0x10de7cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x10de80: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DE80u;
    SET_GPR_U32(ctx, 31, 0x10DE88u);
    ctx->pc = 0x10DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE80u;
    // 0x10de84: 0x2684cd10  addiu       $a0, $s4, -0x32F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DE88u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DE88u) { return; }
    ctx->pc = 0x10DE88u;
label_10de88:
    // 0x10de88: 0x8e05fffc  lw          $a1, -0x4($s0)
    ctx->pc = 0x10de88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    ctx->pc = 0x10de8cu;
}
