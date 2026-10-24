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

// Function: entry_0014bde4
// Address: 0x14bde4 - 0x14be64
void entry_0014bde4_0x14bde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bde4_0x14bde4");
#endif

    switch (ctx->pc) {
        case 0x14be10u: goto label_14be10;
        case 0x14be20u: goto label_14be20;
        case 0x14be54u: goto label_14be54;
        default: break;
    }

    ctx->pc = 0x14bde4u;

    // 0x14bde4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14bde8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdec: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14bdecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bdf0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bdf8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14bdfc: 0x24060a26  addiu       $a2, $zero, 0xA26
    ctx->pc = 0x14bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2598));
    // 0x14be00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14be00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14be04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14be04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14be08: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14BE08u;
    SET_GPR_U32(ctx, 31, 0x14BE10u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14BE08u, 0x14BE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE10u;
label_14be10:
    // 0x14be10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be14: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x14be14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14be18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x14BE18u;
    SET_GPR_U32(ctx, 31, 0x14BE20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x14BE18u, 0x14BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BE20u;
label_14be20:
    // 0x14be20: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x14be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x14be24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14be24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14be28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be2c: 0xe4401b48  swc1        $f0, 0x1B48($v0)
    ctx->pc = 0x14be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6984), bits); }
    // 0x14be30: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x14be30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x14be34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14be38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14be38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14be3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x14be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be44: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x14be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x14be48: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x14be48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14be4c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x14BE4Cu;
    SET_GPR_U32(ctx, 31, 0x14BE54u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x14BE54u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14BE54u) { return; }
    ctx->pc = 0x14BE54u;
label_14be54:
    // 0x14be54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14be58: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14be58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14be5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14be60: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14be60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14be64u;
}
