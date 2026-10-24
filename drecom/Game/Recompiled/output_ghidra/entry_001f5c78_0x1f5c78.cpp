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

// Function: entry_001f5c78
// Address: 0x1f5c78 - 0x1f5d48
void entry_001f5c78_0x1f5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5c78_0x1f5c78");
#endif

    switch (ctx->pc) {
        case 0x1f5d3cu: goto label_1f5d3c;
        default: break;
    }

    ctx->pc = 0x1f5c78u;

    // 0x1f5c78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c7c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f5c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5c80: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f5c84: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f5c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f5c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f5c8c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f5c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5c94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c98: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f5c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f5c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5ca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ca4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5ca8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f5ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f5cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5cb8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f5cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f5cbc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f5cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cc8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5ccc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f5cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f5cd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f5cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5ce0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f5ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f5ce4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1f5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1f5ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f5ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5cec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5cf4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f5cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f5cf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5cfc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5d00: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f5d04: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f5d08: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F5D08u;
    {
        const bool branch_taken_0x1f5d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d08) {
            ctx->pc = 0x1F5D48u;
            return;
        }
    }
    ctx->pc = 0x1F5D10u;
    // 0x1f5d10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f5d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d1c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5d20: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f5d24: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5d28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f5d2c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f5d30: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f5d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f5d34: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F5D34u;
    SET_GPR_U32(ctx, 31, 0x1F5D3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F5D34u, 0x1F5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D3Cu;
label_1f5d3c:
    // 0x1f5d3c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f5d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f5d40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5D40u;
    {
        const bool branch_taken_0x1f5d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d40) {
            ctx->pc = 0x1F5D8Cu;
            return;
        }
    }
    ctx->pc = 0x1F5D48u;
}
