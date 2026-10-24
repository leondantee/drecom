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

// Function: caseD_4
// Address: 0x1bdefc - 0x1bdf4c
void caseD_4_0x1bdefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1bdefc");
#endif

    switch (ctx->pc) {
        case 0x1bdf1cu: goto label_1bdf1c;
        default: break;
    }

    ctx->pc = 0x1bdefcu;

    // 0x1bdefc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bdefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf04: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bdf08: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1bdf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x1bdf0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bdf14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BDF14u;
    SET_GPR_U32(ctx, 31, 0x1BDF1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BDF14u, 0x1BDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDF1Cu;
label_1bdf1c:
    // 0x1bdf1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bdf1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bdf20: 0x3c0440a3  lui         $a0, 0x40A3
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16547 << 16));
    // 0x1bdf24: 0x34833334  ori         $v1, $a0, 0x3334
    ctx->pc = 0x1bdf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13108);
    // 0x1bdf28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdf2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf30: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bdf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1bdf34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf38: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1bdf38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1bdf3c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bdf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bdf40: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1bdf40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1bdf44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bdf48: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x1bdf48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bdf4cu;
}
