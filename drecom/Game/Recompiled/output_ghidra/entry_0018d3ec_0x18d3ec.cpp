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

// Function: entry_0018d3ec
// Address: 0x18d3ec - 0x18d414
void entry_0018d3ec_0x18d3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d3ec_0x18d3ec");
#endif

    ctx->pc = 0x18d3ecu;

    // 0x18d3ec: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x18d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18d3f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18D3F0u;
    {
        const bool branch_taken_0x18d3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d3f0) {
            ctx->pc = 0x18D414u;
            return;
        }
    }
    ctx->pc = 0x18D3F8u;
    // 0x18d3f8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x18d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18d3fc: 0x93a2004d  lbu         $v0, 0x4D($sp)
    ctx->pc = 0x18d3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 77)));
    // 0x18d400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d404: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x18d404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x18d408: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x18d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x18d40c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d410: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x18d410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->pc = 0x18d414u;
}
