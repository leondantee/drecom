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

// Function: entry_00245d64
// Address: 0x245d64 - 0x245df4
void entry_00245d64_0x245d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245d64_0x245d64");
#endif

    switch (ctx->pc) {
        case 0x245d94u: goto label_245d94;
        default: break;
    }

    ctx->pc = 0x245d64u;

    // 0x245d64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d68: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x245d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x245d6c: 0x106002b7  beqz        $v1, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x245D6Cu;
    {
        const bool branch_taken_0x245d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245d6c) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x245D74u;
    // 0x245d74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x245d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245d80: 0x24067821  addiu       $a2, $zero, 0x7821
    ctx->pc = 0x245d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30753));
    // 0x245d84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245d88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245d8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245D8Cu;
    SET_GPR_U32(ctx, 31, 0x245D94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245D8Cu, 0x245D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D94u;
label_245d94:
    // 0x245d94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x245d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245d98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245d9c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x245d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x245da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245da4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245da8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x245da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x245dac: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x245dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x245db0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x245db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x245db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245db8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245dbc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x245dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x245dc0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x245dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x245dc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245dc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245dcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245dd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245dd4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x245dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x245dd8: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x245dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x245ddc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x245ddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245de0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245de4: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x245de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x245de8: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x245de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x245dec: 0x10000297  b           . + 4 + (0x297 << 2)
    ctx->pc = 0x245DECu;
    {
        const bool branch_taken_0x245dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245dec) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x245DF4u;
}
