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

// Function: entry_002efd58
// Address: 0x2efd58 - 0x2efd74
void entry_002efd58_0x2efd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efd58_0x2efd58");
#endif

    ctx->pc = 0x2efd58u;

    // 0x2efd58: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2efd58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2efd5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efd60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFD60u;
    {
        const bool branch_taken_0x2efd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd60) {
            ctx->pc = 0x2EFD74u;
            return;
        }
    }
    ctx->pc = 0x2EFD68u;
    // 0x2efd68: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2efd68u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2efd6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFD6Cu;
    {
        const bool branch_taken_0x2efd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd6c) {
            ctx->pc = 0x2EFD78u;
            return;
        }
    }
    ctx->pc = 0x2EFD74u;
}
