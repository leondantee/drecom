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

// Function: entry_002f2228
// Address: 0x2f2228 - 0x2f2244
void entry_002f2228_0x2f2228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2228_0x2f2228");
#endif

    ctx->pc = 0x2f2228u;

    // 0x2f2228: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2f2228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2f222c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f2230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2230u;
    {
        const bool branch_taken_0x2f2230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2230) {
            ctx->pc = 0x2F2244u;
            return;
        }
    }
    ctx->pc = 0x2F2238u;
    // 0x2f2238: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2f2238u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f223c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F223Cu;
    {
        const bool branch_taken_0x2f223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f223c) {
            ctx->pc = 0x2F2248u;
            return;
        }
    }
    ctx->pc = 0x2F2244u;
}
