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

// Function: entry_0035d36c
// Address: 0x35d36c - 0x35d3ac
void entry_0035d36c_0x35d36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d36c_0x35d36c");
#endif

    ctx->pc = 0x35d36cu;

    // 0x35d36c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x35d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x35d370: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x35d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35d374: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x35d374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x35d378: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x35d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x35d37c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x35d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x35d380: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35D380u;
    {
        const bool branch_taken_0x35d380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d380) {
            ctx->pc = 0x35D3ACu;
            return;
        }
    }
    ctx->pc = 0x35D388u;
    // 0x35d388: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35d388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35d38c: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x35d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x35d390: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x35d390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x35d394: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x35d394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x35d398: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x35d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x35d39c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x35d3a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d3a4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x35D3A4u;
    {
        const bool branch_taken_0x35d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d3a4) {
            ctx->pc = 0x35D52Cu;
            return;
        }
    }
    ctx->pc = 0x35D3ACu;
}
