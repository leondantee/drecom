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

// Function: caseD_6
// Address: 0x1bc97c - 0x1bc9f8
void caseD_6_0x1bc97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1bc97c");
#endif

    switch (ctx->pc) {
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9f4u: goto label_1bc9f4;
        default: break;
    }

    ctx->pc = 0x1bc97cu;

    // 0x1bc97c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc980: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc984: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bc988: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1bc988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1bc98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc990: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bc990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bc994: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BC994u;
    SET_GPR_U32(ctx, 31, 0x1BC99Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BC994u, 0x1BC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC99Cu;
label_1bc99c:
    // 0x1bc99c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc99cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc9a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc9a4: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bc9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1bc9a8: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1bc9ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc9acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc9b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc9b4: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bc9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1bc9b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc9bc: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1bc9c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BC9C0u;
    {
        const bool branch_taken_0x1bc9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9c0) {
            ctx->pc = 0x1BC9F8u;
            return;
        }
    }
    ctx->pc = 0x1BC9C8u;
    // 0x1bc9c8: 0x3c043f19  lui         $a0, 0x3F19
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16153 << 16));
    // 0x1bc9cc: 0x3483999a  ori         $v1, $a0, 0x999A
    ctx->pc = 0x1bc9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1bc9d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1bc9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc9d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc9d8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc9dc: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x1bc9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1bc9e0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1bc9e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1bc9e4: 0x24a20180  addiu       $v0, $a1, 0x180
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1bc9e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bc9e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc9ec: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BC9ECu;
    SET_GPR_U32(ctx, 31, 0x1BC9F4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BC9F4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BC9F4u) { return; }
    ctx->pc = 0x1BC9F4u;
label_1bc9f4:
    // 0x1bc9f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bc9f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bc9f8u;
}
