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

// Function: entry_0020b548
// Address: 0x20b548 - 0x20b5b0
void entry_0020b548_0x20b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b548_0x20b548");
#endif

    ctx->pc = 0x20b548u;

    // 0x20b548: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b54c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x20b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b550: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b554: 0x246293e0  addiu       $v0, $v1, -0x6C20
    ctx->pc = 0x20b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939616));
    // 0x20b558: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x20b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b55c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b560: 0x10a0006b  beqz        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x20B560u;
    {
        const bool branch_taken_0x20b560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b560) {
            ctx->pc = 0x20B710u;
            return;
        }
    }
    ctx->pc = 0x20B568u;
    // 0x20b568: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b56c: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x20b56cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20b570: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x20b570u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x20b574: 0x250293e0  addiu       $v0, $t0, -0x6C20
    ctx->pc = 0x20b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939616));
    // 0x20b578: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20b57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b580: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b584: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B584u;
    {
        const bool branch_taken_0x20b584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b584) {
            ctx->pc = 0x20B5B0u;
            return;
        }
    }
    ctx->pc = 0x20B58Cu;
    // 0x20b58c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20b590: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20b594: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x20b594u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3EDCE0u));
    // 0x20b598: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20b59c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20b5a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b5a4: 0x24439390  addiu       $v1, $v0, -0x6C70
    ctx->pc = 0x20b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939536));
    // 0x20b5a8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x20b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20b5ac: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x20b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    ctx->pc = 0x20b5b0u;
}
