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

// Function: entry_00304214
// Address: 0x304214 - 0x30425c
void entry_00304214_0x304214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304214_0x304214");
#endif

    switch (ctx->pc) {
        case 0x304234u: goto label_304234;
        default: break;
    }

    ctx->pc = 0x304214u;

    // 0x304214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304218: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30421c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30421cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304220: 0x2406280c  addiu       $a2, $zero, 0x280C
    ctx->pc = 0x304220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10252));
    // 0x304224: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304228: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30422c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30422Cu;
    SET_GPR_U32(ctx, 31, 0x304234u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30422Cu, 0x304234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304234u;
label_304234:
    // 0x304234: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x304234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x304238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30423c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304240: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x304240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x304244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304248: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x304248u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30424c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30424cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304250: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304258: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30425cu;
}
