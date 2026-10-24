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
// Address: 0x1b9150 - 0x1b91c4
void caseD_8_0x1b9150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1b9150");
#endif

    switch (ctx->pc) {
        case 0x1b9170u: goto label_1b9170;
        case 0x1b91c0u: goto label_1b91c0;
        default: break;
    }

    ctx->pc = 0x1b9150u;

    // 0x1b9150: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9154: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9158: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b9158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b915c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1b915cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1b9160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b9160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9164: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b9164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b9168: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B9168u;
    SET_GPR_U32(ctx, 31, 0x1B9170u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B9168u, 0x1B9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9170u;
label_1b9170:
    // 0x1b9170: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1b9170u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9174: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1b9174u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9178: 0xad001b60  sw          $zero, 0x1B60($t0)
    ctx->pc = 0x1b9178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7008), GPR_U32(ctx, 0));
    // 0x1b917c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9184: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9188: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1b9188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1b918c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9190: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1b9190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1b9194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B9194u;
    {
        const bool branch_taken_0x1b9194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9194) {
            ctx->pc = 0x1B91C4u;
            return;
        }
    }
    ctx->pc = 0x1B919Cu;
    // 0x1b919c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b91a0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b91a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b91a4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1b91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1b91a8: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x1b91a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1b91ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b91acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b91b0: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x1b91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1b91b4: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1b91b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1b91b8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B91B8u;
    SET_GPR_U32(ctx, 31, 0x1B91C0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B91C0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B91C0u) { return; }
    ctx->pc = 0x1B91C0u;
label_1b91c0:
    // 0x1b91c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b91c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1b91c4u;
}
