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

// Function: entry_001f6c40
// Address: 0x1f6c40 - 0x1f6d44
void entry_001f6c40_0x1f6c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6c40_0x1f6c40");
#endif

    switch (ctx->pc) {
        case 0x1f6d38u: goto label_1f6d38;
        default: break;
    }

    ctx->pc = 0x1f6c40u;

    // 0x1f6c40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c48: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c50: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6c58: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f6c5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c64: 0xc441009c  lwc1        $f1, 0x9C($v0)
    ctx->pc = 0x1f6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c6c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6c74: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1f6c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1f6c78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c80: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1f6c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6c84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c88: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f6c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6c90: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1f6c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1f6c94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6c98: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6c9c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6ca0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ca8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6cac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6cb0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f6cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f6cb4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6cb8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6cbc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6cc0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6cc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6cc8: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6ccc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6cd0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1f6cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1f6cd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6cd8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6cdc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6ce0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f6ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f6ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ce8: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f6ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f6cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6cf0: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f6cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1f6cf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6cf8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6cfc: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f6cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f6d00: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f6d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f6d04: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6D04u;
    {
        const bool branch_taken_0x1f6d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d04) {
            ctx->pc = 0x1F6D44u;
            return;
        }
    }
    ctx->pc = 0x1F6D0Cu;
    // 0x1f6d0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1f6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d10: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1f6d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6d18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6d1c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f6d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f6d20: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6d24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f6d28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f6d2c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f6d30: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F6D30u;
    SET_GPR_U32(ctx, 31, 0x1F6D38u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F6D30u, 0x1F6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D38u;
label_1f6d38:
    // 0x1f6d38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f6d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f6d3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6D3Cu;
    {
        const bool branch_taken_0x1f6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d3c) {
            ctx->pc = 0x1F6D88u;
            return;
        }
    }
    ctx->pc = 0x1F6D44u;
}
