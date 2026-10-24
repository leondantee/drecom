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

// Function: entry_002fc370
// Address: 0x2fc370 - 0x2fc3c0
void entry_002fc370_0x2fc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc370_0x2fc370");
#endif

    ctx->pc = 0x2fc370u;

    // 0x2fc370: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc374: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fc374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc378: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC378u;
    {
        const bool branch_taken_0x2fc378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc378) {
            ctx->pc = 0x2FC3C0u;
            return;
        }
    }
    ctx->pc = 0x2FC380u;
    // 0x2fc380: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc384: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fc384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc388: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2fc388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2fc38c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x2fc38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fc390: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2fc390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fc394: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x2fc394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x2fc398: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x2fc398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x2fc39c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2fc39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fc3a0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2fc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2fc3a4: 0x0  nop
    ctx->pc = 0x2fc3a4u;
    // NOP
    // 0x2fc3a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2fc3a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fc3ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fc3b0: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x2fc3b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fc3b4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2fc3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2fc3b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2fc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2fc3bc: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x2fc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    ctx->pc = 0x2fc3c0u;
}
