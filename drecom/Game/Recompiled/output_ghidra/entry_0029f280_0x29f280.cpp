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

// Function: entry_0029f280
// Address: 0x29f280 - 0x29f2e4
void entry_0029f280_0x29f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f280_0x29f280");
#endif

    switch (ctx->pc) {
        case 0x29f288u: goto label_29f288;
        default: break;
    }

    ctx->pc = 0x29f280u;

    // 0x29f280: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F280u;
    SET_GPR_U32(ctx, 31, 0x29F288u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F280u, 0x29F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F288u;
label_29f288:
    // 0x29f288: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f28c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x29f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x29f290: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x29f290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x29f294: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29f294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29f298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29f29c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f2a0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29f2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f2a4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29f2a8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29f2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f2b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f2b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f2b8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29f2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29f2bc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29f2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29f2c0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x29f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29f2c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29F2C4u;
    {
        const bool branch_taken_0x29f2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29f2c4) {
            ctx->pc = 0x29F2E4u;
            return;
        }
    }
    ctx->pc = 0x29F2CCu;
    // 0x29f2cc: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x29f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x29f2d0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29f2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29f2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f2d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f2dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f2e0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29f2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x29f2e4u;
}
