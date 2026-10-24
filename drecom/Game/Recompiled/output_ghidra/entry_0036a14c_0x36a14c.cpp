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

// Function: entry_0036a14c
// Address: 0x36a14c - 0x36a1ac
void entry_0036a14c_0x36a14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a14c_0x36a14c");
#endif

    switch (ctx->pc) {
        case 0x36a178u: goto label_36a178;
        case 0x36a18cu: goto label_36a18c;
        default: break;
    }

    ctx->pc = 0x36a14cu;

    // 0x36a14c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x36a150: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a154: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x36a154u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a158: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36a158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36a15c: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x36a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x36a160: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x36a160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x36a164: 0x24060500  addiu       $a2, $zero, 0x500
    ctx->pc = 0x36a164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36a168: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x36a168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36a16c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36a16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36a170: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36A170u;
    SET_GPR_U32(ctx, 31, 0x36A178u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36A170u, 0x36A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A178u;
label_36a178:
    // 0x36a178: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a17c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x36a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36a180: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x36a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x36a184: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x36A184u;
    SET_GPR_U32(ctx, 31, 0x36A18Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x36A184u, 0x36A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A18Cu;
label_36a18c:
    // 0x36a18c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a190: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36a190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36a194: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x36a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a198: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36a198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36a19c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36a1a0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x36a1a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x36a1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36a1a8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x36a1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36a1acu;
}
