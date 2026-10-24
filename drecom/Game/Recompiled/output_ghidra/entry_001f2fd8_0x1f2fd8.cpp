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

// Function: entry_001f2fd8
// Address: 0x1f2fd8 - 0x1f3030
void entry_001f2fd8_0x1f2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2fd8_0x1f2fd8");
#endif

    ctx->pc = 0x1f2fd8u;

    // 0x1f2fd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2fdc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2fe0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2fe4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1f2fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1f2fe8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f2fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f2fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ff0: 0x0  nop
    ctx->pc = 0x1f2ff0u;
    // NOP
    // 0x1f2ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2ff8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1f2ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f2ffc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3000: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3004: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f3004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f3008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f300c: 0x0  nop
    ctx->pc = 0x1f300cu;
    // NOP
    // 0x1f3010: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f3010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3014: 0x0  nop
    ctx->pc = 0x1f3014u;
    // NOP
    // 0x1f3018: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3018u;
    {
        const bool branch_taken_0x1f3018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3018) {
            ctx->pc = 0x1F3030u;
            return;
        }
    }
    ctx->pc = 0x1F3020u;
    // 0x1f3020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3024: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f3024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f302c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f302cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1f3030u;
}
