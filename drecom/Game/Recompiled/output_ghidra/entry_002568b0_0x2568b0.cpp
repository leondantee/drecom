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

// Function: entry_002568b0
// Address: 0x2568b0 - 0x2568e8
void entry_002568b0_0x2568b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002568b0_0x2568b0");
#endif

    ctx->pc = 0x2568b0u;

    // 0x2568b0: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x2568b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x2568b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2568B4u;
    {
        const bool branch_taken_0x2568b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568b4) {
            ctx->pc = 0x2568F8u;
            return;
        }
    }
    ctx->pc = 0x2568BCu;
    // 0x2568bc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2568c0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2568c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2568c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2568c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2568c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2568c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2568cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2568CCu;
    {
        const bool branch_taken_0x2568cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568cc) {
            ctx->pc = 0x2568E8u;
            return;
        }
    }
    ctx->pc = 0x2568D4u;
    // 0x2568d4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2568d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2568dc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2568dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2568e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2568E0u;
    {
        const bool branch_taken_0x2568e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568e0) {
            ctx->pc = 0x2568F8u;
            return;
        }
    }
    ctx->pc = 0x2568E8u;
}
