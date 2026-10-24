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

// Function: entry_0029a0ec
// Address: 0x29a0ec - 0x29a108
void entry_0029a0ec_0x29a0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a0ec_0x29a0ec");
#endif

    switch (ctx->pc) {
        case 0x29a0fcu: goto label_29a0fc;
        default: break;
    }

    ctx->pc = 0x29a0ecu;

    // 0x29a0ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a0f0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x29a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a0f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29A0F4u;
    SET_GPR_U32(ctx, 31, 0x29A0FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29A0FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A0FCu) { return; }
    ctx->pc = 0x29A0FCu;
label_29a0fc:
    // 0x29a0fc: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x29a0fcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29a100: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x29A100u;
    {
        const bool branch_taken_0x29a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a100) {
            ctx->pc = 0x29A4D0u;
            return;
        }
    }
    ctx->pc = 0x29A108u;
}
