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

// Function: entry_00128240
// Address: 0x128240 - 0x1282b4
void entry_00128240_0x128240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128240_0x128240");
#endif

    ctx->pc = 0x128240u;

    // 0x128240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128244: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128248: 0x3c0345ea  lui         $v1, 0x45EA
    ctx->pc = 0x128248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17898 << 16));
    // 0x12824c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x12824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x128250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128254: 0x0  nop
    ctx->pc = 0x128254u;
    // NOP
    // 0x128258: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x128258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12825c: 0x0  nop
    ctx->pc = 0x12825cu;
    // NOP
    // 0x128260: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x128260u;
    {
        const bool branch_taken_0x128260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128260) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x128268u;
    // 0x128268: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x128268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12826c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128270: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x128270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x128274: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x128274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x128278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x128278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12827c: 0x0  nop
    ctx->pc = 0x12827cu;
    // NOP
    // 0x128280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128284: 0x0  nop
    ctx->pc = 0x128284u;
    // NOP
    // 0x128288: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x128288u;
    {
        const bool branch_taken_0x128288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x128288) {
            ctx->pc = 0x128304u;
            return;
        }
    }
    ctx->pc = 0x128290u;
    // 0x128290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x128294: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x128298: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x128298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12829c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12829Cu;
    {
        const bool branch_taken_0x12829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12829c) {
            ctx->pc = 0x1282B4u;
            return;
        }
    }
    ctx->pc = 0x1282A4u;
    // 0x1282a4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1282a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1282a8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1282a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1282ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1282ACu;
    {
        const bool branch_taken_0x1282ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282ac) {
            ctx->pc = 0x128304u;
            return;
        }
    }
    ctx->pc = 0x1282B4u;
}
