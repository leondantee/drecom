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

// Function: entry_00128bc0
// Address: 0x128bc0 - 0x128c34
void entry_00128bc0_0x128bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128bc0_0x128bc0");
#endif

    ctx->pc = 0x128bc0u;

    // 0x128bc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128bc4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128bc8: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x128bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
    // 0x128bcc: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x128bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x128bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128bd4: 0x0  nop
    ctx->pc = 0x128bd4u;
    // NOP
    // 0x128bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128bdc: 0x0  nop
    ctx->pc = 0x128bdcu;
    // NOP
    // 0x128be0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x128BE0u;
    {
        const bool branch_taken_0x128be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128be0) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128BE8u;
    // 0x128be8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128bec: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x128becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128bf0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x128bf4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x128bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128bfc: 0x0  nop
    ctx->pc = 0x128bfcu;
    // NOP
    // 0x128c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128c04: 0x0  nop
    ctx->pc = 0x128c04u;
    // NOP
    // 0x128c08: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x128C08u;
    {
        const bool branch_taken_0x128c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128c08) {
            ctx->pc = 0x128C84u;
            return;
        }
    }
    ctx->pc = 0x128C10u;
    // 0x128c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x128c14: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x128c18: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x128c1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128C1Cu;
    {
        const bool branch_taken_0x128c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128c1c) {
            ctx->pc = 0x128C34u;
            return;
        }
    }
    ctx->pc = 0x128C24u;
    // 0x128c24: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x128c28: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x128c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x128c2c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x128C2Cu;
    {
        const bool branch_taken_0x128c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c2c) {
            ctx->pc = 0x128C84u;
            return;
        }
    }
    ctx->pc = 0x128C34u;
}
