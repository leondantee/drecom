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

// Function: entry_001352e4
// Address: 0x1352e4 - 0x135360
void entry_001352e4_0x1352e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001352e4_0x1352e4");
#endif

    switch (ctx->pc) {
        case 0x1352f0u: goto label_1352f0;
        case 0x135304u: goto label_135304;
        default: break;
    }

    ctx->pc = 0x1352e4u;

    // 0x1352e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1352e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1352e8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1352E8u;
    SET_GPR_U32(ctx, 31, 0x1352F0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1352F0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1352F0u) { return; }
    ctx->pc = 0x1352F0u;
label_1352f0:
    // 0x1352f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1352f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1352f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1352f8: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x1352f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1352fc: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1352FCu;
    SET_GPR_U32(ctx, 31, 0x135304u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x135304u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135304u) { return; }
    ctx->pc = 0x135304u;
label_135304:
    // 0x135304: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135308: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x135308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x13530c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x135310: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x135310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x135314: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x135314u;
    {
        const bool branch_taken_0x135314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135314) {
            ctx->pc = 0x135498u;
            return;
        }
    }
    ctx->pc = 0x13531Cu;
    // 0x13531c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135320: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x135320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135324: 0x3c02458c  lui         $v0, 0x458C
    ctx->pc = 0x135324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17804 << 16));
    // 0x135328: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x135328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x13532c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13532cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135330: 0x0  nop
    ctx->pc = 0x135330u;
    // NOP
    // 0x135334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x135334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135338: 0x0  nop
    ctx->pc = 0x135338u;
    // NOP
    // 0x13533c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x13533Cu;
    {
        const bool branch_taken_0x13533c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13533c) {
            ctx->pc = 0x135360u;
            return;
        }
    }
    ctx->pc = 0x135344u;
    // 0x135344: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x135344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x135348: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x135348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13534c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135350: 0x0  nop
    ctx->pc = 0x135350u;
    // NOP
    // 0x135354: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x135354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x135358: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x135358u;
    {
        const bool branch_taken_0x135358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135358) {
            ctx->pc = 0x1353F4u;
            return;
        }
    }
    ctx->pc = 0x135360u;
}
