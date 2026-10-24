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

// Function: entry_0030d248
// Address: 0x30d248 - 0x30d2d0
void entry_0030d248_0x30d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d248_0x30d248");
#endif

    switch (ctx->pc) {
        case 0x30d268u: goto label_30d268;
        case 0x30d288u: goto label_30d288;
        case 0x30d2a8u: goto label_30d2a8;
        default: break;
    }

    ctx->pc = 0x30d248u;

    // 0x30d248: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d24c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d250: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d254: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x30d254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x30d258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d25c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d260: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D260u;
    SET_GPR_U32(ctx, 31, 0x30D268u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D260u, 0x30D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D268u;
label_30d268:
    // 0x30d268: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d26c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d270: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d274: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30d278: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30d27c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x30d27cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30d280: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30D280u;
    SET_GPR_U32(ctx, 31, 0x30D288u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30D280u, 0x30D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D288u;
label_30d288:
    // 0x30d288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d28c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30d28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30d290: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d294: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30d298: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d29c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d2a0: 0xc0c3640  jal         func_30D900
    ctx->pc = 0x30D2A0u;
    SET_GPR_U32(ctx, 31, 0x30D2A8u);
    ctx->pc = 0x30D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D900u, 0x30D2A0u, 0x30D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2A8u;
label_30d2a8:
    // 0x30d2a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2ac: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30d2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30d2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d2b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2b8: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x30d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x30d2bc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x30d2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d2c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d2c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30d2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d2cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30d2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30d2d0u;
}
