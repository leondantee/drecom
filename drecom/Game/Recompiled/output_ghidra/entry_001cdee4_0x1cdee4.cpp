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

// Function: entry_001cdee4
// Address: 0x1cdee4 - 0x1cdf40
void entry_001cdee4_0x1cdee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdee4_0x1cdee4");
#endif

    ctx->pc = 0x1cdee4u;

    // 0x1cdee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdee8: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1cdeec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CDEECu;
    {
        const bool branch_taken_0x1cdeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdeec) {
            ctx->pc = 0x1CDF40u;
            return;
        }
    }
    ctx->pc = 0x1CDEF4u;
    // 0x1cdef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdef8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdefc: 0xac851b6c  sw          $a1, 0x1B6C($a0)
    ctx->pc = 0x1cdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 5));
    // 0x1cdf00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf04: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cdf04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cdf08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CDF08u;
    {
        const bool branch_taken_0x1cdf08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf08) {
            ctx->pc = 0x1CDF40u;
            return;
        }
    }
    ctx->pc = 0x1CDF10u;
    // 0x1cdf10: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf14: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x1cdf14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1cdf18: 0x2464fed4  addiu       $a0, $v1, -0x12C
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966996));
    // 0x1cdf1c: 0xa4a415ec  sh          $a0, 0x15EC($a1)
    ctx->pc = 0x1cdf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cdf20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf24: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cdf24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cdf28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cdf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1cdf2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cdf30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDF30u;
    {
        const bool branch_taken_0x1cdf30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cdf30) {
            ctx->pc = 0x1CDF40u;
            return;
        }
    }
    ctx->pc = 0x1CDF38u;
    // 0x1cdf38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdf3c: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1cdf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cdf40u;
}
