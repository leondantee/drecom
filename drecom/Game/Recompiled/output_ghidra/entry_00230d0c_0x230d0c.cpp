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

// Function: entry_00230d0c
// Address: 0x230d0c - 0x230dbc
void entry_00230d0c_0x230d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230d0c_0x230d0c");
#endif

    switch (ctx->pc) {
        case 0x230d2cu: goto label_230d2c;
        default: break;
    }

    ctx->pc = 0x230d0cu;

    // 0x230d0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230d18: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x230d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x230d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230D24u;
    SET_GPR_U32(ctx, 31, 0x230D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230D24u, 0x230D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D2Cu;
label_230d2c:
    // 0x230d2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d30: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230d34: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x230d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x230d38: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x230d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x230d3c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x230d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x230d40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230d48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x230d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x230d4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x230d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x230d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d58: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x230d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x230d5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230d5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d64: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x230d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x230d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d70: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x230d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x230d74: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x230d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x230d78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d7c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x230d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x230d80: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x230d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x230d84: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x230d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x230d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230d90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230d94: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x230d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x230d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230d9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230da0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x230da0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x230da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230da8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230dac: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x230dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x230db0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x230db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x230db4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230db8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x230db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x230dbcu;
}
