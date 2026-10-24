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

// Function: entry_002fc414
// Address: 0x2fc414 - 0x2fc468
void entry_002fc414_0x2fc414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc414_0x2fc414");
#endif

    ctx->pc = 0x2fc414u;

    // 0x2fc414: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc418: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fc418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc41c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fc41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc420: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC420u;
    {
        const bool branch_taken_0x2fc420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc420) {
            ctx->pc = 0x2FC468u;
            return;
        }
    }
    ctx->pc = 0x2FC428u;
    // 0x2fc428: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc42c: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fc42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc430: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2fc430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2fc434: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x2fc434u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fc438: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2fc438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fc43c: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x2fc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x2fc440: 0x34642493  ori         $a0, $v1, 0x2493
    ctx->pc = 0x2fc440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x2fc444: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x2fc444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fc448: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x2fc448u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2fc44c: 0x0  nop
    ctx->pc = 0x2fc44cu;
    // NOP
    // 0x2fc450: 0x2010  mfhi        $a0
    ctx->pc = 0x2fc450u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2fc454: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2fc454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2fc458: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2fc458u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fc45c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2fc45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2fc460: 0x24c50002  addiu       $a1, $a2, 0x2
    ctx->pc = 0x2fc460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2fc464: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x2fc464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    ctx->pc = 0x2fc468u;
}
