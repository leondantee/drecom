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

// Function: entry_0033e928
// Address: 0x33e928 - 0x33e958
void entry_0033e928_0x33e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e928_0x33e928");
#endif

    ctx->pc = 0x33e928u;

    // 0x33e928: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e92c: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33e92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x33e930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e934: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33e938: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33e93c: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x33e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33e940: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e944: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x33e948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33e94c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x33E94Cu;
    {
        const bool branch_taken_0x33e94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e94c) {
            ctx->pc = 0x33E918u;
            return;
        }
    }
    ctx->pc = 0x33E954u;
    // 0x33e954: 0x0  nop
    ctx->pc = 0x33e954u;
    // NOP
    ctx->pc = 0x33e958u;
}
