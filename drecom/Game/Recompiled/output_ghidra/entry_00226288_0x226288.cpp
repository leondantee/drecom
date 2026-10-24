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

// Function: entry_00226288
// Address: 0x226288 - 0x2262f0
void entry_00226288_0x226288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226288_0x226288");
#endif

    ctx->pc = 0x226288u;

    // 0x226288: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22628c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226290: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226294: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x226294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x226298: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22629c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22629cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262a0: 0x0  nop
    ctx->pc = 0x2262a0u;
    // NOP
    // 0x2262a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2262a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2262a8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2262a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2262ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2262acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2262b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2262b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2262b4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2262b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2262b8: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2262b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2262bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2262bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2262c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2262c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262c4: 0x0  nop
    ctx->pc = 0x2262c4u;
    // NOP
    // 0x2262c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2262c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2262cc: 0x0  nop
    ctx->pc = 0x2262ccu;
    // NOP
    // 0x2262d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2262D0u;
    {
        const bool branch_taken_0x2262d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2262d0) {
            ctx->pc = 0x2262F0u;
            return;
        }
    }
    ctx->pc = 0x2262D8u;
    // 0x2262d8: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x2262d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x2262dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2262dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2262e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2262e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2262e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2262e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2262e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2262e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2262ec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2262ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x2262f0u;
}
