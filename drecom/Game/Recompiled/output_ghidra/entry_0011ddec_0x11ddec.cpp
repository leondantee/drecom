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

// Function: entry_0011ddec
// Address: 0x11ddec - 0x11de20
void entry_0011ddec_0x11ddec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ddec_0x11ddec");
#endif

    ctx->pc = 0x11ddecu;

    // 0x11ddec: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x11ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x11ddf0: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x11ddf4: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x11ddf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11ddf8: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x11ddf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x11ddfc: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11ddfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x11de00: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x11de00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11de04: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x11de04u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x11de08: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x11de08u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x11de0c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x11de0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x11de10: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x11de10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de14: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x11de14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x11de18: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DE18u;
    {
        const bool branch_taken_0x11de18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11de18) {
            ctx->pc = 0x11DE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DE18u;
            // 0x11de1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DE20u;
            return;
        }
    }
    ctx->pc = 0x11DE20u;
}
