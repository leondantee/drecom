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

// Function: entry_00109450
// Address: 0x109450 - 0x109484
void entry_00109450_0x109450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109450_0x109450");
#endif

    ctx->pc = 0x109450u;

    // 0x109450: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x109450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x109454: 0x3404bdff  ori         $a0, $zero, 0xBDFF
    ctx->pc = 0x109454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48639);
    // 0x109458: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x109458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x10945c: 0x600013  mtlo        $v1
    ctx->pc = 0x10945cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x109460: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x109460u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109464: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x109464u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109468: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x109468u;
    {
        const bool branch_taken_0x109468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x109468) {
            ctx->pc = 0x10946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109468u;
            // 0x10946c: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109484u;
            return;
        }
    }
    ctx->pc = 0x109470u;
    // 0x109470: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x109470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x109474: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x109474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x109478: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x109478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10947c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x10947cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x109480: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x109480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x109484u;
}
