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

// Function: entry_00293990
// Address: 0x293990 - 0x293a34
void entry_00293990_0x293990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293990_0x293990");
#endif

    ctx->pc = 0x293990u;

    // 0x293990: 0x8e425dc4  lw          $v0, 0x5DC4($s2)
    ctx->pc = 0x293990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24004)));
    // 0x293994: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x293994u;
    {
        const bool branch_taken_0x293994 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x293994) {
            ctx->pc = 0x293A34u;
            return;
        }
    }
    ctx->pc = 0x29399Cu;
    // 0x29399c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x29399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2939a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2939a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2939a4: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x2939a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x2939a8: 0x34825556  ori         $v0, $a0, 0x5556
    ctx->pc = 0x2939a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x2939ac: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2939acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2939b0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2939b4: 0x0  nop
    ctx->pc = 0x2939b4u;
    // NOP
    // 0x2939b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2939b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2939bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2939bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2939c0: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x2939c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2939c8: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x2939c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x2939cc: 0x34855556  ori         $a1, $a0, 0x5556
    ctx->pc = 0x2939ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x2939d0: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x2939d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2939d4: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x2939d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2939d8: 0x0  nop
    ctx->pc = 0x2939d8u;
    // NOP
    // 0x2939dc: 0x2810  mfhi        $a1
    ctx->pc = 0x2939dcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2939e0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2939e4: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2939e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2939e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2939e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2939ec: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2939f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2939f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2939f4: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x2939f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x2939f8: 0x34a45556  ori         $a0, $a1, 0x5556
    ctx->pc = 0x2939f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x2939fc: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x2939fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x293a00: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x293a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x293a04: 0x0  nop
    ctx->pc = 0x293a04u;
    // NOP
    // 0x293a08: 0x2810  mfhi        $a1
    ctx->pc = 0x293a08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x293a0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x293a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x293a10: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x293a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x293a14: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x293a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293a18: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x293a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x293a1c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x293a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x293a20: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x293a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x293a24: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x293a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x293a28: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x293a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x293a2c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x293A2Cu;
    {
        const bool branch_taken_0x293a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a2c) {
            ctx->pc = 0x293AC8u;
            return;
        }
    }
    ctx->pc = 0x293A34u;
}
