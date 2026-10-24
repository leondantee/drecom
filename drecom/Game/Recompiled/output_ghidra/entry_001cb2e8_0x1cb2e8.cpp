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

// Function: entry_001cb2e8
// Address: 0x1cb2e8 - 0x1cb348
void entry_001cb2e8_0x1cb2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb2e8_0x1cb2e8");
#endif

    switch (ctx->pc) {
        case 0x1cb308u: goto label_1cb308;
        case 0x1cb338u: goto label_1cb338;
        default: break;
    }

    ctx->pc = 0x1cb2e8u;

    // 0x1cb2e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cb2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cb2f4: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x1cb2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1cb2f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb2fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cb2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cb300: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CB300u;
    SET_GPR_U32(ctx, 31, 0x1CB308u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CB300u, 0x1CB308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB308u;
label_1cb308:
    // 0x1cb308: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cb308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cb30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb310: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb314: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cb314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1cb318: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cb31c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb320: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cb320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cb324: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1cb328: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x1cb328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1cb32c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1cb32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1cb330: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB330u;
    SET_GPR_U32(ctx, 31, 0x1CB338u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB330u, 0x1CB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB338u;
label_1cb338:
    // 0x1cb338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb33c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cb33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cb340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb344: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cb344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cb348u;
}
