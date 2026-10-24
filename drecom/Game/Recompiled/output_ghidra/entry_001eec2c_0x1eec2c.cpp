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

// Function: entry_001eec2c
// Address: 0x1eec2c - 0x1eec94
void entry_001eec2c_0x1eec2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eec2c_0x1eec2c");
#endif

    ctx->pc = 0x1eec2cu;

    // 0x1eec2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1eec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eec38: 0x3c053c49  lui         $a1, 0x3C49
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15433 << 16));
    // 0x1eec3c: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x1eec3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1eec40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1eec40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec44: 0x0  nop
    ctx->pc = 0x1eec44u;
    // NOP
    // 0x1eec48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eec48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eec4c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1eec4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1eec50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec54: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1eec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec58: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1eec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eec5c: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x1eec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x1eec60: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1eec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eec64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eec64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec68: 0x0  nop
    ctx->pc = 0x1eec68u;
    // NOP
    // 0x1eec6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1eec6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eec70: 0x0  nop
    ctx->pc = 0x1eec70u;
    // NOP
    // 0x1eec74: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEC74u;
    {
        const bool branch_taken_0x1eec74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eec74) {
            ctx->pc = 0x1EEC94u;
            return;
        }
    }
    ctx->pc = 0x1EEC7Cu;
    // 0x1eec7c: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x1eec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x1eec80: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1eec80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eec84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eec84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1eec90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1eec94u;
}
