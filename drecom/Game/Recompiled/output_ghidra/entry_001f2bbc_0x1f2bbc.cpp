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

// Function: entry_001f2bbc
// Address: 0x1f2bbc - 0x1f2c60
void entry_001f2bbc_0x1f2bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2bbc_0x1f2bbc");
#endif

    switch (ctx->pc) {
        case 0x1f2c18u: goto label_1f2c18;
        default: break;
    }

    ctx->pc = 0x1f2bbcu;

    // 0x1f2bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2bc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bc4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f2bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2bc8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1f2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1f2bcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f2bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2bd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2bdc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f2bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f2be0: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x1f2be4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f2be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2bec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2bf4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f2bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f2bf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2bfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1f2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c00: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f2c04: 0x24067805  addiu       $a2, $zero, 0x7805
    ctx->pc = 0x1f2c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30725));
    // 0x1f2c08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f2c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2c0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f2c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f2c10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F2C10u;
    SET_GPR_U32(ctx, 31, 0x1F2C18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F2C10u, 0x1F2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C18u;
label_1f2c18:
    // 0x1f2c18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c1c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c20: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2c24: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x1f2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x1f2c28: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f2c2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f2c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2c34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c38: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c3c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1f2c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1f2c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f2c44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2c48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2c50: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f2c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1f2c54: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1f2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1f2c58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2c5c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f2c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f2c60u;
}
