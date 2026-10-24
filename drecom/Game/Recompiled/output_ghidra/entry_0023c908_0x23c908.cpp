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

// Function: entry_0023c908
// Address: 0x23c908 - 0x23ca18
void entry_0023c908_0x23c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c908_0x23c908");
#endif

    switch (ctx->pc) {
        case 0x23c934u: goto label_23c934;
        default: break;
    }

    ctx->pc = 0x23c908u;

    // 0x23c908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c90c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c910: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23c910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c914: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c918: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23c918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c91c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c920: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x23c924: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c928: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c92c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C92Cu;
    SET_GPR_U32(ctx, 31, 0x23C934u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C92Cu, 0x23C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C934u;
label_23c934:
    // 0x23c934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c93c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c940: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23c944: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x23c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x23c948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c94c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c950: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c954: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c958: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23c95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c964: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c968: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23c968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23c96c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c978: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c97c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c980: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23c984: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23c988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c98c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c994: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c998: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23c99c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23c99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23c9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9ac: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c9b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x23c9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x23c9b8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x23c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x23c9bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23c9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23c9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23c9d0: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x23c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x23c9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9e0: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x23c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x23c9e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23c9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9f4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x23c9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x23c9f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9fc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ca00: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23ca04: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23ca08: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23ca0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23ca10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca14: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23ca14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23ca18u;
}
