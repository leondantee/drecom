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

// Function: entry_00239b50
// Address: 0x239b50 - 0x239bd0
void entry_00239b50_0x239b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239b50_0x239b50");
#endif

    ctx->pc = 0x239b50u;

    // 0x239b50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b54: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x239b54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x239b58: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x239B58u;
    {
        const bool branch_taken_0x239b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b58) {
            ctx->pc = 0x239BD0u;
            return;
        }
    }
    ctx->pc = 0x239B60u;
    // 0x239b60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x239b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239b68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x239b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b6c: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x239b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x239b70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239b78: 0x0  nop
    ctx->pc = 0x239b78u;
    // NOP
    // 0x239b7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x239b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x239b80: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x239b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x239b84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239b88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239b8c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x239b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239b90: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x239b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x239b94: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239b9c: 0x0  nop
    ctx->pc = 0x239b9cu;
    // NOP
    // 0x239ba0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x239ba0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239ba4: 0x0  nop
    ctx->pc = 0x239ba4u;
    // NOP
    // 0x239ba8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x239BA8u;
    {
        const bool branch_taken_0x239ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x239ba8) {
            ctx->pc = 0x239C38u;
            return;
        }
    }
    ctx->pc = 0x239BB0u;
    // 0x239bb0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x239bb4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x239bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x239bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239bbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239bc0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x239bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x239bc4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x239bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x239bc8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x239BC8u;
    {
        const bool branch_taken_0x239bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239bc8) {
            ctx->pc = 0x239C38u;
            return;
        }
    }
    ctx->pc = 0x239BD0u;
}
