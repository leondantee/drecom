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

// Function: entry_00173cdc
// Address: 0x173cdc - 0x173d38
void entry_00173cdc_0x173cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173cdc_0x173cdc");
#endif

    switch (ctx->pc) {
        case 0x173d08u: goto label_173d08;
        default: break;
    }

    ctx->pc = 0x173cdcu;

    // 0x173cdc: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x173cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x173ce0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x173ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x173ce4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x173ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x173ce8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x173CE8u;
    {
        const bool branch_taken_0x173ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ce8) {
            ctx->pc = 0x173D38u;
            return;
        }
    }
    ctx->pc = 0x173CF0u;
    // 0x173cf0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173cf4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x173cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173cf8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x173cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x173cfc: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x173cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x173d00: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x173D00u;
    SET_GPR_U32(ctx, 31, 0x173D08u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x173D00u, 0x173D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D08u;
label_173d08:
    // 0x173d08: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x173d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x173d0c: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x173d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x173d10: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x173d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x173d14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x173d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173d18: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x173d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d1c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x173d1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d20: 0x0  nop
    ctx->pc = 0x173d20u;
    // NOP
    // 0x173d24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x173D24u;
    {
        const bool branch_taken_0x173d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d24) {
            ctx->pc = 0x173D38u;
            return;
        }
    }
    ctx->pc = 0x173D2Cu;
    // 0x173d2c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x173d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173d30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173d34: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x173d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x173d38u;
}
