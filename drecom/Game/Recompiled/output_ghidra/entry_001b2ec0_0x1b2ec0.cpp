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

// Function: entry_001b2ec0
// Address: 0x1b2ec0 - 0x1b2ef4
void entry_001b2ec0_0x1b2ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ec0_0x1b2ec0");
#endif

    ctx->pc = 0x1b2ec0u;

    // 0x1b2ec0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1b2ec4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b2ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2ec8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1b2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b2ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2ed0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ed4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b2ed8: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1b2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x1b2edc: 0x8e16121c  lw          $s6, 0x121C($s0)
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x1b2ee0: 0x8e021228  lw          $v0, 0x1228($s0)
    ctx->pc = 0x1b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4648)));
    // 0x1b2ee4: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b2ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b2ee8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2ee8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2eec: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1B2EECu;
    {
        const bool branch_taken_0x1b2eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2eec) {
            ctx->pc = 0x1B3480u;
            return;
        }
    }
    ctx->pc = 0x1B2EF4u;
}
