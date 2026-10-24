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

// Function: Em01_R0_init
// Address: 0x300b70 - 0x300ff4
void Em01_R0_init_0x300b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R0_init_0x300b70");
#endif

    switch (ctx->pc) {
        case 0x300c70u: goto label_300c70;
        case 0x300d20u: goto label_300d20;
        case 0x300d44u: goto label_300d44;
        case 0x300d68u: goto label_300d68;
        case 0x300d8cu: goto label_300d8c;
        case 0x300db0u: goto label_300db0;
        case 0x300dd4u: goto label_300dd4;
        case 0x300df8u: goto label_300df8;
        case 0x300e80u: goto label_300e80;
        case 0x300facu: goto label_300fac;
        default: break;
    }

    ctx->pc = 0x300b70u;

    // 0x300b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x300b74: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x300b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x300b78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x300b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x300b7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x300b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x300b80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x300b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x300b84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x300b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x300b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300b8c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x300b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x300b90: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x300b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x300b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300b98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300b9c: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x300b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x300ba0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x300ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x300ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300ba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bac: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x300bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x300bb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bb4: 0xac401330  sw          $zero, 0x1330($v0)
    ctx->pc = 0x300bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
    // 0x300bb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bbc: 0xac401340  sw          $zero, 0x1340($v0)
    ctx->pc = 0x300bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 0));
    // 0x300bc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bc4: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x300bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x300bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bcc: 0xac40136c  sw          $zero, 0x136C($v0)
    ctx->pc = 0x300bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4972), GPR_U32(ctx, 0));
    // 0x300bd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bd4: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x300bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x300bd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bdc: 0xac40134c  sw          $zero, 0x134C($v0)
    ctx->pc = 0x300bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4940), GPR_U32(ctx, 0));
    // 0x300be0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300be4: 0xac401350  sw          $zero, 0x1350($v0)
    ctx->pc = 0x300be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4944), GPR_U32(ctx, 0));
    // 0x300be8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bec: 0xac401354  sw          $zero, 0x1354($v0)
    ctx->pc = 0x300becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4948), GPR_U32(ctx, 0));
    // 0x300bf0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bf4: 0xac401358  sw          $zero, 0x1358($v0)
    ctx->pc = 0x300bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4952), GPR_U32(ctx, 0));
    // 0x300bf8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300bfc: 0xac40135c  sw          $zero, 0x135C($v0)
    ctx->pc = 0x300bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4956), GPR_U32(ctx, 0));
    // 0x300c00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c04: 0xac401360  sw          $zero, 0x1360($v0)
    ctx->pc = 0x300c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4960), GPR_U32(ctx, 0));
    // 0x300c08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c0c: 0xac401364  sw          $zero, 0x1364($v0)
    ctx->pc = 0x300c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4964), GPR_U32(ctx, 0));
    // 0x300c10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c14: 0xac401368  sw          $zero, 0x1368($v0)
    ctx->pc = 0x300c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4968), GPR_U32(ctx, 0));
    // 0x300c18: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x300c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x300c1c: 0x24439270  addiu       $v1, $v0, -0x6D90
    ctx->pc = 0x300c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939248));
    // 0x300c20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c24: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x300c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x300c28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x300c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x300c2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c30: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x300c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x300c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300c38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c3c: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x300c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x300c40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c44: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x300c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x300c48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x300c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x300c4c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x300c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x300c50: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x300C50u;
    {
        const bool branch_taken_0x300c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300c50) {
            ctx->pc = 0x300E80u;
            goto label_300e80;
        }
    }
    ctx->pc = 0x300C58u;
    // 0x300c58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300c5c: 0x245310b0  addiu       $s3, $v0, 0x10B0
    ctx->pc = 0x300c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x300c60: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x300c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x300c64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x300c64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300c68: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x300C68u;
    SET_GPR_U32(ctx, 31, 0x300C70u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x300C68u, 0x300C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C70u;
label_300c70:
    // 0x300c70: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x300c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x300c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300c78: 0x0  nop
    ctx->pc = 0x300c78u;
    // NOP
    // 0x300c7c: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x300c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
    // 0x300c80: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x300c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
    // 0x300c84: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x300c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x300c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300c8c: 0x0  nop
    ctx->pc = 0x300c8cu;
    // NOP
    // 0x300c90: 0xe66000d8  swc1        $f0, 0xD8($s3)
    ctx->pc = 0x300c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
    // 0x300c94: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x300c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x300c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x300c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300c9c: 0x0  nop
    ctx->pc = 0x300c9cu;
    // NOP
    // 0x300ca0: 0xe66000e4  swc1        $f0, 0xE4($s3)
    ctx->pc = 0x300ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
    // 0x300ca4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ca8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x300ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x300cac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x300cacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x300cb0: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x300cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x300cb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300cb8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x300cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x300cbc: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x300cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x300cc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300cc4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x300cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x300cc8: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x300cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x300ccc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x300cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x300cd0: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x300cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x300cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300cd8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x300cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x300cdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x300cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x300ce0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x300ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x300ce4: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x300ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x300ce8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x300ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300cec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x300cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x300cf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300cf4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x300cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x300cf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x300cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x300cfc: 0x8c320ae8  lw          $s2, 0xAE8($at)
    ctx->pc = 0x300cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300d00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300d04: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300d08: 0x24500480  addiu       $s0, $v0, 0x480
    ctx->pc = 0x300d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x300d0c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300d10: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300d14: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300d14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300d18: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300D18u;
    SET_GPR_U32(ctx, 31, 0x300D20u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300D18u, 0x300D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D20u;
label_300d20:
    // 0x300d20: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300d20u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300d24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300d28: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300d2c: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x300d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x300d30: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300d30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300d34: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300d34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300d38: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300d38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300d3c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300D3Cu;
    SET_GPR_U32(ctx, 31, 0x300D44u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300D3Cu, 0x300D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D44u;
label_300d44:
    // 0x300d44: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300d44u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300d48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300d4c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300d50: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x300d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x300d54: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300d58: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300d58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300d5c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300d5cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300d60: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300D60u;
    SET_GPR_U32(ctx, 31, 0x300D68u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300D60u, 0x300D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D68u;
label_300d68:
    // 0x300d68: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300d68u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300d6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300d70: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300d74: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x300d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x300d78: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300d78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300d7c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300d80: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300d80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300d84: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300D84u;
    SET_GPR_U32(ctx, 31, 0x300D8Cu);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300D84u, 0x300D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D8Cu;
label_300d8c:
    // 0x300d8c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300d8cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300d90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300d94: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300d98: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x300d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x300d9c: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300da0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300da0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300da4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300da4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300da8: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300DA8u;
    SET_GPR_U32(ctx, 31, 0x300DB0u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300DA8u, 0x300DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DB0u;
label_300db0:
    // 0x300db0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300db0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300db4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300db8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300dbc: 0x24500750  addiu       $s0, $v0, 0x750
    ctx->pc = 0x300dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x300dc0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300dc4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300dc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300dc8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300dcc: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300DCCu;
    SET_GPR_U32(ctx, 31, 0x300DD4u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300DCCu, 0x300DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DD4u;
label_300dd4:
    // 0x300dd4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300dd4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300dd8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ddc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300de0: 0x245007e0  addiu       $s0, $v0, 0x7E0
    ctx->pc = 0x300de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x300de4: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x300de4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x300de8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x300de8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x300dec: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x300decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x300df0: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x300DF0u;
    SET_GPR_U32(ctx, 31, 0x300DF8u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x300DF0u, 0x300DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DF8u;
label_300df8:
    // 0x300df8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x300df8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300dfc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x300dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x300e00: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x300e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x300e04: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x300e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x300e08: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x300e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x300e0c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x300e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x300e10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300e14: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x300e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x300e18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x300e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x300e1c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x300e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x300e20: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x300e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x300e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x300e24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300e28: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x300e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x300e2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x300e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x300e30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x300e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x300e34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x300e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x300e38: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x300e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300e3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300e40: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x300e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x300e44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x300e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x300e48: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x300e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x300e4c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x300e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x300e50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300e50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x300e54: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x300e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x300e58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x300e58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x300e5c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x300e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x300e60: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x300e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x300e64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x300e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x300e68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x300e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300e6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x300e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x300e70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x300e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x300e74: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x300e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x300e78: 0xc05d190  jal         func_174640
    ctx->pc = 0x300E78u;
    SET_GPR_U32(ctx, 31, 0x300E80u);
    ctx->pc = 0x174640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174640u, 0x300E78u, 0x300E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E80u;
label_300e80:
    // 0x300e80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300e84: 0xac401338  sw          $zero, 0x1338($v0)
    ctx->pc = 0x300e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 0));
    // 0x300e88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300e8c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x300e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x300e90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x300e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x300e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300e98: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x300E98u;
    {
        const bool branch_taken_0x300e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300e98) {
            ctx->pc = 0x300EE4u;
            goto label_300ee4;
        }
    }
    ctx->pc = 0x300EA0u;
    // 0x300ea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300EA0u;
    {
        const bool branch_taken_0x300ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ea0) {
            ctx->pc = 0x300EB0u;
            goto label_300eb0;
        }
    }
    ctx->pc = 0x300EA8u;
    // 0x300ea8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x300EA8u;
    {
        const bool branch_taken_0x300ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ea8) {
            ctx->pc = 0x300F10u;
            goto label_300f10;
        }
    }
    ctx->pc = 0x300EB0u;
label_300eb0:
    // 0x300eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300eb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300eb8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x300eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x300ebc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ec0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x300ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ec4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ec8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x300ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ecc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ed0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x300ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ed4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ed8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x300ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x300edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x300EDCu;
    {
        const bool branch_taken_0x300edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300edc) {
            ctx->pc = 0x300F10u;
            goto label_300f10;
        }
    }
    ctx->pc = 0x300EE4u;
label_300ee4:
    // 0x300ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300ee8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300eec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x300eecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x300ef0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ef4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x300ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ef8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300efc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x300efcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f04: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x300f04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x300f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_300f10:
    // 0x300f10: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x300f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x300f14: 0x24439290  addiu       $v1, $v0, -0x6D70
    ctx->pc = 0x300f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x300f18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f1c: 0xac430354  sw          $v1, 0x354($v0)
    ctx->pc = 0x300f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 3));
    // 0x300f20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f24: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f28: 0x24540b40  addiu       $s4, $v0, 0xB40
    ctx->pc = 0x300f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2880));
    // 0x300f2c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f34: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f38: 0x24540bd0  addiu       $s4, $v0, 0xBD0
    ctx->pc = 0x300f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x300f3c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f44: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f48: 0x24540c60  addiu       $s4, $v0, 0xC60
    ctx->pc = 0x300f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x300f4c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f54: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x300f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x300f58: 0x24540ab0  addiu       $s4, $v0, 0xAB0
    ctx->pc = 0x300f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2736));
    // 0x300f5c: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x300f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f64: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x300f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x300f68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x300f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x300f6c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x300f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x300f70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x300F70u;
    {
        const bool branch_taken_0x300f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300f70) {
            ctx->pc = 0x300FA4u;
            goto label_300fa4;
        }
    }
    ctx->pc = 0x300F78u;
    // 0x300f78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x300f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x300f7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f80: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x300f80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x300f84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f88: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x300f88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x300f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f98: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x300f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300fa0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x300fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_300fa4:
    // 0x300fa4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x300FA4u;
    SET_GPR_U32(ctx, 31, 0x300FACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x300FA4u, 0x300FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FACu;
label_300fac:
    // 0x300fac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x300facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x300fb0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x300fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x300fb4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x300fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x300fb8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x300fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x300fbc: 0x24639250  addiu       $v1, $v1, -0x6DB0
    ctx->pc = 0x300fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
    // 0x300fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x300fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300fc4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x300fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300fc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x300fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300fcc: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x300fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x300fd0: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x300fd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300fd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x300fd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300fe8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x300fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x300fec: 0x3e00008  jr          $ra
    ctx->pc = 0x300FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300FF4u;
}
