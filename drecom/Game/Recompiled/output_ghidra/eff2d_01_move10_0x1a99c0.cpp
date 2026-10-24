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

// Function: eff2d_01_move10
// Address: 0x1a99c0 - 0x1a9a58
void eff2d_01_move10_0x1a99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_01_move10_0x1a99c0");
#endif

    ctx->pc = 0x1a99c0u;

    // 0x1a99c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a99c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a99c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1a99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1a99c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a99cc: 0x8c6401f8  lw          $a0, 0x1F8($v1)
    ctx->pc = 0x1a99ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 504)));
    // 0x1a99d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a99d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a99d8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1a99d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a99dc: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A99DCu;
    {
        const bool branch_taken_0x1a99dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a99dc) {
            ctx->pc = 0x1A9A4Cu;
            goto label_1a9a4c;
        }
    }
    ctx->pc = 0x1A99E4u;
    // 0x1a99e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a99e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a99ec: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1a99ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1a99f0: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x1a99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x1a99f4: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x1a99f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x1a99f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a99f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a99fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9a00: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1a9a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1a9a04: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x1a9a08: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x1a9a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x1a9a0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a9a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9a10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9a14: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1a9a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x1a9a18: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x1a9a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x1a9a1c: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x1a9a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x1a9a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a9a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9a24: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9a28: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1a9a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x1a9a2c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9a30: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1a9a34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1a9a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1a9a38: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x1a9a3c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a9a40: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1a9a44: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1a9a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1a9a48: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1a9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
label_1a9a4c:
    // 0x1a9a4c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a9a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a9a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9A58u;
}
