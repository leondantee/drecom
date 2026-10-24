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

// Function: caseD_8
// Address: 0x1b7b74 - 0x1b7bf0
void caseD_8_0x1b7b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1b7b74");
#endif

    switch (ctx->pc) {
        case 0x1b7b98u: goto label_1b7b98;
        case 0x1b7becu: goto label_1b7bec;
        default: break;
    }

    ctx->pc = 0x1b7b74u;

    // 0x1b7b74: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7b78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7b7c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1b7b7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1b7b80: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b7b84: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1b7b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b7b88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b7b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7b8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b7b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b7b90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B7B90u;
    SET_GPR_U32(ctx, 31, 0x1B7B98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B7B90u, 0x1B7B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7B98u;
label_1b7b98:
    // 0x1b7b98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7b98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7b9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7ba0: 0xaca01b60  sw          $zero, 0x1B60($a1)
    ctx->pc = 0x1b7ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 0));
    // 0x1b7ba4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1b7ba8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7ba8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7bac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7bb0: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b7bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1b7bb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7bb8: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x1b7bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1b7bbc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7BBCu;
    {
        const bool branch_taken_0x1b7bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7bbc) {
            ctx->pc = 0x1B7BF0u;
            return;
        }
    }
    ctx->pc = 0x1B7BC4u;
    // 0x1b7bc4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7bc8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7bcc: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1b7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x1b7bd0: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x1b7bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1b7bd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b7bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7bd8: 0x24c60180  addiu       $a2, $a2, 0x180
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1b7bdc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1b7bdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1b7be0: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b7be4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B7BE4u;
    SET_GPR_U32(ctx, 31, 0x1B7BECu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B7BECu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B7BECu) { return; }
    ctx->pc = 0x1B7BECu;
label_1b7bec:
    // 0x1b7bec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7becu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b7bf0u;
}
