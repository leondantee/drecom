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
// Address: 0x1ba5ac - 0x1ba620
void caseD_8_0x1ba5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1ba5ac");
#endif

    switch (ctx->pc) {
        case 0x1ba5d4u: goto label_1ba5d4;
        default: break;
    }

    ctx->pc = 0x1ba5acu;

    // 0x1ba5ac: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba5b0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1ba5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba5b4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ba5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ba5b8: 0x8d020368  lw          $v0, 0x368($t0)
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x1ba5bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ba5bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba5c0: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ba5c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba5c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ba5cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BA5CCu;
    SET_GPR_U32(ctx, 31, 0x1BA5D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BA5CCu, 0x1BA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5D4u;
label_1ba5d4:
    // 0x1ba5d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba5d8: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1ba5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1ba5dc: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1ba5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1ba5e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ba5e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba5e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba5e8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1ba5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1ba5ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba5f0: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1ba5f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BA5F4u;
    {
        const bool branch_taken_0x1ba5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5f4) {
            ctx->pc = 0x1BA620u;
            return;
        }
    }
    ctx->pc = 0x1BA5FCu;
    // 0x1ba5fc: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1ba5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1ba600: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x1ba600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1ba604: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1ba604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba608: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba60c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba610: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1ba614: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1ba618: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BA618u;
    SET_GPR_U32(ctx, 31, 0x1BA620u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BA620u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA620u) { return; }
    ctx->pc = 0x1BA620u;
}
