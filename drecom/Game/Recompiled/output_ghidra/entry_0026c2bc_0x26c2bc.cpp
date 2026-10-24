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

// Function: entry_0026c2bc
// Address: 0x26c2bc - 0x26c324
void entry_0026c2bc_0x26c2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c2bc_0x26c2bc");
#endif

    switch (ctx->pc) {
        case 0x26c2c8u: goto label_26c2c8;
        default: break;
    }

    ctx->pc = 0x26c2bcu;

    // 0x26c2bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26c2c0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26C2C0u;
    SET_GPR_U32(ctx, 31, 0x26C2C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26C2C0u, 0x26C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2C8u;
label_26c2c8:
    // 0x26c2c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c2c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c2cc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x26c2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c2d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26c2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26c2d4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x26c2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x26c2d8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C2D8u;
    {
        const bool branch_taken_0x26c2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2d8) {
            ctx->pc = 0x26C324u;
            return;
        }
    }
    ctx->pc = 0x26C2E0u;
    // 0x26c2e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c2e4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c2e8: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x26c2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x26c2ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26c2f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c2f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26c2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26c2f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26c2fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c300: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26c300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26c304: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c308: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26c308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c30c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c310: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26c310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c314: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c318: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26c318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x26c31c: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x26C31Cu;
    {
        const bool branch_taken_0x26c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c31c) {
            ctx->pc = 0x26C9F8u;
            return;
        }
    }
    ctx->pc = 0x26C324u;
}
