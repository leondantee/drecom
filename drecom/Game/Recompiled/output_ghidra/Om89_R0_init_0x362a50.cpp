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

// Function: Om89_R0_init
// Address: 0x362a50 - 0x362b5c
void Om89_R0_init_0x362a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om89_R0_init_0x362a50");
#endif

    switch (ctx->pc) {
        case 0x362ad8u: goto label_362ad8;
        default: break;
    }

    ctx->pc = 0x362a50u;

    // 0x362a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x362a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x362a54: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x362a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x362a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x362a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362a64: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x362a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x362a68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x362a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x362a6c: 0x2443ad00  addiu       $v1, $v0, -0x5300
    ctx->pc = 0x362a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x362a70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362a74: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x362a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x362a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362a7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362a80: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x362a80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x362a84: 0x3c038900  lui         $v1, 0x8900
    ctx->pc = 0x362a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35072 << 16));
    // 0x362a88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362a8c: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x362a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x362a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362a94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362a98: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x362a98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x362a9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362aa0: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x362aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x362aa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x362aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x362aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362aac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362ab0: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x362ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x362ab4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x362ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x362ab8: 0x8c300ae8  lw          $s0, 0xAE8($at)
    ctx->pc = 0x362ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x362abc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x362abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362ac0: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x362ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x362ac4: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x362ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x362ac8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x362ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x362acc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x362accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x362ad0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x362AD0u;
    SET_GPR_U32(ctx, 31, 0x362AD8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x362AD0u, 0x362AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AD8u;
label_362ad8:
    // 0x362ad8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x362ad8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x362adc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x362adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x362ae0: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x362ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x362ae4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x362ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x362ae8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x362ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x362aec: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x362aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x362af0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x362af0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x362af4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x362af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x362af8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x362af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x362afc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x362afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x362b00: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x362b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x362b04: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x362b04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x362b08: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x362b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x362b0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x362b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x362b10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x362b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x362b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x362b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362b18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362b1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362b20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362b24: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x362b28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362b2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362b30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362b34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x362b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362b3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362b40: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x362b40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x362b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362b50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x362b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x362b54: 0x3e00008  jr          $ra
    ctx->pc = 0x362B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362B5Cu;
}
