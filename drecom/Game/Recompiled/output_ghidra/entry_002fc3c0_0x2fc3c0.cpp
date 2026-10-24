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

// Function: entry_002fc3c0
// Address: 0x2fc3c0 - 0x2fc414
void entry_002fc3c0_0x2fc3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc3c0_0x2fc3c0");
#endif

    ctx->pc = 0x2fc3c0u;

    // 0x2fc3c0: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc3c4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2fc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fc3c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fc3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc3cc: 0x14a60011  bne         $a1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FC3CCu;
    {
        const bool branch_taken_0x2fc3cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x2fc3cc) {
            ctx->pc = 0x2FC414u;
            return;
        }
    }
    ctx->pc = 0x2FC3D4u;
    // 0x2fc3d4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc3d8: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc3dc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2fc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2fc3e0: 0x654023  subu        $t0, $v1, $a1
    ctx->pc = 0x2fc3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fc3e4: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2fc3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fc3e8: 0x3c059249  lui         $a1, 0x9249
    ctx->pc = 0x2fc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37449 << 16));
    // 0x2fc3ec: 0x34a32493  ori         $v1, $a1, 0x2493
    ctx->pc = 0x2fc3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9363);
    // 0x2fc3f0: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x2fc3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2fc3f4: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x2fc3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2fc3f8: 0x0  nop
    ctx->pc = 0x2fc3f8u;
    // NOP
    // 0x2fc3fc: 0x2010  mfhi        $a0
    ctx->pc = 0x2fc3fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2fc400: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2fc404: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2fc404u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fc408: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2fc408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fc40c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x2fc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2fc410: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x2fc410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    ctx->pc = 0x2fc414u;
}
