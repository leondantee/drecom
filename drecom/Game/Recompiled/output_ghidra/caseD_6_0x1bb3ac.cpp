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
// Address: 0x1bb3ac - 0x1bb3f8
void caseD_6_0x1bb3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1bb3ac");
#endif

    switch (ctx->pc) {
        case 0x1bb3ccu: goto label_1bb3cc;
        default: break;
    }

    ctx->pc = 0x1bb3acu;

    // 0x1bb3ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb3b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb3b4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bb3b8: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x1bb3bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb3c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bb3c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BB3C4u;
    SET_GPR_U32(ctx, 31, 0x1BB3CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB3C4u, 0x1BB3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3CCu;
label_1bb3cc:
    // 0x1bb3cc: 0x3c1040a3  lui         $s0, 0x40A3
    ctx->pc = 0x1bb3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16547 << 16));
    // 0x1bb3d0: 0x36033334  ori         $v1, $s0, 0x3334
    ctx->pc = 0x1bb3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13108);
    // 0x1bb3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bb3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb3d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb3dc: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1bb3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1bb3e0: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x1bb3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb3e4: 0xae401b60  sw          $zero, 0x1B60($s2)
    ctx->pc = 0x1bb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7008), GPR_U32(ctx, 0));
    // 0x1bb3e8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb3ec: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x1bb3ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x1bb3f0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1bb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bb3f4: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x1bb3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bb3f8u;
}
