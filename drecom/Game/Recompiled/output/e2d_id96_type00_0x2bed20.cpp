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

// Function: e2d_id96_type00
// Address: 0x2bed20 - 0x2bedac
void e2d_id96_type00_0x2bed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id96_type00_0x2bed20");
#endif

    ctx->pc = 0x2bed20u;

    // 0x2bed20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bed24: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2bed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2bed28: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bed28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bed2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bed2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed34: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bed34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bed38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2bed38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bed3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed40: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2bed40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bed44: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2bed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2bed48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2bed48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2bed4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bed4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed54: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2bed54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2bed58: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x2bed5c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2bed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2bed60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bed60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed68: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2bed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2bed6c: 0x3c0340b6  lui         $v1, 0x40B6
    ctx->pc = 0x2bed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16566 << 16));
    // 0x2bed70: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2bed70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2bed74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bed74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed7c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bed7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bed80: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x2bed80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x2bed84: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x2bed84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x2bed88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bed88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bed8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed90: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2bed90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2bed94: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2bed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2bed98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed9c: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2beda0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2beda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2beda4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDACu;
}
