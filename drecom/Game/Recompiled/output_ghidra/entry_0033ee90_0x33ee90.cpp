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

// Function: entry_0033ee90
// Address: 0x33ee90 - 0x33eec0
void entry_0033ee90_0x33ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ee90_0x33ee90");
#endif

    ctx->pc = 0x33ee90u;

    // 0x33ee90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33ee94: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33ee94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x33ee98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ee9c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33eea0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33eea4: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x33eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33eea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eeac: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x33eeb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33eeb4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x33EEB4u;
    {
        const bool branch_taken_0x33eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eeb4) {
            ctx->pc = 0x33EE80u;
            return;
        }
    }
    ctx->pc = 0x33EEBCu;
    // 0x33eebc: 0x0  nop
    ctx->pc = 0x33eebcu;
    // NOP
    ctx->pc = 0x33eec0u;
}
