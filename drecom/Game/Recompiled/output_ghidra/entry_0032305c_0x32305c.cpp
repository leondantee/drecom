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

// Function: entry_0032305c
// Address: 0x32305c - 0x323070
void entry_0032305c_0x32305c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032305c_0x32305c");
#endif

    ctx->pc = 0x32305cu;

    // 0x32305c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x32305cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323060: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x323060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x323064: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x323068: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x323068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x32306c: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x32306cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x323070u;
}
