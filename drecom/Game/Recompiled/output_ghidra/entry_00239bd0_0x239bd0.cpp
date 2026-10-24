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

// Function: entry_00239bd0
// Address: 0x239bd0 - 0x239c38
void entry_00239bd0_0x239bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239bd0_0x239bd0");
#endif

    ctx->pc = 0x239bd0u;

    // 0x239bd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239bd4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x239bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239bd8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x239bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239bdc: 0x3c043c49  lui         $a0, 0x3C49
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15433 << 16));
    // 0x239be0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x239be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239be8: 0x0  nop
    ctx->pc = 0x239be8u;
    // NOP
    // 0x239bec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x239becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x239bf0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x239bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x239bf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239bf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239bfc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239c00: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x239c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x239c04: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239c0c: 0x0  nop
    ctx->pc = 0x239c0cu;
    // NOP
    // 0x239c10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x239c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239c14: 0x0  nop
    ctx->pc = 0x239c14u;
    // NOP
    // 0x239c18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x239C18u;
    {
        const bool branch_taken_0x239c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239c18) {
            ctx->pc = 0x239C38u;
            return;
        }
    }
    ctx->pc = 0x239C20u;
    // 0x239c20: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x239c24: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239c2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239c34: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x239c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x239c38u;
}
