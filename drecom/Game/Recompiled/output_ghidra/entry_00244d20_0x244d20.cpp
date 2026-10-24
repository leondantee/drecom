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

// Function: entry_00244d20
// Address: 0x244d20 - 0x244d88
void entry_00244d20_0x244d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244d20_0x244d20");
#endif

    ctx->pc = 0x244d20u;

    // 0x244d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d24: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x244d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d28: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x244d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244d2c: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x244d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x244d30: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d38: 0x0  nop
    ctx->pc = 0x244d38u;
    // NOP
    // 0x244d3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x244d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244d40: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x244d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x244d44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d4c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244d50: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x244d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x244d54: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d5c: 0x0  nop
    ctx->pc = 0x244d5cu;
    // NOP
    // 0x244d60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x244d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244d64: 0x0  nop
    ctx->pc = 0x244d64u;
    // NOP
    // 0x244d68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x244D68u;
    {
        const bool branch_taken_0x244d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244d68) {
            ctx->pc = 0x244D88u;
            return;
        }
    }
    ctx->pc = 0x244D70u;
    // 0x244d70: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x244d74: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d84: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x244d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x244d88u;
}
