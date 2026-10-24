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

// Function: entry_0035ef48
// Address: 0x35ef48 - 0x35efcc
void entry_0035ef48_0x35ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ef48_0x35ef48");
#endif

    ctx->pc = 0x35ef48u;

    // 0x35ef48: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x35ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef4c: 0x8ca31330  lw          $v1, 0x1330($a1)
    ctx->pc = 0x35ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4912)));
    // 0x35ef50: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x35ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ef54: 0xaca41330  sw          $a0, 0x1330($a1)
    ctx->pc = 0x35ef54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4912), GPR_U32(ctx, 4));
    // 0x35ef58: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x35ef5c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x35ef5cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35ef60: 0x0  nop
    ctx->pc = 0x35ef60u;
    // NOP
    // 0x35ef64: 0x0  nop
    ctx->pc = 0x35ef64u;
    // NOP
    // 0x35ef68: 0x1810  mfhi        $v1
    ctx->pc = 0x35ef68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35ef6c: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x35EF6Cu;
    {
        const bool branch_taken_0x35ef6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ef6c) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35EF74u;
    // 0x35ef74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef78: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x35ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ef7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35ef80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ef80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ef84: 0x0  nop
    ctx->pc = 0x35ef84u;
    // NOP
    // 0x35ef88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35ef88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35ef8c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x35ef8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x35ef90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef94: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x35ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ef98: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x35ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x35ef9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35ef9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35efa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35efa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35efa4: 0x0  nop
    ctx->pc = 0x35efa4u;
    // NOP
    // 0x35efa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35efa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35efac: 0x0  nop
    ctx->pc = 0x35efacu;
    // NOP
    // 0x35efb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x35EFB0u;
    {
        const bool branch_taken_0x35efb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35efb0) {
            ctx->pc = 0x35EFCCu;
            return;
        }
    }
    ctx->pc = 0x35EFB8u;
    // 0x35efb8: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x35efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x35efbc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35efc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35efc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35efc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35efc8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x35efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x35efccu;
}
