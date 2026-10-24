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

// Function: entry_0028bc94
// Address: 0x28bc94 - 0x28bcbc
void entry_0028bc94_0x28bc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bc94_0x28bc94");
#endif

    ctx->pc = 0x28bc94u;

    // 0x28bc94: 0x92026625  lbu         $v0, 0x6625($s0)
    ctx->pc = 0x28bc94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26149)));
    // 0x28bc98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bca0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BCA0u;
    {
        const bool branch_taken_0x28bca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bca0) {
            ctx->pc = 0x28BCBCu;
            return;
        }
    }
    ctx->pc = 0x28BCA8u;
    // 0x28bca8: 0xa2006625  sb          $zero, 0x6625($s0)
    ctx->pc = 0x28bca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26149), (uint8_t)GPR_U32(ctx, 0));
    // 0x28bcac: 0xae00685c  sw          $zero, 0x685C($s0)
    ctx->pc = 0x28bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 0));
    // 0x28bcb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bcb4: 0xa20265ab  sb          $v0, 0x65AB($s0)
    ctx->pc = 0x28bcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26027), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bcb8: 0xa20065ac  sb          $zero, 0x65AC($s0)
    ctx->pc = 0x28bcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26028), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x28bcbcu;
}
