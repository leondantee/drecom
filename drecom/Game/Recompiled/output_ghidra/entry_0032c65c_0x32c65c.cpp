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

// Function: entry_0032c65c
// Address: 0x32c65c - 0x32c694
void entry_0032c65c_0x32c65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c65c_0x32c65c");
#endif

    ctx->pc = 0x32c65cu;

    // 0x32c65c: 0x26711420  addiu       $s1, $s3, 0x1420
    ctx->pc = 0x32c65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 5152));
    // 0x32c660: 0x26721c20  addiu       $s2, $s3, 0x1C20
    ctx->pc = 0x32c660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 7200));
    // 0x32c664: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x32c664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32c668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c670: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32C670u;
    {
        const bool branch_taken_0x32c670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c670) {
            ctx->pc = 0x32C694u;
            return;
        }
    }
    ctx->pc = 0x32C678u;
    // 0x32c678: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x32c678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x32c67c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x32c67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32c680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c684: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x32c684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32c688: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32c68c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x32c68cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32c690: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x32c690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    ctx->pc = 0x32c694u;
}
