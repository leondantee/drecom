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

// Function: entry_003101e4
// Address: 0x3101e4 - 0x31025c
void entry_003101e4_0x3101e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003101e4_0x3101e4");
#endif

    switch (ctx->pc) {
        case 0x310204u: goto label_310204;
        default: break;
    }

    ctx->pc = 0x3101e4u;

    // 0x3101e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3101e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3101e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3101ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3101ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3101f0: 0x24065a23  addiu       $a2, $zero, 0x5A23
    ctx->pc = 0x3101f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23075));
    // 0x3101f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3101f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3101f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3101f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3101fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3101FCu;
    SET_GPR_U32(ctx, 31, 0x310204u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3101FCu, 0x310204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310204u;
label_310204:
    // 0x310204: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310208: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x310208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x31020c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310214: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310218: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x310218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x31021c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31021cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310224: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310228: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x310228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x31022c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x310230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x310234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310238: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x310238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x31023c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310240: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x310240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x310244: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x310244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x310248: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x310248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31024c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310250: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x310250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x310254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310258: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x310258u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31025cu;
}
