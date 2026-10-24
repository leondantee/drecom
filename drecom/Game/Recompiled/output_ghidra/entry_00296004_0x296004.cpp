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

// Function: entry_00296004
// Address: 0x296004 - 0x296024
void entry_00296004_0x296004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296004_0x296004");
#endif

    switch (ctx->pc) {
        case 0x29601cu: goto label_29601c;
        default: break;
    }

    ctx->pc = 0x296004u;

    // 0x296004: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x296004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x296008: 0x2444ca10  addiu       $a0, $v0, -0x35F0
    ctx->pc = 0x296008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x29600c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29600cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x296010: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x296010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x296014: 0xc046314  jal         func_118C50
    ctx->pc = 0x296014u;
    SET_GPR_U32(ctx, 31, 0x29601Cu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x29601Cu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29601Cu) { return; }
    ctx->pc = 0x29601Cu;
label_29601c:
    // 0x29601c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x296020: 0xa20369c9  sb          $v1, 0x69C9($s0)
    ctx->pc = 0x296020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27081), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x296024u;
}
