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

// Function: entry_00316a10
// Address: 0x316a10 - 0x316b14
void entry_00316a10_0x316a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00316a10_0x316a10");
#endif

    switch (ctx->pc) {
        case 0x316a38u: goto label_316a38;
        case 0x316a60u: goto label_316a60;
        default: break;
    }

    ctx->pc = 0x316a10u;

    // 0x316a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a14: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316a18: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316a1c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316a20: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316a24: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x316a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x316a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x316a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x316a2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x316a2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316a30: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x316A30u;
    SET_GPR_U32(ctx, 31, 0x316A38u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x316A30u, 0x316A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A38u;
label_316a38:
    // 0x316a38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a3c: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316a40: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x316a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316a44: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316a48: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x316a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316a4c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x316a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x316a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x316a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316a54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x316a54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316a58: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x316A58u;
    SET_GPR_U32(ctx, 31, 0x316A60u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x316A58u, 0x316A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A60u;
label_316a60:
    // 0x316a60: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x316a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a64: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x316a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x316a68: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x316a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x316a6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x316a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x316a70: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x316a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x316a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x316a78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x316a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x316a80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a84: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x316a84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x316a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x316a94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x316a98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316a9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x316a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x316aa0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x316aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x316aa4: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x316aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x316aa8: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x316aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x316aac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316ab0: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x316ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
    // 0x316ab4: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316ab8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316abc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316ac4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x316ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x316ac8: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316acc: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ad4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316ad8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x316ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x316adc: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x316adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x316ae0: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x316ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x316ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x316ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316aec: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x316aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x316af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316af4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316af8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x316af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x316afc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316b00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316b04: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x316b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x316b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316b0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x316b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316b10: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x316b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    ctx->pc = 0x316b14u;
}
