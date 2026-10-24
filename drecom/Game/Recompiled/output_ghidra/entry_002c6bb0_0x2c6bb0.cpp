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

// Function: entry_002c6bb0
// Address: 0x2c6bb0 - 0x2c6c2c
void entry_002c6bb0_0x2c6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6bb0_0x2c6bb0");
#endif

    switch (ctx->pc) {
        case 0x2c6bdcu: goto label_2c6bdc;
        default: break;
    }

    ctx->pc = 0x2c6bb0u;

    // 0x2c6bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6bb4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bb8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c6bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6bbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bc4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c6bc8: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x2c6bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x2c6bcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6bd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c6bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c6bd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C6BD4u;
    SET_GPR_U32(ctx, 31, 0x2C6BDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C6BD4u, 0x2C6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BDCu;
label_2c6bdc:
    // 0x2c6bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6be0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6be4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6be8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c6be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c6bec: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c6becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c6bf0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c6bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c6bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6bf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bfc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6c00: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c6c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c6c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c08: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6c0c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c6c10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c6c14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6c18: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c6c1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c20: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2c6c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c6c24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c28: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2c6c28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2c6c2cu;
}
