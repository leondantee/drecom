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

// Function: entry_001287c4
// Address: 0x1287c4 - 0x128838
void entry_001287c4_0x1287c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287c4_0x1287c4");
#endif

    ctx->pc = 0x1287c4u;

    // 0x1287c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1287c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1287c8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1287c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1287cc: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x1287ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
    // 0x1287d0: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1287d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1287d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1287d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1287d8: 0x0  nop
    ctx->pc = 0x1287d8u;
    // NOP
    // 0x1287dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1287dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1287e0: 0x0  nop
    ctx->pc = 0x1287e0u;
    // NOP
    // 0x1287e4: 0x4500015b  bc1f        . + 4 + (0x15B << 2)
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1287ECu;
    // 0x1287ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1287ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1287f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1287f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1287f4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1287f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1287f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1287f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1287fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1287fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128800: 0x0  nop
    ctx->pc = 0x128800u;
    // NOP
    // 0x128804: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128808: 0x0  nop
    ctx->pc = 0x128808u;
    // NOP
    // 0x12880c: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x12880Cu;
    {
        const bool branch_taken_0x12880c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12880c) {
            ctx->pc = 0x1288E4u;
            return;
        }
    }
    ctx->pc = 0x128814u;
    // 0x128814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x128818: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12881c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x128820: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128820u;
    {
        const bool branch_taken_0x128820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128820) {
            ctx->pc = 0x128838u;
            return;
        }
    }
    ctx->pc = 0x128828u;
    // 0x128828: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12882c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x128830: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x128830u;
    {
        const bool branch_taken_0x128830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128830) {
            ctx->pc = 0x1288E4u;
            return;
        }
    }
    ctx->pc = 0x128838u;
}
