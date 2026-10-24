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

// Function: entry_00145d30
// Address: 0x145d30 - 0x145d88
void entry_00145d30_0x145d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145d30_0x145d30");
#endif

    switch (ctx->pc) {
        case 0x145d78u: goto label_145d78;
        default: break;
    }

    ctx->pc = 0x145d30u;

    // 0x145d30: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x145d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d34: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x145d38: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x145d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x145d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d40: 0x0  nop
    ctx->pc = 0x145d40u;
    // NOP
    // 0x145d44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d48: 0x0  nop
    ctx->pc = 0x145d48u;
    // NOP
    // 0x145d4c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x145D4Cu;
    {
        const bool branch_taken_0x145d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d4c) {
            ctx->pc = 0x145D88u;
            return;
        }
    }
    ctx->pc = 0x145D54u;
    // 0x145d54: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d58: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d5c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x145d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x145d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x145d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x145d64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x145d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x145d68: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x145d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145d6c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x145d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145d70: 0xc058f50  jal         func_163D40
    ctx->pc = 0x145D70u;
    SET_GPR_U32(ctx, 31, 0x145D78u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x145D70u, 0x145D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D78u;
label_145d78:
    // 0x145d78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145d7c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x145d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x145d80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x145D80u;
    {
        const bool branch_taken_0x145d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d80) {
            ctx->pc = 0x145DB4u;
            return;
        }
    }
    ctx->pc = 0x145D88u;
}
