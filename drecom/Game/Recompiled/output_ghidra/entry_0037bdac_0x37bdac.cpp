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

// Function: entry_0037bdac
// Address: 0x37bdac - 0x37bdcc
void entry_0037bdac_0x37bdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037bdac_0x37bdac");
#endif

    switch (ctx->pc) {
        case 0x37bdc4u: goto label_37bdc4;
        default: break;
    }

    ctx->pc = 0x37bdacu;

    // 0x37bdac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37bdacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37bdb0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x37bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37bdb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37bdb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37bdb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37bdbc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x37BDBCu;
    SET_GPR_U32(ctx, 31, 0x37BDC4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x37BDBCu, 0x37BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDC4u;
label_37bdc4:
    // 0x37bdc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bdc8: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    ctx->pc = 0x37bdccu;
}
