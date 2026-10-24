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

// Function: entry_0023e228
// Address: 0x23e228 - 0x23e2cc
void entry_0023e228_0x23e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e228_0x23e228");
#endif

    switch (ctx->pc) {
        case 0x23e248u: goto label_23e248;
        default: break;
    }

    ctx->pc = 0x23e228u;

    // 0x23e228: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e22c: 0x36067800  ori         $a2, $s0, 0x7800
    ctx->pc = 0x23e22cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)30720);
    // 0x23e230: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e234: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23e234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23e238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e23c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23e23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23e240: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23E240u;
    SET_GPR_U32(ctx, 31, 0x23E248u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23E240u, 0x23E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E248u;
label_23e248:
    // 0x23e248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e24c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e250: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e254: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23e254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23e258: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23e25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e260: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e264: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x23e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23e268: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23e26c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x23e26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x23e270: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23e270u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e274: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e278: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23e278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e27c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23e27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x23e280: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23e284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e288: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e28c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x23e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e290: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23e290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23e294: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x23e298: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23e29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23e29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e2a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23e2a8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23e2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23e2ac: 0x3c033ac9  lui         $v1, 0x3AC9
    ctx->pc = 0x23e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15049 << 16));
    // 0x23e2b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23e2b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23e2b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e2b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e2c0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x23e2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x23e2c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23e2c8: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x23e2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x23e2ccu;
}
