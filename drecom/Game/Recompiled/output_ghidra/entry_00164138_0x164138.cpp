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

// Function: entry_00164138
// Address: 0x164138 - 0x16419c
void entry_00164138_0x164138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164138_0x164138");
#endif

    ctx->pc = 0x164138u;

    // 0x164138: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x164138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16413c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16413cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164140: 0x0  nop
    ctx->pc = 0x164140u;
    // NOP
    // 0x164144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164148: 0x0  nop
    ctx->pc = 0x164148u;
    // NOP
    // 0x16414c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x16414Cu;
    {
        const bool branch_taken_0x16414c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16414c) {
            ctx->pc = 0x16419Cu;
            return;
        }
    }
    ctx->pc = 0x164154u;
    // 0x164154: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x164154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164158: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x16415c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164164: 0x0  nop
    ctx->pc = 0x164164u;
    // NOP
    // 0x164168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x164168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16416c: 0x0  nop
    ctx->pc = 0x16416cu;
    // NOP
    // 0x164170: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x164170u;
    {
        const bool branch_taken_0x164170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164170) {
            ctx->pc = 0x1641D8u;
            return;
        }
    }
    ctx->pc = 0x164178u;
    // 0x164178: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x164178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16417c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164180: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164188: 0x0  nop
    ctx->pc = 0x164188u;
    // NOP
    // 0x16418c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16418cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x164190: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x164190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x164194: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164194u;
    {
        const bool branch_taken_0x164194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164194) {
            ctx->pc = 0x1641D8u;
            return;
        }
    }
    ctx->pc = 0x16419Cu;
}
