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

// Function: entry_0036cab8
// Address: 0x36cab8 - 0x36caf4
void entry_0036cab8_0x36cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cab8_0x36cab8");
#endif

    ctx->pc = 0x36cab8u;

    // 0x36cab8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x36cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x36cabc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x36CABCu;
    {
        const bool branch_taken_0x36cabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cabc) {
            ctx->pc = 0x36CAF4u;
            return;
        }
    }
    ctx->pc = 0x36CAC4u;
    // 0x36cac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cac8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36cacc: 0x24420530  addiu       $v0, $v0, 0x530
    ctx->pc = 0x36caccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x36cad0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x36cad0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36cad4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cad8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cae0: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cae4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36cae8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x36cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x36caec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36CAECu;
    {
        const bool branch_taken_0x36caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36caec) {
            ctx->pc = 0x36CB20u;
            return;
        }
    }
    ctx->pc = 0x36CAF4u;
}
