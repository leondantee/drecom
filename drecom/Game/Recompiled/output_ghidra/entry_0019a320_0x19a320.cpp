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

// Function: entry_0019a320
// Address: 0x19a320 - 0x19a398
void entry_0019a320_0x19a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a320_0x19a320");
#endif

    switch (ctx->pc) {
        case 0x19a340u: goto label_19a340;
        default: break;
    }

    ctx->pc = 0x19a320u;

    // 0x19a320: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a324: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19a32c: 0x24061e23  addiu       $a2, $zero, 0x1E23
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7715));
    // 0x19a330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19a338: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19A338u;
    SET_GPR_U32(ctx, 31, 0x19A340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A338u, 0x19A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A340u;
label_19a340:
    // 0x19a340: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a344: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x19a344u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a348: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a34c: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x19a34cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a350: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a354: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19a358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a35c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a360: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a364: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a368: 0xa4640096  sh          $a0, 0x96($v1)
    ctx->pc = 0x19a368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x19a36c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a370: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x19a370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a378: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a37c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x19a380: 0x3c034361  lui         $v1, 0x4361
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17249 << 16));
    // 0x19a384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a38c: 0xe420d360  swc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD360u, _value); } while (0); }
    // 0x19a390: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x19A390u;
    {
        const bool branch_taken_0x19a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a390) {
            ctx->pc = 0x19A750u;
            return;
        }
    }
    ctx->pc = 0x19A398u;
}
