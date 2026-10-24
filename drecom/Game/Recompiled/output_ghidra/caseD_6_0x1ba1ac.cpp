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
// Address: 0x1ba1ac - 0x1ba1f8
void caseD_6_0x1ba1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ba1ac");
#endif

    switch (ctx->pc) {
        case 0x1ba1ccu: goto label_1ba1cc;
        default: break;
    }

    ctx->pc = 0x1ba1acu;

    // 0x1ba1ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba1b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba1b4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ba1b8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1ba1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1ba1bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ba1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba1c0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ba1c4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BA1C4u;
    SET_GPR_U32(ctx, 31, 0x1BA1CCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BA1C4u, 0x1BA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1CCu;
label_1ba1cc:
    // 0x1ba1cc: 0x3c0240a3  lui         $v0, 0x40A3
    ctx->pc = 0x1ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16547 << 16));
    // 0x1ba1d0: 0x34443334  ori         $a0, $v0, 0x3334
    ctx->pc = 0x1ba1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13108);
    // 0x1ba1d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ba1d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba1d8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba1dc: 0xe4a01280  swc1        $f0, 0x1280($a1)
    ctx->pc = 0x1ba1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4736), bits); }
    // 0x1ba1e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba1e4: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x1ba1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x1ba1e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba1ec: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1ba1f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba1f4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1ba1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ba1f8u;
}
